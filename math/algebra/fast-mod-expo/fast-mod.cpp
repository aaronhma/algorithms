#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// O(log n)
ll modpow(ll x, ll n, ll m)
{
  // Case 1: n == 0
  // Formula: 1 % m
  if (n == 0)
    return 1 % m;

  // Case 2: n is odd
  // Formula: (x % m) * (x^{n - 1} % m) % m
  // This is the same as:
  // (x * x^{n - 1}) % m
  if (n % 2 == 1)
    return ((x % m) * (modpow(x, n - 1, m) % m)) % m;

  // Case 3: n is even
  // Formula: (x^{n / 2} * x^{n / 2}) % m
  ll ans = modpow(x, n / 2, m);
  return (ans * ans) % m;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << modpow(2, 10, 1000000007) << "\n"; // 1024

  return 0;
}
