// Are 2 permutations inverses of each other?
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

// compose AB
vi compose(vi a, vi b) {
  int n = (int)a.size();
  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[i] = a[b[i] - 1];

  return ans;
}

// https://pastebin.com/DrgrAsJL
// Returns `true` if `arr` is an identity permutation, `false` otherwise.
bool isIdentity(vi arr) {
  int n = (int)arr.size();

  for (int i = 1; i <= n; i++)
    if (arr[i - 1] != i) return 0;

  return 1;
}

// Returns `true` if `a` and `b` are "inverses" of each other, `false` otherwise.
bool isInverse(vi a, vi b) {
  // If a is the inverse of b, then b is the inverse of a.
  return isIdentity(compose(a, b));
}

int main()
{
  cout << boolalpha << isInverse({2, 4, 3, 1, 5}, {4, 1, 3, 2, 5}) << "\n"; // true
  cout << isInverse({2, 3, 4, 1}, {3, 1, 2, 4}) << "\n"; // false

  return 0;
}
