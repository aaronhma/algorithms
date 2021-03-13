#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long t, n, r, g, b;
  cin >> t;

  while (t--)
  {
    cin >> n >> r >> g >> b;

    long long sum = r + g + b;

    while (sum % 3 != 0)
      sum--;

    cout << min(sum / 3, n) << "\n";
  }

  return 0;
}
