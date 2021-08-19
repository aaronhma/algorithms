// Sum Queries
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {13, 79, 81, 23, 1, 9, 0, 23};

  int n = arr.size(), a = 2, b = 3;

  // calculate prefix sum
  vector<int> prefixSum(n);
  prefixSum[0] = arr[0];

  for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + arr[i];

  // case 1: sum all elements from index 0 - index b
  if (a == 0)
    cout << prefixSum[b] << "\n";

  // case 2: sum elements from index a - index b
  else
    cout << prefixSum[b] - prefixSum[a - 1] << "\n";

  return 0;
}
