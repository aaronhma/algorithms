#include <iostream>

using namespace std;

int stairs(int levels)
{
  int dp[levels + 1];

  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= levels; i++)
  {
    dp[i] = dp[i - 1] + dp[i - 2];
  }

  return dp[levels];
}

int main()
{
  cout << stairs(5) << "\n";

  return 0;
}
