// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef string str;
// typedef vector<int> vi;
// typedef vector<bool> vb;
// typedef vector<ll> vll;
// typedef vector<char> vc;
// typedef vector<str> vstr;
// typedef vector<vi> vvi;
// typedef pair<int, int> pii;
// typedef vector<pii> vpii;

// #define f first
// #define s second
// #define all(x) begin(x), end(x)
// #define rall(x) rbegin(x), rend(x)
// #define PB push_back
// #define sz(x) (int)x.size()
// #define rtn return
// #define rsz resize
// #define ins insert
// #define ft front()
// #define bk back()
// #define LB lower_bound
// #define UB upper_bound
// #define BINS binary_search
// #define IT(x) for (auto it = begin(x); it != end(x); it++)
// #define RIT(x) for (auto it = rbegin(x); it != rend(x); it++)
// #define FORE(i, a, b) for (int i = a; i < b; i++)
// #define FORI(i, a, b) for (int i = a; i <= b; i++)
// #define each(i, x) for (auto &i : x)

// const int MOD = 1e9 + 7;
// const int INF_INT = 2147483647;
// const long INF_L = 1000000000000000003;
// const ll INF_LL = 9223372036854775807;
// const ld PI = acos((ld)-1);

// const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

// // Returns ceil(a / b) (b != 0)
// int ceildiv(int a, int b)
// {
//   rtn a / b + !(a < 0 || a % b == 0);
// }

// // INPUT
// template <class T>
// void read(T &x) { cin >> x; }

// void read(double &x)
// {
//   string t;
//   read(t);
//   x = stod(t);
// }
// void read(ld &x)
// {
//   string t;
//   read(t);
//   x = stold(t);
// }

// template <class T>
// void read(complex<T> &x)
// {
//   T a, b;
//   read(a, b);
//   x = cd(a, b);
// }

// template <class T1, class T2>
// void read(pair<T1, T2> &p) { read(p.f, p.s); }

// template <class T>
// void read(vector<T> &a)
// {
//   FORE(i, 0, sz(a))
//   read(a[i]);
// }

// template <class Arg, class... Args>
// void read(Arg &first, Args &...rest)
// {
//   read(first);
//   read(rest...);
// }

// // OUTPUT
// template <class T1, class T2>
// ostream &operator<<(ostream &os, const pair<T1, T2> &a)
// {
//   os << '{' << a.f << ", " << a.s << '}';
//   return os;
// }

// template <class T>
// ostream &printArray(ostream &os, const T &a, int SZ)
// {
//   os << '{';
//   FORE(i, 0, SZ)
//   {
//     if (i)
//     {
//       os << ", ";
//     }
//     os << a[i];
//   }
//   os << '}';
//   return os;
// }

// template <class T>
// ostream &operator<<(ostream &os, const vector<T> &a)
// {
//   return printArray(os, a, sz(a));
// }
// template <class T>
// ostream &operator<<(ostream &os, const set<T> &a)
// {
//   os << vector<T>(all(a));
//   return os;
// }
// template <class T1, class T2>
// ostream &operator<<(ostream &os, const map<T1, T2> &a)
// {
//   os << vector<pair<T1, T2>>(all(a));
//   return os;
// }

// template <class T>
// void pr(const T &x) { cout << x << '\n'; }
// template <class Arg, class... Args>
// void pr(const Arg &first, const Args &...rest)
// {
//   cout << first << ' ';
//   pr(rest...);
// }

// mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// // Fast I/O
// void setIO(str S = "", bool use_txt = false)
// {
//   ios_base::sync_with_stdio(false);
//   cin.tie(NULL);

//   if (!S.empty())
//   {
//     if (use_txt)
//     {
//       freopen((S + ".txt").c_str(), "r", stdin);
//       freopen((S + ".txt").c_str(), "w", stdout);
//     }
//     else
//     {
//       freopen((S + ".in").c_str(), "r", stdin);
//       freopen((S + ".out").c_str(), "w", stdout);
//     }
//   }
// }

// // Custom hash for unordered_map and unordered_set (works only for integers)
// struct custom_hash
// {
//   static uint64_t splitmix64(uint64_t x)
//   {
//     // http://xorshift.di.unimi.it/splitmix64.c
//     x += 0x9e3779b97f4a7c15;
//     x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//     x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//     return x ^ (x >> 31);
//   }

//   size_t operator()(uint64_t x) const
//   {
//     static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//     return splitmix64(x + FIXED_RANDOM);
//   }
// };

// void addEdge(vector<vector<pair<int, int>>> &graph, int a, int b, int weight)
// {
//   graph[a].push_back({b, weight});
//   graph[b].push_back({a, weight});
// }

// void bfs01(vector<vector<pair<int, int>>> &graph, vector<int> &distance, int start)
// {
//   deque<int> DQ;
//   DQ.PB(start);

//   distance[start] = 0;

//   while (!DQ.empty()) {
//     int node = DQ.front();
//     DQ.pop_front();

//     for (pii i : graph[node]) {
//       int b = i.f, w = i.s;
//       int new_dist = distance[node] + w;

//       if (new_dist < distance[b]) {
//         distance[b] = new_dist;

//         if (w == 1) DQ.PB(b);
//         else DQ.push_front(b);
//       }
//     }
//   }
// }

// int main()
// {
//   int n = 7, start = 1;

//   vector<tuple<int, int, int>> data{{1, 2, 0}, {2, 3, 1}, {1, 4, 1}, {4, 5, 1}, {3, 5, 0}, {5, 6, 1}};
//   vector<vector<pair<int, int>>> graph(n);

//   for (auto i : data)
//     addEdge(graph, get<0>(i), get<1>(i), get<2>(i));

//   vector<int> distance(n, INF_INT);

//   bfs01(graph, distance, start);

//   for (int i : distance) cout << i << " ";
//   cout << "\n";

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
  os << vector<pair<T1, T2> >(all(a));
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

struct Point
{
  int x, y, parent_x = -1, parent_y = -1;
  bool visited = 0;

  double f = DBL_MAX, g = DBL_MAX;

  Point() {}
  Point(int X, int Y) : x(X), y(Y) {}

  bool isValid(int &n int &m) {
    return x >= 0 && x < n && y >= 0 && y < m;
  }

  bool operator==(const Point &other) {
    return x == other.x && y == other.y;
  }

  void update(int px, int py) {
    parent_x = px, parent_y = py;
  }

  void update(int px, int py, double nf, double ng) {
    parent_x = px, parent_y = py, f = nf, g = ng;
  }
};

double calcHVal(int &x, int &y, Point &dest) {
  return sqrt((x - dest.x) * (x - dest.x) + (y - dest.y) * (y - dest.y));
}

void aStarSearch(vvi &arr, Point &start, Point &end, int &n, int &m) {
  if (!(start.isValid(n, m) && end.isValid(n, m) && arr[start.x][start.y] && arr[end.x][end.y])) {
    return;
  }

  if (start == end) {
    return;
  }

  vector<vector<Point>> points(n, vector<Point>(m));

  points[start.x][start.y].update(start.x, start.y, 0.0, 0.0);

  queue<Point> Q;
  Q.push(start);

  while (!Q.empty()) {
    Point node = Q.front();
    Q.pop();

    int i = node.x, j = node.y;
    node.visited = 1;

    for (int k = 0; k < 4; k++) {
      Point neighbor(i + dx[k], j + dy[k]);

      if (neighbor.isValid(n, m) && arr[neighbor.x][neighbor.y]) {
        if (neighbor.x == end.x && neighbor.y == end.y) {
          cout << "path exists\n";
          points[neighbor.x][neighbor.y].update(i, j);
          return;
        }

        if (!neighbor.visited) {
          double
        }
      }
    }
  }
}

int main()
{
  setIO(); // Disable this during interactive problems

  vector<vector<int> > arr{{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                           {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
                           {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
                           {0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                           {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
                           {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
                           {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                           {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                           {1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

  int n = (int)arr.size(), m = (int)arr[0].size();
  Point start(8, 0), end(0, 0);

  aStarSearch(arr, start, end, n, m);

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
