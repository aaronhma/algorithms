// Sieve of Eratosthenes
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  const int x = 3019, n = 4000;

  vector<int> sieve(n + 1, 0);

  for (int i = 2; i <= n; i++)
  {
    if (sieve[i])
      continue;

    for (int j = 2 * i; j <= n; j += i)
      sieve[j] = 1;
  }

  if (sieve[x] == 0)
    cout << "PRIME\n";
  else
    cout << "COMPOSITE\n";

  return 0;
}
