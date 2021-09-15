# Divide & Conquer

## About

The most-well known algorithm design strategy:

1. **Divide** a problem instance into two or more smaller
instances (ideally of about the same size)
2. **Conquery** the smaller instances (usually recursively)
3. **Merge** solutions to the smaller instances to obtain the solution to the original instance

## Example: Merge Sort

Like [Quick Sort](https://github.com/aaronhma/algorithms/blob/master/algorithms/sorting/quick-sort/README.md), [Merge Sort](https://github.com/aaronhma/algorithms/tree/master/algorithms/sorting/merge-sort) is a **Divide and Conquer** algorithm.

Merge sort runs in $\theta(n \ log \ n)$ with $\theta(n)$ space. It divides the input array into two halves ($arr[left:mid]$, $arr[mid + 1: right]$), then repeatedly calls itself with the two halves, and merges the two sorted halves.

As an example, let's say we want to sort the array $[38, 27, 43, 3, 9, 82, 10]$. The steps taken by merge sort is shown below:

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Merge-Sort-Tutorial.png)

The `mergeSort` function can be easily implemented. For the implementation of the `merge` function, see [this](https://www.geeksforgeeks.org/merge-two-sorted-arrays/) article.

```cpp
// arr: The input array
// left: Starting index of subarray
// right: Ending index of subarray
void mergeSort(vector<int> &arr, int left, int right)
{
  // Base case: invalid index
  // No way to sort, exit
  if (left >= right) return;

  // Calculate middle element index
  int mid = left + (right - left) / 2;

  // Call merge sort for first half
  mergeSort(arr, left, mid);

  // Call merge sort for second half
  mergeSort(arr, mid + 1, right);

  // Merge the two halves that was sorted previously
  merge(arr, left, mid, right);
}
```

> ### **Extension: [Partition Position and Negative Integers w/ Merge Sort](https://www.techiedelight.com/segregate-positive-negative-integers-using-mergesort/?lang=cpp)**

## Tips

When you’re writing a recursive function involving an array, the base case is often an empty array or an array with one element. If you’re stuck, try that first.

-   functional programming

“Why would I do this recursively if I can do it easily with a loop?” Well, this is a sneak peek into functional programming! Functional programming languages like Haskell don’t have loops, so you have to use recursion to write functions like this. If you have a good understanding of recursion, functional languages will be easier to learn.
