#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define MOD INT_MAX

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  if (n == 0) {
    cout << "1\n";
    exit(EXIT_SUCCESS);
  }

  // BELL TRIANGLE FORMULA:
  // If this is first column of current row 'i'
  // If j == 0
  // Then copy last entry of previous row
  // Note that i'th row has i entries
  // Bell(i, j) = Bell(i-1, i-1)

  // If this is not first column of current row
  // Else
  // Then this element is sum of previous element
  // in current row and the element just above the
  // previous element
  // Bell(i, j) = Bell(i-1, j-1) + Bell(i, j-1)
  n++;

  vi prev(n, 0), curr(n);
  prev[0] = 1 % MOD;

  for (int i = 1; i < n; i++)
  {
    curr[0] = prev[i - 1] % MOD;

    for (int j = 1; j < n; j++)
    {
      curr[j] = ((curr[j - 1] % MOD) + (prev[j - 1] % MOD)) % MOD;
    }

    prev = move(curr);
    curr.resize(n);
  }

  cout << prev[0] << "\n";

  return 0;
}
