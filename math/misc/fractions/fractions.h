// Source: https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/
#include <iostream>
#include <vector>
#include <cmath>

typedef std::vector<int> vi;

using namespace std;

class Fraction
{
public:
  Fraction() {}

  // add fractions
  vi addFraction(vi a, vi b)
  {
    // denominator is the lcm
    int denom = lcm(a[1], b[1]);

    // create the fraction
    return vector<int>{denom / a[1] * a[0] + denom / b[1] * b[0], denom};
  }

  void reduceFraction(vi &a)
  {
    // simple fraction
    int b = gcd(a[0], a[1]);
    a[0] /= b;
    a[1] /= b;
  }

  // gcd
  int gcd(int a, int b)
  {
    if (b == 0)
      return a;

    return gcd(b, a % b);
  }

  // lcm
  int lcm(int a, int b)
  {
    return (a * b) / gcd(a, b);
  }
};
