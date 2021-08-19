#include <iostream>

int main()
{
  long long a, b, remainder = 1;
  std::cin >> a >> b;

  // we stop when the remainder is 0
  while (remainder != 0)
  {
    // calculate the remainder
    remainder = a % b;

    // update values
    if (remainder != 0)
    {
      a = b;
      b = remainder;
    }
    else
    {
      // exit if remainder is 0
      break;
    }
  }

  // b contains the remainder
  std::cout << "gcf of a and b: " << b << "\n";

  return 0;
}
