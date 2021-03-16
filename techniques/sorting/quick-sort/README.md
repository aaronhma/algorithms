# Quick Sort [(C++)](./quick-sort.cpp)

## About

**[Video Explanation](https://youtu.be/0SkOjNaO1XY?t=17)**

Quick Sort is a Divide & Conquer algorithm that runs in $\theta(n \ log \ n)$ in the best case and $\theta(n^2)$ in the worst case.

At each step, we pick an element as the pivot and partitions the given array around the given pivot. All the elements to the left of the pivot are less than or equal to the pivot, and all the elements to the right of the pivot are greater than the pivot.

## How To Find the Pivot?

There are many different ways to pick the pivot. Shown below are just a few of them:

-   Always pick the first element as the pivot.
-   Always pick the last element as the pivot.
-   Pick a random element as the pivot.
-   Pick the middle element as the pivot.

**ℹ️ Tip: The pivot used in Quick Sort determines the time complexity of sorting using Quick Sort.**

For simplicity, we'll be using the last element as the pivot.

## Finding the Pivot Index `partitionIndex()`

This function returns the pivot (last element in the array) after moving all the elements less than the pivot closer to the front of the array, and moving all the elements greater than the pivot closer to the back of the array.

## Quick Sort `sort()`

The main `sort()` function runs in $\theta(log \ n)$ time, as we're essentially dividing the array in half (based on the pivot index returned by `partitionIndex`).

As an example, here's what the recursion tree would look like for an array $\{ 10, 80, 30, 90, 40, 50, 70 \}$:

![Image](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png)

One case to handle: if the $left$ pointer is $>= right$, we can immediately exit, because of the following constraints:

-   $left == right$: There is only $1$ element to sort, but the subarray is already sorted, so we can exit.
-   $left > right$: The indexes is invalid, we can't sort.

```cpp
// Base case: If left >= right, we cannot sort the array, as the pivot index would be incorrect.
if (low >= high) return;

// Get the pivot index and put all elements <= pivot on the left side of the pivot and all the element > pivot on the right side of the pivot.
int pivotIndex = partitionIndex(arr, low, high);

// Sort all the elements on the left of the pivot in the range[low:pivotIndex - 1]
sort(arr, low, pivotIndex - 1);

// NOTE: Don't sort the element at arr[pivot] (because it's the pivot and it's already sorted)

// Sort all the elements on the right of the pivot in the range[pivotIndex + 1:high]
sort(arr, pivotIndex + 1, high);
```

## Complexity Analysis

### Time Complexity

Because Quick Sort is Divide & Conquer, the `sort` function takes $\theta(log \ n)$ (dividing) and the `partitionIndex` function takes $\theta(n)$ time.

-   Best complexity: $\theta(n \ log \ n)$
-   Average complexity: $\theta(n \ log \ n)$
-   Worst complexity: $\theta(n^2)$

### Space Complexity

Because we're always creating the same variables regardless of input size, the space complexity is $\theta(1)$.

## ℹ️ Tips

-   Only use Quick sort when time & space matters.
-   Quick sort's worst case is when the array contains few distinct elements, resulting in $\theta(n^2)$ time.
-   Quick sort is better than merge sort as it is in-place and has a small hidden constant.
