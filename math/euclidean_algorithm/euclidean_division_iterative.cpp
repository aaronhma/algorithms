#include <iostream>

int main()
{
  long long a, b, remainder = 1;
  std::cin >> a >> b;

  while (remainder != 0)
  {
    remainder = a % b;

    if (remainder != 0)
    {
      a = b;
      b = remainder;
    }
    else
    {
      break;
    }
  }

  std::cout << "gcf of a and b: " << b << "\n";

  return 0;
}
