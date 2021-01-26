#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
  // 2 ... n - 1
  for (int i = 2; i <= sqrt(n); i++)
  {
    // not prime
    if (n % i == 0)
      return false;
  }

  // prime
  return true;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << isPrime(2) << "\n"; // 1

  return 0;
}
