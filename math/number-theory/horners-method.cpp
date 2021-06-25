#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<str> vstr;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define f first
#define s second
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define PB push_back
#define sz(x) (int)x.size()
#define FORE(i, a, b) for (int i = a; i < b; i++)
#define FORI(i, a, b) for (int i = a; i <= b; i++)
#define each(i, x) for (auto &i : x)

int horner(vi &poly, int &n, int &x)
{
  int result = poly[0]; // Initialize result

  // Evaluate value of polynomial using Horner's method
  for (int i = 1; i < n; i++)
    result = result * x + poly[i];

  return result;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vi poly{2, -6, 2, -1};
  int x = 3;
  int n = sz(poly);
  cout << "2x^3 - 6x^2 + 2x - 1 for x = 3: " << horner(poly, n, x) << "\n";

  return 0;
}
