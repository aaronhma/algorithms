#include <bits/stdc++.h>

using namespace std;

// O(n^2)
int longest_consecutive_subarray(vector<int> &arr, int n)
{
  int ans = 0;          // Answer
  vector<bool> freq(n); // keeps track if current element is in the current subarray

  // starting index of subarray
  for (int i = 0; i < n; i++)
  {
    // reset the freq array
    for (int j = 0; j < n; j++)
      freq[i] = false;

    // min: Current minimum value of the current subarray
    // max: Current maximum value of the current subarray
    // size: Current size of the current subarray
    int min = INT_MAX, max = INT_MIN, size = 0;

    // ending index of subarray
    for (int j = i; j < n; j++)
    {
      // If we've already used this element before, exit out of the subarray building loop
      if (freq[arr[j]])
        break;

      // We cannot use this element again
      freq[arr[j]] = true;

      // Update max and min values of the current subarray
      min = ::min(min, arr[j]);
      max = ::max(max, arr[j]);

      // Increase size of subarray
      size++;

      // Only true if the subarray contains consecutive elements
      if (size == max - min + 1)
        // Update max size
        ans = ::max(ans, size);
      else
        break;
    }
  }

  // Return the answer
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {6, 1, 3, 4, 5, 2, 7};
  int n = arr.size();

  cout << longest_consecutive_subarray(arr, n) << "\n";

  return 0;
}
