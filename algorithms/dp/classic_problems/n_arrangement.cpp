#include <iostream>

using namespace std;

// int *dp = new int[100];

int solve(int n)
{
  if (n < 1)
  {
    return 0;
  }
  if (n == 1)
    return 1;

  return solve(n - 1) + solve(n - 3) + solve(n - 5);
}

int main()
{
  cout << solve(6) << "\n";

  // delete dp;

  return 0;
}
