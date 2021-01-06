// Euler's Theorem
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  if (a == 0)
    return b;

  return gcd(b % a, a);
}

int totient(int n)
{
  int ans = 0;

  for (int i = 1; i < n; i++)
  {
    if (gcd(i, n) == 1)
      ans++;
  }

  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << totient(10) << "\n"; // 4
  cout << totient(9) << "\n";  // 6

  return 0;
}
