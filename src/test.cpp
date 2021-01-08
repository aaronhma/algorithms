#include <bits/stdc++.h>

using namespace std;

#define MAX_N 100

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, curr = MAX_N;
  cin >> n;

  vector<int> bit(MAX_N);

  while (n > 0)
  {
    bit[--curr] = n % 2;
    n /= 2;
  }

  for (int i = curr; i < MAX_N; i++)
  {
    cout << bit[i];
  }

  cout << "\n";

  // Time complexity: O(k + k) => O(k)
  // Space complexity: O(MAX_N)

  return 0;
}
