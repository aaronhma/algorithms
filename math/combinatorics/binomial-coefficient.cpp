#include <bits/stdc++.h>

using namespace std;

// Formula:
// C(n, k) = C(n-1, k-1) + C(n-1, k)
// C(n, 0) = C(n, n) = 1
int binomial(int n, int k) {
  if (n == k || n == 0 || k == 0) return 1;
  if (k > n) exit(EXIT_FAILURE);

  vector<vector<int>> dp(n + 1, vector<int>(k + 1));

  for (int i = 0; i <= n; i++) // k = 0
    dp[i][0] = 1;

  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= k; j++)
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];

  return dp[n][k];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << binomial(4, 2) << "\n"; // 6
  cout << binomial(5, 2) << "\n"; // 10

  return 0;
}
