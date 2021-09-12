// https://www.spoj.com/problems/KNAPSACK/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int s, n;
  cin >> s >> n;

  vector<pair<int, int>> arr(n);
  vector<vector<int>> dp(n + 1, vector<int>(s + 1, 0));

  // (weight, value)
  for (int i = 0; i < n; i++)
    cin >> arr[i].first >> arr[i].second;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      int cost = arr[i - 1].first, v = arr[i - 1].second;

      // If the cost <= j, we can select this value.
      // Select this item - update value
      // max(don't select this item, select this item)
      if (cost <= j)
        dp[i][j] = max(dp[i - 1][j], v + dp[i - 1][j - cost]);

      // If cost > j, we can't select this item, use previous value.
      else
        dp[i][j] = dp[i - 1][j];
    }
  }

  cout << dp[n][s] << "\n";

  return 0;
}
