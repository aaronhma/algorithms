#include <bits/stdc++.h>

using namespace std;

// Algorithm: https://web.archive.org/web/20170507133619/https://alcor.concordia.ca/~gpkatch/gdate-algorithm.html
// Explanation: https://web.archive.org/web/20161203020157/https://alcor.concordia.ca/~gpkatch/gdate-method.html
int date(int m, int d, int y)
{
  m = (m + 9) % 12;
  y -= m / 10;

  // Every 4 years is a (possible) leap year.
  // Every 400 years is a leap year.
  // Every 100 years, the leap year is "discounted".
  int tmp = 365 * y + y / 4 - y / 100 + y / 400 + (m * 306 + 5) / 10 + (d - 1);
  tmp %= 7;
  // Wednesday, Thursday, Friday, Saturday, Sunday, Monday, Tuesday
  vector<int> buckets = {3, 4, 5, 6, 0, 1, 2};

  return buckets[tmp];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cout << date(6, 30, 2008) << "\n"; // Monday (1)

  return 0;
}
