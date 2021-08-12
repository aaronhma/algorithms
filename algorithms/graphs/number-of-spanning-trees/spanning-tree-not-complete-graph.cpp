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


// TODO: Fix determinant
void fillRow(vvi &graph, vvi &coefficient, int p, int q, int n) {
  int I = 0, J = 0;

  FORE(i, 0, n) {
    FORE(j, 0, n) {
      if (i != p && j != q) {
        coefficient[I][J++] = graph[i][j];

        if (J == n - 1) {
          j = 0;
          i++;
        }
      }
    }
  }
}

void getCofactor(vvi &mat, vvi &temp, int p,
                 int q, int n)
{
    int i = 0, j = 0;

    // Looping for each element of the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            //  Copying into temporary matrix only those
            //  element which are not in given row and
            //  column
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];

                // Row is filled, so increase row index and
                // reset col index
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}


int det(vvi &graph, int n) {
  int ans = 0, sign = 1;

  if (n == 1) return graph[0][0];

  vvi coefficient(n, vi(n));

  FORE(i, 0, n) {
    getCofactor(graph, coefficient, 0, i, n);
    cout << coefficient << "\n------\n";
    ans += sign * graph[0][i] * det(graph, n - 1);
    sign = -sign;
  }

  return ans;
}

int determinantOfMatrix(vvi &mat, int n)
{
    int D = 0; // Initialize result

    //  Base case : if matrix contains single element
    if (n == 1)
        return mat[0][0];

    vvi temp(n, vi(n)); // To store cofactors

    int sign = 1; // To store sign multiplier

    // Iterate for each element of first row
    for (int f = 0; f < n; f++)
    {
        // Getting Cofactor of mat[0][f]
        // getCofactor(mat, temp, 0, f, n);
        fillRow(mat, temp, 0, f, n);
        D += sign * mat[0][f]
             * determinantOfMatrix(temp, n - 1);

        // terms are to be added with alternate sign
        sign = -sign;
    }

    return D;
}

// TODO: Fix determinant
int noSpanningTrees(vvi &graph) {
  int n = sz(graph);

  vi degree(n);
  vvi result(n, vi(n));

  FORE(i, 0, n) {
    for (int j : graph[i])
      degree[i] += j;
  }

  FORE(i, 0, n) {
    FORE(j, 0, n) {
      if (i == j)
        result[i][j] = degree[i];
      else
        result[i][j] = -graph[i][j];
    }
  }

  result.erase(result.begin());

  FORE(i, 0, n - 1) {
    result[i].erase(result[i].begin());
  }

  cout << result << "\n";

  return determinantOfMatrix(result, n - 1);
}

int main()
{
  setIO(); // Disable this during interactive problems

/**
 * Input:
1
4 5
1 2
1 3
3 4
2 4
1 4

  * Output:
8
*/

  int t, n, m, a, b;
  read(t);

  FORI(cas_no, 1, t) {
    read(n, m);

    vvi graph(n, vi(n));

    while (m--) {
      read(a, b);
      a--; b--;
      graph[a][b] = 1;
      graph[b][a] = 1;
    }

    cout << "Case " << cas_no << ": " << noSpanningTrees(graph) << "\n";
  }

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
