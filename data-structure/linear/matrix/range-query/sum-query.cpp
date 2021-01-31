#include <bits/stdc++.h>

using namespace std;

// O(nm)
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

// O(1)
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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> arr = {{1, 7, 12, 10, 1, 0}, {11, 7, -10, 1, 3, 13}, {-2, 9, -5, 2, 4, 7}, {4, 14, -9, 3, 13, -6}, {-7, -8, -9, 12, 6, 4}, {2, -13, 10, 11, 8, 7}};

  int n = arr.size(), m = arr[0].size();

  vector<vector<int>> ans = buildPrefixSum(arr, n, m);

  for (vector<int> i : ans)
  {
    for (int j : i)
    {
      cout << j << " ";
    }

    cout << "\n";
  }

  cout << getSum(ans, 0, 2, 2, 4) << "\n"; // 18

  return 0;
}
