// Find the inverse of a permutation
// Checker: inverse-checker.cpp
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi inverse(vi arr) {
  int n = (int)arr.size();

  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[arr[i] - 1] = i + 1;

  return ans;
}

int main()
{
  vi ans = inverse({3, 1, 2}); // {2, 3, 1}

  for (int i : ans) cout << i << " ";
  cout << "\n";

  return 0;
}
