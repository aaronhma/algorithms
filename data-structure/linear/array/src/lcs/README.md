# Longest Consecutive Subsequence

## The Problem

Given an array $arr = \{ 3, 7, 1, 4, 2, 5, 3, 8, 10, 9 \}$, return the longest consecutive subarray of the array.

## Approach 1: Simulation

We can simulate the starting and ending indexes of the subarray of an array in $\theta(n^2)$ time with a validation stage that takes $\theta(n - start\_index) \approx \theta(n)$. The idea is simple:

* Create a `freq` array that is $true$ is we have used the value $x$ and $false$ if we have not used the value $x$.
* Simulate the starting index ($s$) and ending index $e$ of the subarray.
  * $min = INT\_MAX, max = INT\_MIN$
  * Validation stage:
    * Check that we have not used the item $x$ before.
    * Update the minimum and maximum value of the subarray
    * Increase the size of the subarray ($size += 1$)
    * If the subarray contains consecutive elements, update our ans $ans = max(ans, size)$
* Return $ans$


```cpp
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
```
