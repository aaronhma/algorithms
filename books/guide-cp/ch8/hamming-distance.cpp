#include <bits/stdc++.h>

using namespace std;

int hamming(int a, int b)
{
  return __builtin_popcount(x ^ y);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << hamming(2, 3) << "\n";

  return 0;
}
