#include <bits/stdc++.h>

using namespace std;

// Update arr[l] = r
void update(vector<int> &arr, vector<int> &b, int l, int r, int len)
{
  int prev = arr[l];
  b[l / len] += (r - prev);
  arr[l] = r;
}

int sqrtDecomposition(vector<int> arr, int ql, int qr) {
  int n = size(arr);

  // preprocessing
  int blockSize = (int)sqrt(n + .0) + 1; // size of the block and the number of blocks
  vector<int> blocks(blockSize);
  for (int i = 0; i < n; i++)
    blocks[i / blockSize] += arr[i];

  // answering the queries
  int sum = 0;
  // blocks index of ql, qr
  int l = ql / blockSize, r = qr / blockSize;

  if (l == r) // the same blocks index, simply sum up in linear way
    for (int i = ql; i <= qr; i++)
      sum += arr[i];
  else {
    // Query type 2 (see README.md) data before middle block
    // The blocks index contains the query left index. Add each value regardless of all or partial elements in the current block
    // end is the last index of the current blocks
    // (l + 1) * blockSize would be the start of the next blocks index
    for (int i = ql, end = (l + 1) * blockSize - 1; i <= end; i++)
      sum += arr[i];

    // Add middle blocks is optional, sometimes, it won't ever be called
    // ex: l=0, r=1, this loop won't be called
    // ex: l=0, r=3,
    //  previous loop has taken all sum up value of blocks index 0
    //  next loop has taken all sum up value of blocks index 3
    //  below loop will simply add the sum of blocks[1], blocks[2]
    for (int i = l + 1; i <= r - 1; i++)
      sum += blocks[i];

    // Query type 2 (see README.md) data after middle block
    // The blocks index contains the query right index. Add each value regardless of all or partial elements in the current block
    for (int i = r * blockSize; i <= qr; i++)
      sum += arr[i];
  }

  return sum;
}

int main() {
  // Separated in 4 blocks and each block has a size of 4
  vector<int> arr{1, 1, 1, 1,   1, 1, 1, 1,   1, 1, 1, 1,   1, 1, 1};

  // Case 1: else case in the function
  int sum = sqrtDecomposition(arr, 3, 12); // 10

  // Case 2: Special case, both l and r are in the same blocks
  // int sum = sqrtDecomposition(arr, 0, 3); // 4

  // Case 3: Update update individual array elements
  // arr[4] = 2;
  // int sum = sqrtDecomposition(arr, 3, 12); // 11

  cout << "sum: " << sum << "\n";

  return 0;
}
