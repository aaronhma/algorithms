// GCD and LCM
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

int lcm(int a, int b)
{
  return (a / gcd(a, b)) * b;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << gcd(30, 12) << "\n"; // 6
  cout << lcm(30, 12) << "\n"; // 60

  return 0;
}
