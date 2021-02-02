# Maximum Sum Submatrix

## The Problem

Assume that we have the following matrix of size $n * m$:

$$\{\{ 1, -2,-1, 4 \}, \{ 1, -1, 1, 1 \}, \{ 0, -1,-1, 1 \}, \{ 0, 0, 1, 1 \} \}$$

If we are asked to compute the maximum sum submatrix, the answer sould be $7$ ($(-1) + 4 + 1 + 1 + (-1) + 1 + 1 + 1 = 7$).

## Approach 1: Brute Force

We can brute force the solution for a time complexity of $\theta(nm^2)$. We use the approach presented [here](https://prismoskills.appspot.com/lessons/Dynamic_Programming/Chapter_07_-_Submatrix_with_largest_sum.jsp) and we calculate the maximum sum subarray using [Kadane's Algorithm](https://aaronhma.medium.com/algorithm-spotlight-kadanes-algorithm-8ea7ceae9a1a).

```cpp
int maxSum(vector<vector<int>> &arr, int n, int m)
{
  // (possibly) minimum answer: arr[0][0]
  int ans = arr[0][0];

  // Starting row index of submatrix
  for (int i = 0; i < m; i++)
  {
    // Array to store sum of all elements from arr[i][k]
    // to arr[j][k]
    vector<int> curr(n, 0);

    // Ending row index of submatrix
    for (int j = i; j < m; j++)
    {
      // Find sum of every row between left and right
      for (int k = 0; k < n; k++)
        curr[k] += arr[j][k];

      // Find the maximum sum subarray using Kadane's Algorithm (greedy)
      int local = curr[0], global = curr[0];

      for (int k : curr)
      {
        local = max(local + k, k);
        global = max(global, local);
      }

      // Update answer
      ans = max(ans, global);
    }
  }

  // Return the answer
  return ans;
}
```
