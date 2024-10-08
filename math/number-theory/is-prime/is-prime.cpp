#include <bits/stdc++.h>

using namespace std;

// O(sqrt(n))
bool isPrime(int n)
{
  // 2 ... sqrt(n)
  for (int i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false; // not prime

  return true; // prime
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << isPrime(2) << "\n"; // 1

  return 0;
}
