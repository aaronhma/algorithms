// Sparse table example for https://www.spoj.com/problems/RMQSQ/
#include <bits/stdc++.h>

using namespace std;

// Fast I/O
void setIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
  setIO(); // Disable this during interactive problems

  int n, q, a, b;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) cin >> arr[i];

  // 1. Preprocess
  int k = ceil(log2(n)); // max ending point

  // Precompute the logarithms for fast queries
  vector<int> log(n + 1);
  log[1] = 0;

  for (int i = 2; i <= n; i++)
    log[i] = log[i / 2] + 1;

  vector<vector<int>> min(n, vector<int>(k + 1));

  // For every i < n, min[i][0] = arr[i]
  for (int i = 0; i < n; i++)
    min[i][0] = arr[i];

  // Compute minimum value for all intervals
  for (int j = 1; j <= k; j++)
    for (int i = 0; i + (1 << j) <= n; i++)
      // Take the minimum of two ranges
      min[i][j] = ::min(min[i][j - 1], min[i + (1 << (j - 1))][j - 1]);

  cin >> q;

  // 2. Answer queries
  while (q--) {
    cin >> a >> b;

    int j = log[b - a + 1]; // Find the highest power of 2 that is <= # of elements in the given range

    // (1 << j) is 2^j - see https://www.youtube.com/watch?v=PGSb-hYfLMc
    cout << ::min(min[a][j], min[b - (1 << j) + 1][j]) << "\n"; // Take the minimum of "a + (closest-power-of-2)" and "b - (closest-power-of-2) + 1"
  }

  return 0;
}
