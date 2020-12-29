#include <iostream>

using namespace std;

int factorial(int n)
{
  int dp[n + 1];
  dp[0] = 1;
  dp[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    dp[i] = i * dp[i - 1];
  }

  return dp[n];
}

int main()
{
  cout << factorial(5) << "\n";

  return 0;
}
