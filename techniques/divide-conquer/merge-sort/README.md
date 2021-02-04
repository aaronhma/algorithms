# Merge Sort

Merge sort can be easily implemented with the following steps:

- Define $left$ and $right$ indexes
- Calculate middle element ($mid = \frac{left + right}{2}$)
  - Array 1: all the elements from $arr[left]$ to $arr[mid]$
  - Array 2: all the elements from $arr[mid + 1]$ to $arr[right]$
- [Merge two arrays](https://www.geeksforgeeks.org/merge-two-sorted-arrays/) $merge(arr1, arr2)$
