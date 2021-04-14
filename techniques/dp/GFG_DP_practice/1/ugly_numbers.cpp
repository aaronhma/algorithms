#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // p2: Index of first ugly # divisible by 2
  // p3: Index of first ugly # divisible by 3
  // p5: Index of first ugly # divisible by 5
  // By default p2, p3, and p5 is 0, as we assume that 1 is divisible by 2, 3, and 5.
  int n, ans, p2 = 0, p3 = 0, p5 = 0;
  cin >> n;

  // Edge case: 1 is considered to be ugly
  if (n == 1)
  {
    cout << "1\n";
    exit(EXIT_SUCCESS);
  }

  // We realize that the ugly numbers are formed through 2i, 3i, 5i where i is a ugly number.
  // https://medium.com/@interviewprep/ugly-number-dynamic-programming-94520110a084
  vector<int> dp(n);
  dp[0] = 1; // First ugly #: 1

  for (int i = 1; i < n; i++)
  {
    // The next ugly # is min(current ugly # divisible by 2 * 2, current ugly # divisible by 3 * 2, current ugly # divisible by 5 * 5).
    ans = min(dp[p2] * 2, min(dp[p3] * 3, dp[p5] * 5));

    // The i-th ugly # is ans.
    dp[i] = ans;

    // If the current ugly # is divisible by 2, increase our p2 pointer.
    if (ans == dp[p2] * 2)
      p2++;

    // If the current ugly # is divisible by 3, increase our p3 pointer.
    if (ans == dp[p3] * 3)
      p3++;

    // If the current ugly # is divisible by 5, increase our p5 pointer.
    if (ans == dp[p5] * 5)
      p5++;
  }

  for (int i : dp)
    cout << i << " ";

  cout << "\n--------------------\n" << dp[n - 1] << "\n";

  return 0;
}
