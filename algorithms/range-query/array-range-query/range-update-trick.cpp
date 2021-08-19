#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {2, -7, 10, 3, -1, 19, -20, 23, 17};
  vector<pair<pair<int, int>, int>> query = {{{2, 6}, 5}, {{3, 7}, 2}, {{1, 5}, -1}};

  int n = arr.size();

  vector<int> b(n), prefixSum(n);

  for (auto i : query)
  {
    b[i.first.first] += i.second;
    b[i.first.second + 1] -= i.second;
  }

  prefixSum[0] = b[0];
  arr[0] += b[0];

  for (int i = 1; i < n; i++)
  {
    prefixSum[i] = prefixSum[i - 1] + b[i];
    arr[i] += prefixSum[i];
  }

  // 2 -8 14 9 5 25 -13 25 17
  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << "\n";

  return 0;
}
