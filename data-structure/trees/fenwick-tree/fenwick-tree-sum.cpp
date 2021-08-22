// Find sum on a range [a,b] using Fenwick Tree
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct FenwickTree {
  vector<int> bit; // Binary Indexed Tree array
  int n; // Size of the array

  // Create a Fenwick Tree with n zeros
  FenwickTree(int size) {
    this->n = size;
    bit.resize(n);
  }

  // Convert array into a Fenwick Tree
  FenwickTree(vector<int> arr) : FenwickTree((int)arr.size()) {
    for (int i = 0; i < (int)arr.size(); i++)
      add(i, arr[i]);
  }

  void add(int i, int val) {
    // Update bit[i] = bit[i] + val, then update the parent of bit[i], the parent of parent of bit[i], etc.
    for (; i < n; i = i | (i + 1))
      bit[i] += val; // Increase bit[i] by val
  }

  int sum(int b) {
    int ans = 0;

    // Get the sum of the segments between [0, b]
    for (; b >= 0; b = (b & (b + 1)) - 1)
      ans += bit[b];

    return ans;
  }

  int sum(int a, int b) {
    // We don't need to handle the a == 0 case as the sum(b) function already does.
    return sum(b) - sum(a - 1);
  }
};

int main()
{
  vector<int> arr {0, 1, 2, 3, 4, 5, 6, 7};
  FenwickTree tree(arr);

  cout << tree.sum(4, 7) << "\n"; // 22
  tree.add(4, 5); // At index 4, arr[4] = arr[4] + 5 = 9
  cout << tree.sum(4, 7) << "\n"; // 27
  cout << tree.sum(0, 2) << "\n"; // 3

  return 0;
}
