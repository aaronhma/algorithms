// Prefix Sum Array
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {79, 12, 19, 100, 23, 9, 1};
  int n = arr.size();
  vector<int> prefixSum(n, arr[0]);

  for (int i = 1; i < n; i++)
    prefixSum[i] = prefixSum[i - 1] + arr[i];

  for (int i = 0; i < n; i++)
  {
    cout << prefixSum[i] << " ";
  }

  cout << "\n";

  return 0;
}
