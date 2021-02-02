# Maximum Size Square Full of $1$s

## The Problem

Assume that we have an $n * m$ array $arr$:

$$arr = \{ \{ 1, 1, 1 \}, \{ 1, 1, 1 \}, \{ 1,1,1 \} \}$$

If we were to calculate the maximum length of a square full of $1$s, the answer would be $3$ (the square is $\{ \{ 1, 1, 1 \}, \{ 1, 1, 1 \}, \{ 1,1,1 \} \}$).

## Approach 1: Dynamic Programming

We can solve this problem in $\theta(nm)$ time using $\theta(nm)$ space.

We brute force the $i$ (row index) and $j$ (column index) indexes. Then, at each step, we have two cases:

- $arr[i][j] = 0$
  - $maxLen[i][j] = 0$
- $arr[i][j] = 1$
  - Get the minimum of the top element, left element, and top left element and increase $1$ to it (this is a DP formula)

### **TIP: Click [here](https://leetcode.com/problems/maximal-square/solution/) for a better explanation.**

```cpp
int maxSquare(vector<vector<int>> &arr, int n, int m)
{
  int ans = 0; // Answer

  // maxLen[i][j] = maximum size of square with the following property:
  // start of square: (i - x + 1, j - x + 1)
  // end of square: (i, j)
  vector<vector<int>> maxLen(n, vector<int>(m));

  // Row index
  for (int i = 0; i < n; i++)
  {
    // Column index
    for (int j = 0; j < m; j++)
    {
      // To prevent segmentation fault (out of bounds index)
      int j_diff = max(0, j - 1), i_diff = max(0, i - 1);

      // Case 1: arr[i][j] is 0
      if (arr[i][j] == 0)
        maxLen[i][j] = 0; // maximum size of square is 0

      // Case 2: arr[i][j] is 1
      // If this element is part of another square, increase previous x (x + 1)
      // Otherwise, this element is the start of another square (x = 1)
      else
        maxLen[i][j] = min(maxLen[i_diff][j], min(maxLen[i][j_diff], maxLen[i_diff][j_diff])) + 1;

      // Update answer
      ans = max(ans, maxLen[i][j]);
    }
  }

  // Return the answer
  return ans;
}
```
