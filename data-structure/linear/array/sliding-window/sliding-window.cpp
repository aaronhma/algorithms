#include <bits/stdc++.h>

using namespace std;

#define MAX_N 7 // Max value in input

int slidingWindow(vector<int> &arr, int n, int k)
{
  // If the array is empty, or k < 0, the answer is 0.
  if (n == 0 || k < 0)
    return 0;

  // MAX_N: Maximum number in the array
  vector<int> freq(MAX_N, 0); // Frequency array

  // ans: Final answer
  // count: # of distinct elements in the current subarray
  // right: Ending
  int ans = 0, count = 0, right = 0;

  // left = 0
  for (; right < n; right++)
  {
    // if arr[right] added is unique, increase our unique count
    if (++freq[arr[right]] == 1)
      count++;

    // if the # of unique elements passes k, exit the for loop
    if (count > k)
      break;
  }

  // Two cases after exiting the for loop:
  // Case 1: right > n
  // Case 2: count > k

  // Make the right pointer of left = 0 valid
  // Also, remove that value from the frequency array
  // Then, check that if the value in the frequency array drops to 0. If it does, decrease count.
  if (freq[arr[right--]] == 0)
    count--;

  // Current size of the longest subarray that has <= k distinct elements is right
  ans = right;

  // left = 1 ... n
  for (int left = 1; left < n; left++)
  {
    // remove previous freq[arr[left - 1]]
    // Also if freq[arr[left]] drops to 0, decrease the # of distinct elements in subarray.
    if (--freq[arr[left - 1]] == 0)
      count--;

    while (++right < n)
    {
      // Check if we have a new distinct item.
      if (++freq[arr[right]] == 1)
        count++; // If yes, increase the # of distinct elements in subarray.

      // If the # of distinct elements in the subarray exceeds k, exit out of the while loop.
      if (count > k)
        break;
    }

    // Case 1: count <= k
    // This answer is going to be the maximum possible if # of distinct elements <= k.
    if (count <= k)
      return max(ans, n - left + 1);

    // Case 2: count > k
    // Remove arr[right] value from the frequency array
    // Then, check that if arr[right] in the frequency array drops to 0. If it does, decrease the # of distinct elements in the frequency array.
    if (--freq[arr[right--]] == 0)
      count--;

    // Get the max of current subarray
    ans = max(ans, right - left + 1);
  }

  // This case is impossible: Nothing found
  return -1;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 5, 2, 1, 7, 2, 1, 5, 5, 7};
  int n = arr.size(), k = 3;

  // {2, 1, 7, 2, 1}
  cout << slidingWindow(arr, n, k) << "\n"; // 5

  return 0;
}
