// Sieve of Eratosthenes
#include <bits/stdc++.h>

using namespace std;

// O(n log n)
// 0 - prime
// 1 - composite
vector<int> getSieve(int n)
{
  vector<int> sieve(n + 1, 0);

  // Don't check the numbers after n / 2 because we have already marked them.
  for (int i = 2; i <= n / 2; i++)
  {
    if (sieve[i])
      continue;

    for (int j = 2 * i; j <= n; j += i)
      sieve[j] = 1;
  }

  return sieve;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> sieve = getSieve(17);

  for (int i = 2; i <= 17; i++)
  {
    if (sieve[i] == 0)
      cout << i << "\n";
  }

  return 0;
}
