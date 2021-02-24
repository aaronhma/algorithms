#include <bits/stdc++.h>

using namespace std;

int sum(int n) {
  // Remember: n / 10 truncates/rounds down, so if n == 0,
  // that means we've already summed everything in n, exit
  if (n == 0) return 0;

  // Return the last digit of n and add the sum of the next numbers in n (if it exists)
  return (n % 10) + sum(n / 10);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 123456;

  cout << "Sum of the digits of " << n << " is " << sum(n) << "\n";

  return 0;
}
