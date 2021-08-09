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

int max_weight = 0;

void addEdge(vector<vpii> &graph, int a, int b, int weight) {
  graph[a].PB({b, weight});
  graph[b].PB({a, weight});
  max_weight = max(max_weight, weight);
}

void dial(vector<vpii> &graph, int source) {
  int n = sz(graph), buckets_size = n * max_weight, i = 0;

  // Initialize all the distances to infinity
  vector<pair<int, list<int>::iterator>> distance(n);

  for (auto &i : distance)
    i.f = INF_INT;

  // Create the buckets
  vector<list<int>> buckets(buckets_size + 1);

  // Distance for the source is 0
  distance[source].f = 0;

  // Add source to the bucket with weight 0
  buckets[0].PB(source);

  for (;;) {
    // Find the first non-empty bucket
    while (i < buckets_size && buckets[i].empty()) i++;

    // If all buckets are empty, we are done
    if (i == buckets_size) break;

    // Select the node at the front
    int node = buckets[i].front();
    buckets[i].pop_front();

    // Distance to the current node
    int distance_node = distance[node].f;

    // Go through this node's neighbors
    for (auto neighbor : graph[node]) {
      // Get the neighbor's node and the weight of the edge
      int b = neighbor.f, w = neighbor.s;

      // Get the current neighbor's distance
      int distance_neighbor = distance[b].f;

      // New possible distance
      int new_dist = distance_node + w;

      // Check if there exists a shorter path
      if (new_dist < distance_neighbor) {
        // If the current neighbor's distance is not infinity, this means that the node is in a bucket.
        // Remove the node from that bucket
        if (distance_neighbor != INF_INT)
          buckets[distance_neighbor].erase(distance[b].s);

        // Update the distance
        distance[b].f = distance_neighbor = new_dist;

        // Add the distance to the front of the bucket
        buckets[distance_neighbor].push_front(b);
        distance[b].s = buckets[distance_neighbor].begin();
      }
    }
  }

  FORI(i, 1, n) {
    cout << "Distance from " << source << " -> " << i << ": " << distance[i].f << "\n";
  }
}

int main()
{
  setIO(); // Disable this during interactive problems

  int n = 7;

  vector<vpii> graph(n);
  vector<tuple<int, int, int>> edges {{1, 2, 2}, {1, 3, 4}, {2, 3, 1}, {2, 5, 2}, {2, 4, 4}, {3, 5, 3}, {4, 6, 2}, {5, 4, 3}, {5, 6, 2}};

  for (auto i : edges)
    addEdge(graph, get<0>(i), get<1>(i), get<2>(i));

  dial(graph, 1); // 0, 2, 3, 6, 4, 6

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
