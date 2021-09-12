#include <bits/stdc++.h>

using namespace std;

// Update arr[l] = r
void update(vector<int> &arr, vector<int> &b, int l, int r, int len)
{
  int prev = arr[l];
  b[l / len] += (r - prev);
  arr[l] = r;
}

int main()
{
  vector<int> arr{1, 2, 20, 4, 5};

  // Preprocess
  int n = (int)arr.size();
  int len = (int)sqrt(n + .0) + 1;

  // b[i] - Sum of the i-th segment (each segment is of length len)
  vector<int> b(len);

  for (int i = 0; i < n; i++)
    b[i / len] += arr[i];

  // Query sum from [1, 3]
  int l = 1, r = 3, sum = 0;

  // Left and right boundaries inside the b array
  int c_l = l / len, c_r = r / len;

  // If this is in the same block, add the sum of arr[l], arr[l + 1], ... arr[r - 1], arr[r] to the answer
  if (c_l == c_r)
    for (int i = l; i <= r; i++)
      sum += arr[i];
  else
  {
    // Query type 2 (see README.md) data before middle block
    int end = (c_l + 1) * len - 1;
    for (int i = l; i <= end; i++)
      sum += arr[i];

    // Add middle block
    for (int i = c_l + 1; i <= c_r - 1; i++)
      sum += b[i];

    // Query type 2 (see README.md) data after middle block
    for (int i = c_r * len; i <= r; i++)
      sum += arr[i];
  }

  cout << sum << "\n"; // sum of range [1, 3] -> 26

  return 0;
}
