#include <bits/stdc++.h>

using namespace std;

// Update arr[l] = r
void update(vector<int> &arr, vector<int> &blocks, int i, int val, int &blockSize)
{
  int prev = arr[i];
  blocks[i / blockSize] += (val - prev);
  arr[i] = val;
}

int sqrtDecomposition(vector<int> &arr, vector<int> &blocks, int blockSize, int a, int b)
{
  // answering the queries
  int sum = 0;
  // blocks index of a, b
  int l = a / blockSize, r = b / blockSize;

  if (l == r) // the same blocks index, simply sum up in linear way
    for (int i = a; i <= b; i++)
      sum += arr[i];
  else
  {
    // Query type 2 (see README.md) data before middle block
    // The blocks index contains the query left index. Add each value regardless of all or partial elements in the current block
    // end is the last index of the current blocks
    // (l + 1) * blockSize would be the start of the next blocks index
    for (int i = a, end = (l + 1) * blockSize - 1; i <= end; i++)
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
    for (int i = r * blockSize; i <= b; i++)
      sum += arr[i];
  }

  return sum;
}

int main()
{
  // Separated in 4 blocks and each block has a size of 4
  vector<int> arr{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  int n = (int)arr.size();

  // preprocessing
  int blockSize = (int)sqrt(n + .0) + 1; // size of the block and the number of blocks - See http://www.cplusplus.com/forum/beginner/253984/
  vector<int> blocks(blockSize);
  for (int i = 0; i < n; i++)
    blocks[i / blockSize] += arr[i];

  // Case 1: else case in the function
  // int sum = sqrtDecomposition(arr, blocks, blockSize, 3, 12); // 10

  // Case 2: Special case, both l and r are in the same blocks
  // int sum = sqrtDecomposition(arr, blocks, blockSize, 0, 3); // 4

  // Case 3: Update update individual array elements
  int sum = sqrtDecomposition(arr, blocks, blockSize, 3, 12); // 10
  cout << "sum: " << sum << "\n";
  update(arr, blocks, 3, 5, blockSize);
  sum = sqrtDecomposition(arr, blocks, blockSize, 3, 12); // 14

  cout << "sum: " << sum << "\n";

  return 0;
}
