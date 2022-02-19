// Sieve of Eratosthenes
#include <bits/stdc++.h>

using namespace std;

// O(n log log n)
vector<int> getSieve(int n)
{
  // 0: composite
  // 1: prime
  vector<int> sieve(n + 1, 1);

  sieve[0] = sieve[1] = 0;

  // Don't check the numbers after n / 2 because we have already marked them.
  for (int i = 2; i * i <= n; i++)
  {
    // if this number has already been marked as composite, skip this number
    if (!sieve[i])
      continue;

    // mark all multiples of this number as composite
    for (int j = 2 * i; j <= n; j += i)
      sieve[j] = 0;
  }

  return sieve;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> sieve = getSieve(n);

  for (int i = 2; i <= n; i++)
  {
    if (sieve[i])
      cout << i << "\n";
  }

  return 0;
}
