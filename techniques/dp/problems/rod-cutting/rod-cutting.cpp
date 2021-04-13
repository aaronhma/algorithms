#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define sz(x) (int)x.size()
#define FORE(i, a, b) for (int i = a; i < b; i++)
#define MAX_N 1000

int dp[MAX_N];

int maxSum(vi &sellPrice, int n) {
  if (n <= 0) return 0;
  if (dp[n] != 0) return dp[n];

  for (int i = 0; i < n; i++) {
    dp[n] = max(dp[n], sellPrice[i] + maxSum(sellPrice, n - i - 1));
  }

  cout << n << " | " << dp[n] << " ** 2 = " << 1LL * dp[n] * dp[n] << "\n";

  return dp[n] * dp[n];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vi sellPrice = {0, 1, 4, 6, 7, 5};
  // for (int &i : sellPrice) i = i * i;
  cout << maxSum(sellPrice, sz(sellPrice)) << "\n"; // 8

  return 0;
}
