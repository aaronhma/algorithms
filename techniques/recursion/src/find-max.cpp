#include <bits/stdc++.h>

using namespace std;

/**
 * Returns the max of the array.
*/
int getMax(vector<int> &arr, int i)
{
  // Base case: i = 0 - Return arr[0] - No more elements before this element
  if (i == 0) return arr[0];

  // Return the maximum of the current element and elements from arr[0] to arr[i - 1]
  return max(arr[i], getMax(arr, i - 1));
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {2, 3, 4, 7, 2, 9};

  // Print the max from arr[0] to arr[n - 1]
  cout << getMax(arr, arr.size() - 1) << "\n";

  return 0;
}
