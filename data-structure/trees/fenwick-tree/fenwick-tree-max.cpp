// Find sum on a range [a,b] using Fenwick Tree
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct FenwickTree {
  vector<int> bit; // Binary Indexed Tree array
  int n; // Size of the array

  // Create a Fenwick Tree with n INT_MIN
  FenwickTree(int size) {
    this->n = size;
    bit.resize(n, INT_MIN);
  }

  // Convert array into a Fenwick Tree
  FenwickTree(vector<int> arr) : FenwickTree((int)arr.size()) {
    for (int i = 0; i < (int)arr.size(); i++)
      update(i, arr[i]);
  }

  void update(int i, int val) {
    // Update bit[i] = max(bit[i], val), then update the parent of bit[i], the parent of parent of bit[i], etc.
    for (; i < n; i = i | (i + 1))
      bit[i] = ::max(bit[i], val); // Increase bit[i] by val
  }

  int max(int b) {
    int ans = INT_MIN;

    // Get the max of the segments between [0, b]
    for (; b >= 0; b = (b & (b + 1)) - 1)
      ans = ::max(ans, bit[b]);

    return ans;
  }
};

int main()
{
  vector<int> arr {0, 1, 2, 3, 4, 5, 6, 7};
  FenwickTree tree(arr);

  cout << tree.max(5) << "\n"; // 5
  tree.update(4, 7); // At index 4, arr[4] = 7
  cout << tree.max(5) << "\n"; // 7
  cout << tree.max(2) << "\n"; // 2

  return 0;
}
