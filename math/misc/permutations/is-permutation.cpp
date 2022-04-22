// Is this array a permutation?
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool isPermutation(vi a) {
  int n = (int)a.size();
  set<int> s(a.begin(), a.end());

  return (n == (int)s.size()) && ((*s.begin() == 1) && (*s.end() == n));
}

int main()
{
  cout << boolalpha << isPermutation({5, 1, 2, 3, 6, 4}) << "\n"; // true
  cout << isPermutation({3, 1, 2}) << "\n"; // true
  cout << isPermutation({1, 1, 3}) << "\n"; // false

  return 0;
}
