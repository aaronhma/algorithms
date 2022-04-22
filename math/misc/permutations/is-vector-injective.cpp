// Does a vector define f(x) = x as injective?
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool isUnique(vi a) {
  int n = (int)a.size();
  set<int> s(a.begin(), a.end());

  return n == (int)s.size();
}

int main()
{
  cout << boolalpha << isUnique({5, 1, 2, 3, 5, 4}) << "\n"; // false
  cout << isUnique({3, 1, 2}) << "\n"; // true

  return 0;
}
