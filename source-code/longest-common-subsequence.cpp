#include <bits/stdc++.h>

using namespace std;

int main()
{
  // string S = "ABCDGH", T = "AEDFHR";  // 3 ADH
  // string S = "AGGTAB", T = "GXTXAYB"; // 4 GTAB
  string S = "acbcf", T = "abcdaf"; // 4 abcf

  int m = S.size() + 1, n = T.size() + 1;
  vector<vector<int>> dp(m, vector<int>(n));
  vector<char> c;

  for (int i = 1; i < m; i++)
  {
    for (int j = 1; j < n; j++)
    {
      if (S[i - 1] == T[j - 1])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  for (int i = 0; i < dp.size(); i++)
  {
    for (int j = 0; j < dp[0].size(); j++)
    {
      cout << dp[i][j] << " ";
    }

    cout << "\n";
  }

  cout << "Longest Common SubSequence is " << dp[m - 1][n - 1] << "\n";

  return 0;
}
