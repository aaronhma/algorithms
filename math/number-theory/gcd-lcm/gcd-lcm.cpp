// GCD and LCM
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
  // Fast GCD:
  while (b) // As long as b != 0
  {
    // Compute "return gcd(b, a % b);"
    a %= b; // a % b
    swap(a, b); // Swap a and b
  }

  return a; // If b == 0 return a
}

int lcm(int a, int b)
{
  // (a * b) / gcd(a, b)
  // The strategy below avoids integer overflows by first dividing a with the GCD.
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
