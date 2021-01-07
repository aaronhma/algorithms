// Calculating Bonomial Coefficients
#include <bits/stdc++.h>

using namespace std;

int coefficient(int n, int k)
{
  if (k > n)
  {
    cout << "Impossible to calculate the binomial coefficient with n = " << n << " and k = " << k << "! Exiting...\n";
    exit(EXIT_SUCCESS);
  }

  if (k == 0 || k == n)
    return 1;

  return coefficient(n - 1, k - 1) + coefficient(n - 1, k);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << coefficient(5, 2) << "\n"; // 10
  cout << coefficient(2, 5) << "\n"; // error

  return 0;
}
