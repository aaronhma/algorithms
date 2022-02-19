#include <bits/stdc++.h>

using namespace std;

int horner(vector<int> &poly, int &n, int &x)
{
  int result = poly[0]; // Initialize result

  // Evaluate value of polynomial using Horner's method
  for (int i = 1; i < n; i++)
    result = result * x + poly[i];

  return result;
}

int main()
{
  vector<int> poly{2, -6, 2, -1};
  int x = 3;
  int n = (int)poly.size();
  cout << "2x^3 - 6x^2 + 2x - 1 for x = 3: " << horner(poly, n, x) << "\n";

  return 0;
}
