// Sum Queries
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {13, 79, 81, 23, 1, 9, 0, 23};

  int n = arr.size(), a = 2, b = 3;

  vector<int> prefixSum(n, arr[0]);

  for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + arr[i];

  if (a == 0)
    cout << prefixSum[b] << "\n";
  else
    cout << prefixSum[b] - prefixSum[a - 1] << "\n";

  return 0;
}
