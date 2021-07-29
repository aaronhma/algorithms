// https://www.spoj.com/problems/NAJPF/
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

// INPUT
template <class T>
void read(T &x) { cin >> x; }

template <class Arg, class... Args>
void read(Arg &first, Args &...rest)
{
  read(first);
  read(rest...);
}

// Fast I/O
void setIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

vi prefix(str &pattern) {
  int n = sz(pattern);
  vi prefix(n);

  FORE(i, 1, n) {
    int j = prefix[i - 1];

    while (j != 0 && pattern[i] != pattern[j]) j = prefix[j - 1];

    prefix[i] = j;
  }

  return prefix;
}

vi kmp(str &text, str &pattern) {
  int n = sz(text), m = sz(pattern), i = 0, j = 0;
  vi ans, pref = prefix(pattern);

  while (i <= n - m) {
    while (j < m) {
      if (pattern[j] != text[i + j]) break;
      j++;
    }

    if (j == 0) {
      i++;
    } else {
      if (j == m) ans.PB(i);
      i += j - pref[j - 1];
      j = pref[j - 1];
    }
  }

  return ans;
}

int main()
{
  setIO(); // Disable this during interactive problems

  int t;
  str A, B;
  read(t);

  while (t--) {
    read(A, B);
    vi ans = kmp(A, B);

    if (ans.empty())
      cout << "Not Found\n";
    else {
      cout << sz(ans) << "\n";
      for (int i : ans) cout << i + 1 << " ";
      cout << "\n";
    }
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
