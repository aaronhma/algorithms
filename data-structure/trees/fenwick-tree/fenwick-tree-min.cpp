// Find sum on a range [a,b] using Fenwick Tree
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct FenwickTree {
  vector<int> bit; // Binary Indexed Tree array
  int n; // Size of the array

  // Create a Fenwick Tree with n INT_MAX
  FenwickTree(int size) {
    this->n = size;
    bit.resize(n, INT_MAX);
  }

  // Convert array into a Fenwick Tree
  FenwickTree(vector<int> arr) : FenwickTree((int)arr.size()) {
    for (int i = 0; i < (int)arr.size(); i++)
      update(i, arr[i]);
  }

  void update(int i, int val) {
    // Update bit[i] = min(bit[i], val), then update the parent of bit[i], the parent of parent of bit[i], etc.
    for (; i < n; i = i | (i + 1))
      bit[i] = ::min(bit[i], val); // Increase bit[i] by val
  }

  int min(int b) {
    int ans = INT_MAX;

    // Get the min of the segments between [0, b]
    for (; b >= 0; b = (b & (b + 1)) - 1)
      ans = ::min(ans, bit[b]);

    return ans;
  }
};

int main()
{
  vector<int> arr {7, 6, 5, 4, 3, 2, 1, 0};
  FenwickTree tree(arr);

  cout << tree.min(7) << "\n"; // 0
  tree.update(4, 1); // At index 4, arr[4] = 1
  cout << tree.min(5) << "\n"; // 1
  cout << tree.min(2) << "\n"; // 5

  return 0;
}
