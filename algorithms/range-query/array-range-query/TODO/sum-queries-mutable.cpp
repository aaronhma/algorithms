// Sum Queries
#include <bits/stdc++.h>

using namespace std;

// Approach using Binary Indexed Tree
class NumArray
{
public:
  NumArray(vector<int> &nums)
  {
    n = nums.size();

    arr = nums;

    tree.resize(n + 1);

    // initialize Binary Indexed Tree
    for (int i = 0; i < n; i++)
      init(i, nums[i]);
  }

  // update the array and Binary Indexed Tree
  void update(int i, int val)
  {
    int diff = val - arr[i];
    arr[i] = val;

    init(i, diff);
  }

  // sum between range [i, j]
  int sumRange(int i, int j)
  {
    return getSum(j) - getSum(i - 1);
  }

private:
  vector<int> arr, tree;
  int n;

  // returns sum from the range [1, index]
  int getSum(int index)
  {
    int sum = 0;

    // index in Binary Index Tree is 1 more than given index
    index++;

    // Still not at starting point (index 1)
    while (index >= 1)
    {
      // Add current element to the sum
      sum += tree[index];

      // Move index to parent node
      index -= (index & -index);
    }

    // Return the sum
    return sum;
  }

  // create/update the segment tree
  void init(int index, int diff)
  {
    // for 1-based indexing
    index++;

    while (index <= n)
    {
      // add/update the value
      tree[index] += diff;

      // go to next index
      index += (index & -index);
    }
  }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {13, 79, 81, 23, 1, 9, 0, 23};

  NumArray test(arr);
  cout << test.sumRange(2, 3) << "\n"; // 104
  test.update(2, 1);
  cout << test.sumRange(2, 3) << "\n"; // 24

  return 0;
}
