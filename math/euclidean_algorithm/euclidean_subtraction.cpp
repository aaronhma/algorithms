#include <iostream>
#include <algorithm>

int main()
{
  // We use long long to handle larger numbers
  long long a, b, difference = 1;
  std::cin >> a >> b; // read in the data

  // as long as the difference is not 0, we keep iterating
  while (difference != 0)
  {
    // the difference is max(a, b) - min(a, b)
    difference = std::max(a, b) - std::min(a, b);

    // set the a number to the previous subtracted difference
    a = b;
    // make b the subtracted difference
    b = difference;
  }

  // print gcf(a, b)
  // in the last iteration, b will be 0, so we will print a
  std::cout << "gcf of a and b: " << a
            << "\n";

  return 0;
}
