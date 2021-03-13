#include <bits/stdc++.h>

using namespace std;

// Returns the index of x (if it exists).
// Returns the index of the next element > x (if it exists).
// Anything else, we print -1 (no elements >= x).
int firstGreaterThanX(vector<int> arr, int x) {
  // range is from 0 to n
  int low = 0, high = arr.size();

  // As long as low < high, we'll continue searching...
  while (low < high) {
    // Find middle element index
    int mid = low + (high - low) / 2;

    // If x <= arr[mid], the current element is >= x, all elements to the right of mid is good, move high pointer to current index. Move high pointer to current middle element index.
    if (arr[mid] >= x) high = mid;

    // This element isn't good, all elements on the left of mid isn't good, move low pointer to mid + 1 (possible next good index).
    else low = mid + 1;
  }

  // low == high, we can return any one of them
  assert(low == high);

  // If arr[low] >= x, we'll return the element >= x index.
  if (arr[low] >= x) return low;

  // Otherwise, no element is >= x.
  return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {2, 3, 5, 5, 8, 10, 12};

  cout << firstGreaterThanX(arr, 4) << "\n"; // 2

  return 0;
}
