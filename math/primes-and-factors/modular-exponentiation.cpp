// Modular Exponentiation
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll modpow(ll x, ll n, ll m)
{
  // Case 1: n == 0
  // Formula: 1 % m
  if (n == 0)
    return 1 % m;

  // Case 2: n is even
  // Formula: (x^{n / 2} * x^{n / 2}) % m
  ll ans = modpow(x, n / 2, m);

  if (n % 2 == 0)
    return (ans * ans) % m;

  // Case 3: n is odd
  // Formula: (x % m) * (x^{n - 1} % m) % m
  return ((x % m) * (modpow(x, n - 1, m) % m)) % m;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll x = 4, n = 17, m = 23;
  ll ans = modpow(x, n, m);

  cout << ans << "\n";
  cout << (ll)pow(x, n) % m << "\n";

  return 0;
}
