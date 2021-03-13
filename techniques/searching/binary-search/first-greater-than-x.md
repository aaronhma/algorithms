# First Element Greater than (or equal to) $x$

## The Problem

Given a sorted array, find the first element greater than (or equal to) $x$. Print this element's index.

```python
> arr = [2, 3, 5, 6, 8, 10, 12]
> firstGreaterThanX(arr, 4)
2
```

We can also change this problem to finding the index of the first $true$ in an array (or vice versa).

## Approach 1: Brute Force

Simply brute force the answer and stop when $arr[i] >= x$ or we've reached the end of the array (no answer).

```cpp
for (int i = 0; i < arr.size(); i++) {
  if (arr[i] >= x) {
    return i;
  }
}

return -1;
```

## Approach 2: Binary Search

This problem is classical binary search problem implementing `lower_bound`. At each iteration (while $low < high$), we'll do the following steps:

1. Calculate the middle element index ($mid$)
2. If $x <= arr[mid]$, then all the elements to the right of $mid$ is all $>= x$, so we move our $high$ pointer to $mid$.
3. If $x > arr[mid]$, then, all elements to the left will be $< x$, so we move our $left$ pointer to $mid + 1$.
