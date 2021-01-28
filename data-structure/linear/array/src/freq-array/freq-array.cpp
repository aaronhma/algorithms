#include <bits/stdc++.h>

using namespace std;

#define MAX_N 8

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {7, 3, 1, 3, 2, 7}, freq(MAX_N, 0);
  int ans = 0;

  for (int i : arr)
  {
    if (freq[i] == 0)
    {
      ans++;
    }

    freq[i]++;
  }

  cout << ans << "\n"; // 4

  return 0;
}
