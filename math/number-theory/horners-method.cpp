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

// INPUT
template <class T>
void read(T &x) { cin >> x; }

template <class Arg, class... Args>
void read(Arg &first, Args &...rest)
{
  read(first);
  read(rest...);
}
template <class T>
void read(vector<T> &a)
{
  FORE(i, 0, sz(a))
  read(a[i]);
}

ll eval(vll &poly, ll n, ll x)
{
  ll result = poly[0]; // Initialize result

  // Evaluate value of polynomial using Horner's method
  for (ll i = 1; i < n; i++) {
    result %= 998244353;
    result = result * x + poly[i];
  }

  return result % 998244353;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll m, n, a, d;
  read(n, m, a, d);

  vll arr(n);

  for (ll i = 0; i <= m; i++)
  {
    cin >> arr[i];
  }

  ll top = a + ((n - 1) * d);

  for (ll i = a; i <= top; i += d)
  {
    cout << eval(arr, m + 1, i) << " ";
  }

  cout << "\n";

  return 0;
}
