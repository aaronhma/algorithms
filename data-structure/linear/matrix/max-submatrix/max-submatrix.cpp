#include <bits/stdc++.h>

using namespace std;

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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> arr = {{1, -2, -1, 4},
                             {1, -1, 1, 1},
                             {0, -1, -1, 1},
                             {0, 0, 1, 1}};
  int n = arr.size(), m = arr[0].size();

  cout << maxSum(arr, n, m) << "\n"; // 7

  return 0;
}
