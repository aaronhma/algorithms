#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define P pair<ll, ll>
#define f first
#define s second

const ll mod = 1e9 + 7;

P fib(ll n) {
  if (n == 0)
    return {0, 1};

  P prev = fib(n >> 1);
  ll c = (prev.f * (2 * prev.s - prev.f)) % mod;
  ll d = (prev.f * prev.f + prev.s * prev.s) % mod;

  if (n & 1) return {d, c + d};

  return {c, d};
}

int main()
{
  cout << fib(16).f << "\n"; // 987
  cout << fib(16).s << "\n"; // 1597

  return 0;
}
