// Source: https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/
#include "fractions.h"

int main()
{
  Fraction *fraction = new Fraction();
  vi a{1, 2};
  vi b{3, 4};
  vi f = fraction->addFraction(a, b);
  fraction->reduceFraction(f);

  for (int i : f)
  {
    cout << i << "\n----------\n";
  }

  cout << "\n";
}
