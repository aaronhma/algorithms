# Sliding Window Technique [(C++)](./sliding-window.cpp)

## Concept: Sliding Window

The sliding window techique refers to a subarray of an array $arr$. At each subarray, we want to calculate some information about the elements inside the window.

All sliding window problems can be broken down into two types:

-   **Fixed window length $k$**: The length of the window is fixed at the length of $k$ and it asks you to find something in the window (eg. median/max sum/etc.)
-   **Two pointers + some criteria**: The window size is not fixed and has a specified criteria (eg. Find the number of subarrays whose sum is equal to $k$)

## Example: Size of Longest Subarray

Given $arr = \{ 1, 5, 2, 1, 7, 2, 1, 5, 5, 7 \}$ and $k = 3$, print out the size of the longest subarray with at most $k$ distinct elements ($5$).

## Approach 1: Brute Force

We can brute force the solution for a time complexity of $\theta(n^2)$.

```cpp
for (int left = 1; left <= n; left++) {
  // reset frequency array
  for (int i = 1; i <= n; i++) freq[i] = 0;

  int count = 0; // # of distinct elements in current subarray

  for (int right = left; right <= n; right++) {
    // add to the frequency array
    if (++freq[arr[right]] == 1) count++;

    if (count <= k)
      // update the answer
  }
}
```

## Approach 2: Sliding Window

We can solve this problem in $\theta(n)$ time if we use the sliding window technique:

```cpp
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
```
