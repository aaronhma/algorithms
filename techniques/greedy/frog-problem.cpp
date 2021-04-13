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
#define rtn return
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define LB lower_bound
#define UB upper_bound
#define BINS binary_search
#define READ(x) ifstream cin(x ".in");
#define OUT(x) ofstream cout(x ".out");
#define IT(x) for (auto it = begin(x); it != end(x); it++)
#define RIT(x) for (auto it = rbegin(x); it != rend(x); it++)
#define FORE(i, a, b) for (int i = a; i < b; i++)
#define FORI(i, a, b) for (int i = a; i <= b; i++)
#define each(i, x) for (auto &i : x)

const int MOD = 1e9 + 7;
const int INF_INT = 2147483647;
const long INF_L = 1000000000000000003;
const ll INF_LL = 9223372036854775807;
const ld PI = acos((ld)-1);

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

// Returns ceil(a / b) (b != 0)
int ceildiv(int a, int b)
{
  rtn a / b + !(a < 0 || a % b == 0);
}

// INPUT
template <class T>
void read(T &x) { cin >> x; }
template <class Arg, class... Args>
void read(Arg &first, Args &...rest);
void read(double &x)
{
  string t;
  read(t);
  x = stod(t);
}
void read(ld &x)
{
  string t;
  read(t);
  x = stold(t);
}

template <class T>
void read(complex<T> &x);
template <class T1, class T2>
void read(pair<T1, T2> &p);
template <class T>
void read(vector<T> &a);
template <class T, size_t SZ>
void read(array<T, SZ> &a);

template <class Arg, class... Args>
void read(Arg &first, Args &...rest)
{
  read(first);
  read(rest...);
}
template <class T>
void read(complex<T> &x)
{
  T a, b;
  read(a, b);
  x = cd(a, b);
}
template <class T1, class T2>
void read(pair<T1, T2> &p) { read(p.f, p.s); }
template <class T>
void read(vector<T> &a)
{
  FORE(i, 0, sz(a))
  read(a[i]);
}
template <class T>
void read(vector<T> &a, int n)
{
  FORE(i, 0, n)
  read(a[i]);
}

// OUTPUT
template <class T1, class T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &a)
{
  os << '{' << a.f << ", " << a.s << '}';
  return os;
}

template <class T>
ostream &printArray(ostream &os, const T &a, int SZ)
{
  os << '{';
  FORE(i, 0, SZ)
  {
    if (i)
    {
      os << ", ";
    }
    os << a[i];
  }
  os << '}';
  return os;
}
template <class T, size_t SZ>
ostream &operator<<(ostream &os, const array<T, SZ> &a)
{
  return printArray(os, a, SZ);
}
template <class T>
ostream &operator<<(ostream &os, const vector<T> &a)
{
  return printArray(os, a, sz(a));
}
template <class T>
ostream &operator<<(ostream &os, const set<T> &a)
{
  os << vector<T>(all(a));
  return os;
}
template <class T1, class T2>
ostream &operator<<(ostream &os, const map<T1, T2> &a)
{
  os << vector<pair<T1, T2>>(all(a));
  return os;
}

template <class T>
void pr(const T &x) { cout << x << '\n'; }
template <class Arg, class... Args>
void pr(const Arg &first, const Args &...rest)
{
  cout << first << ' ';
  pr(rest...);
}

mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

int main()
{
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  int n, k, d0, d1, i = 0, jumps = 0;
  bool solveable = true;
  read(n, d0, d1, k);

  vi dist(n);
  read(dist);

  while (i < n && solveable) {
    if (i == n - 1) break;
    int j = i + 1, curr = dist[i];

    while (j < n && curr + dist[j] <= k) {
      curr += dist[j];
      j++;
    }

    j--;

    if (j == i && dist[i] > k) {
      solveable = false;
    } else if (j == i) {
      i++;
    } else {
      i = j;
    }

    jumps++;
  }

  if (solveable && d0 <= k && d1 <= k) {
    cout << "The frog can go home in " << jumps << " jumps!\n";
  } else {
    cout << "The frog can't go home!\n";
  }

  return 0;
}
