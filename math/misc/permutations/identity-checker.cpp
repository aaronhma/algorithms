// Identity permutation checker
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

// Returns `true` if `arr` is an identity permutation, `false` otherwise.
bool isIdentity(vi arr) {
  int n = (int)arr.size();

  for (int i = 1; i <= n; i++)
    if (arr[i - 1] != i) return 0;

  return 1;
}

int main()
{
  cout << boolalpha << isIdentity({1, 2, 3, 4}) << "\n"; // true
  cout << isIdentity({4, 3, 2, 1}) << "\n"; // false

  return 0;
}
