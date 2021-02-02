#include <bits/stdc++.h>

using namespace std;

/**
 * Returns the max size square full of 1s
*/
// O(nm)
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> arr = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};

  int n = arr.size(), m = arr[0].size();

  cout << maxSquare(arr, n, m) << "\n"; // 3

  return 0;
}
