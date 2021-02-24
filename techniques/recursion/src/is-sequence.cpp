#include <bits/stdc++.h>

using namespace std;

/**
 * Returns if an array is a consecutive sequence.
*/
bool isSequence(vector<int> &arr, int curr) {
  // If we've made it all the way to the front of the array, then this array is a consecutive sequence.
  if (curr == 0) return true;

  // If this array is not a consecutive sequence, return true.
  if (arr[curr] - 1 != arr[curr - 1]) return false;

  // Check the elements in front of the array
  return isSequence(arr, curr - 1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  bool ans = isSequence(arr, arr.size() - 1);

  if (ans) cout << "Array is in sequence!\n";
  else cout << "Array is not in sequence!\n";

  return 0;
}
