# Queries on Matrices [C++ Code](./sum-query.cpp)

## The Problem

Given an $n * m$ matrix $arr$, compute the sum of the elements from the range $arr[r_1][c_1]$ to $arr[r_2][c_2]$.

In other words, calculate $sum(r_1, c_1, r_2, c_2)$ where $r_1 \leq r_2$ and $c_1 \leq c_2$.

## Approach 1: Brute Force

We can solve this problem in $\theta(nm)$ time per query using a brute force solution.

```cpp
int sum = 0;

for (int i = r_1; i <= r_2; i++) {
  for (int j = c_1; j <= c_2; j++) {
    sum += arr[i][j];
  }
}
```

## Approach 2: Prefix Sum

A better solution to this problem is using a prefix sum matrix. We use $\theta(nm)$ time to build the prefix sum matrix, and $\theta(1)$ time to answer queries.

---

### Building the Prefix Sum Matrix

Create a matrix $sum$ that has a size of $n * m$. To fill this matrix, we handle 3 cases:

1. Copy first row of matrix into prefix sum matrix
2. Add previous top element sum
3. Add previous left element sum

Below is the code implementing this idea. For more information regarding how to build the prefix sum matrix and calculating the sum, see [this](https://usaco.guide/silver/prefix-sums?lang=cpp#2d-prefix-sums) article.

```cpp
vector<vector<int>> buildPrefixSum(vector<vector<int>> &arr, int n, int m)
{
  vector<vector<int>> sum(n, vector<int>(m));

  // Copy first row of matrix into prefix sum matrix
  for (int i = 0; i < m; i++)
    sum[0][i] = arr[0][i];

  // Add previous top element sum
  for (int i = 1; i < n; i++)
    for (int j = 0; j < m; j++)
      sum[i][j] = arr[i][j] + sum[i - 1][j];

  // Add previous left element sum
  for (int i = 0; i < n; i++)
    for (int j = 1; j < m; j++)
      sum[i][j] += sum[i][j - 1];

  return sum;
}

int getSum(vector<vector<int>> &sum, int x_1, int y_1, int x_2, int y_2)
{
  // default answer: sum of elements between (0, 0) and (x_2, y_2)
  int ans = sum[x_2][y_2];

  // remove elements between (0, 0) and (x_1 - 1, y_2)
  if (x_1 > 0)
    ans -= sum[x_1 - 1][y_2];

  // remove elements between (0, 0) and (x_2, y_2 - 1)
  if (y_1 > 0)
    ans -= sum[x_2][y_1 - 1];

  // Add sum[x_1 - 1][y_1 - 1] as elements between (0, 0) and (x_1 - 1, y_1 - 1) are subtracted twice
  if (x_1 > 0 && y_1 > 0)
    ans += sum[x_1 - 1][y_1 - 1];

  return ans;
}
```
