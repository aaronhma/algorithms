#include <iostream>

int gcf(long long a, long long b)
{
  // base case
  if (b == 0)
  {
    return a;
  }

  // use recursion
  return gcf(b, a % b);
}

int main()
{
  // We use long long to handle larger numbers
  long long a, b;
  std::cin >> a >> b; // read in the data

  std::cout << "gcf(" << a << ", " << b
            << ") = " << gcf(a, b)
            << "\n";

  return 0;
}
