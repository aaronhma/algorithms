// // https://www.spoj.com/problems/MST/
// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// struct Edge {
//   ll a, b, w;
// };

// class DisjointSet {
// public:
//   DisjointSet() {}
//   ~DisjointSet() {}

//   void init(ll n) {
//     for (ll i = 1; i <= n; i++)
//       parent[i] = i;
//   }

//   ll find(ll i) {
//     if (i == parent[i]) return i;

//     return parent[i] = find(parent[i]);
//   }

//   void add(ll a, ll b) {
//     ll fa = find(a), fb = find(b);

//     parent[fa] = fb;
//   }

//   private:
//     map<ll, ll> parent;
// };

// ll kruskal(vector<Edge> &graph, ll &n) {
//   DisjointSet *set = new DisjointSet;
//   set->init(n + 1);

//   sort(graph.begin(), graph.end(), [](const Edge &a, const Edge &b) {
//     return a.w < b.w;
//   });

//   int ans = 0;

//   for (Edge i : graph) {
//     if (set->find(i.a) != set->find(i.b)) {
//       set->add(i.a, i.b);
//       ans += i.w;
//     }
//   }

//   return ans;
// }

// int main()
// {
//   ll n, m, a, b, w;
//   cin >> n >> m;
//   n *= 2; // 2n edges because the graph is undirected

//   vector<Edge> graph;

//   while (m--) {
//     cin >> a >> b >> w;
//     Edge ne; ne.a = a; ne.b = b; ne.w = w;
//     Edge ne1; ne1.a = b; ne1.b = a; ne1.w = w;
//     graph.push_back(ne);
//     graph.push_back(ne1);
//   }

//   cout << kruskal(graph, n) << "\n";

//   return 0;
// }
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

template <class Arg, class... Args>
void read(Arg &first, Args &...rest)
{
  read(first);
  read(rest...);
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

// Fast I/O
void setIO(str S = "", bool use_txt = false)
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  if (!S.empty())
  {
    if (use_txt)
    {
      freopen((S + ".txt").c_str(), "r", stdin);
      freopen((S + ".txt").c_str(), "w", stdout);
    }
    else
    {
      freopen((S + ".in").c_str(), "r", stdin);
      freopen((S + ".out").c_str(), "w", stdout);
    }
  }
}

// Custom hash for unordered_map and unordered_set (works only for integers)
struct custom_hash
{
  static uint64_t splitmix64(uint64_t x)
  {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const
  {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};

void addEdge(vector<vpii> &graph, int a, int b, int w) {
  graph[a].PB({b, w});
  graph[b].PB({a, w});
}

void bfs01(vector<vpii> &graph, vi &distance, int start) {
  deque<int> DQ;
  DQ.PB(start);
  distance[start] = 0;

  while (!DQ.empty()) {
    int node = DQ.front();
    DQ.pop_front();

    for (pii i : graph[node]) {
      int b = i.f, w = i.s;

      int new_dist = distance[node] + w;

      if (new_dist < distance[b]) {
        distance[b] = new_dist;

        if (w==1)DQ.PB(b);
        else DQ.push_front(b);
      }
    }
  }
}

int main()
{
  int n = 7, start = 1;

  vector<tuple<int, int, int>> data{{1, 2, 0}, {2, 3, 1}, {1, 4, 1}, {4, 5, 1}, {3, 5, 0}, {5, 6, 1}};
  vector<vector<pair<int, int>>> graph(n);

  for (auto i : data)
    addEdge(graph, get<0>(i), get<1>(i), get<2>(i));

  vector<int> distance(n, INF_INT);

  bfs01(graph, distance, start);

  for (int i : distance) cout << i << " ";
  cout << "\n";

  return 0;
}
/**
 * Steps to solve CP problems:
 * 1) Carefully extract the important information from the problem.
 * 2) Find out all the hidden information.
 * 3) Read input & output & understand the question.
 * 4) Visualize the problem.
 *  a. Does my result output the expected output?
 *  b. Does the idea you think works?
 *  c. Check for edge cases.
 * 5) Implementation.
*/
