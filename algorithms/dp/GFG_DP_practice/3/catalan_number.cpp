#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// binomial coefficient
// https://github.com/aaronhma/algorithms/blob/master/math/combinatorics/binomial-coefficient.cpp
int coefficient(int n, int k)
{
  if (k > n)
  {
    return 0;
  }

  if (k == 0 || k == n)
    return 1;

  return coefficient(n - 1, k - 1) + coefficient(n - 1, k);
}

// formula: (1 / (n + 1)) * (2n Choose n)
// = (2n Choose n) / (n + 1)
int catalan(int n) {
  return coefficient(2 * n, n) / (n + 1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n;
  cin >> n;

  // cout << catalan(n) << "\n";
  for (int i = 0; i < 10; i++)
    cout << catalan(i) << "\n";

  return 0;
}
