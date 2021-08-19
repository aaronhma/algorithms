
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
#define FORE(i, a, b) for (int i = a; i < b; i++)

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vi arr(n), suffixSum(n);

  FORE(i, 0, n) cin >> arr[i];

  suffixSum[n - 1] = arr[n - 1];

  for (int i = n - 2; i >= 0; i--)
    suffixSum[i] = suffixSum[i + 1] + arr[i];

  for (int i : suffixSum)
    cout << i << " ";

  cout << "\n";

  return 0;
}
