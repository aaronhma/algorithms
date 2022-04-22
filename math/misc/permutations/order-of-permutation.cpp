// Order of a permutation
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef long long ll;

// -- https://pastebin.com/X7dRCpgQ --
// compose AB
vi compose(vi a, vi b) {
  int n = (int)a.size();
  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[i] = a[b[i] - 1];

  return ans;
}
// -- https://pastebin.com/X7dRCpgQ --

// -- https://pastebin.com/DrgrAsJL --
bool isIdentity(vi arr) {
  int n = (int)arr.size();

  for (int i = 1; i <= n; i++)
    if (arr[i - 1] != i) return 0;

  return 1;
}
// -- https://pastebin.com/DrgrAsJL --

ll pow(vi a) {
  if (isIdentity(a)) return 1;
  vi prev = a;

  for (ll i = 1; i <= LLONG_MAX; i++) {
    prev = compose(prev, a);
    if (isIdentity(prev)) return i + 1;
  }

  return -1; // dummy value - we're guaranteed a result
}

int main()
{
  cout << pow({3, 1, 2}) << "\n"; // 3
  cout << pow({2, 1, 3}) << "\n"; // 2
  cout << pow({7, 1, 2, 3, 4, 5, 6}) << "\n"; // 7
  cout << pow({3, 1, 2, 7, 4, 5, 6}) << "\n"; // 12

  return 0;
}
