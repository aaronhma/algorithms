// Composition (merge) of two permutations
// compose AB
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi compose(vi a, vi b) {
  int n = (int)a.size();
  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[i] = a[b[i] - 1];

  return ans;
}

int main() {
  vi ans = compose({3, 2, 1}, {2, 1, 3}); // {2, 3, 1}

  for (int i : ans) cout << i << " ";
  cout << "\n";

  return 0;
}
