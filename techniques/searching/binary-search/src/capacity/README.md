# Minimum Capacity Transportation

## The Problem

Given $n$ boxes where $arr[i]$ describe the weight of box $i$, you want to transport all $n$ boxes using a truck with capacity $c$, in the same order that is given. The sum of the weights of the boxes taken must not exceed $c$. Find the minimum $c$ such that we can move all boxes, using a maximum of $k$ trucks.

**NOTE: This problem is the same as [this LeetCode problem](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/), except for some minor changes.**

## Approach 1: Brute Force

We can brute force the answer for a worst case of $\theta(n^2)$. The pseudocode for this is shown below:

```cpp
// sum(arr) - Returns the sum of the array
int max = sum(arr), c = 1;

while (c <= max) {
  // valid(arr, c, k) - Checks if c is valid
  if (valid(arr, c, k)) {
    return c;
  }

  c++;
}
```

## Approach 2: Binary Search

Brute force works, but it is too slow for larger values of $n$ and $k$. We can solve this problem in $\theta(n \ log \ n)$. We basically use the same idea as brute force, except we find $c$ **faster**.

```cpp
int findC(vector<int> &arr, int k)
{
  // low = max(arr), high = sum(arr)
  int low = arr[0], high = 0;

  for (int i : arr)
  {
    low = max(low, i);
    high += i;
  }

  // As long as there is a smaller c...
  while (low < high)
  {
    // mid: Current c
    // weight: Curren weight
    // Used: # of trucks/boats used
    int mid = low + (high - low) / 2, weight = 0, used = 1;

    // Simulate loading the weight
    for (int i : arr)
    {
      // Add weight into current weight
      weight += i;

      // If the weight exceeds the max capacity, we need to use a new truck/boat
      if (weight > mid)
      {
        weight = i;
        used++;
      }
    }

    // Used > k trucks/boats - this c is impossible
    if (used > k)
    {
      low = mid + 1;
    }

    // Used < k trucks/boats - this c is possible
    else
    {
      high = mid;
    }
  }

  // At this point, low = high, so we can return either of them
  return low;
}
```
