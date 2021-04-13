#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// 1000001 == 1e6 + 1
ll cache[1000001][1000001];

// Formula:
// C(n, k) = C(n-1, k-1) + C(n-1, k)
// C(n, 0) = C(n, n) = 1
ll C(ll n, ll k) {
  if (k > n) {
    cerr << "ERROR: " << k << " > " << n << ", expected " << k << " <= " << n << "\n";
    exit(EXIT_FAILURE);
  }
  if (k == 0 || n == k) return 1;
  if (cache[n][k] != 0) return cache[n][k];

  cache[n][k] = C(n - 1, k - 1) + C(n - 1, k);

  return cache[n][k];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << C(5, 2) << "\n"; // 10

  return 0;
}
