# Merge Sort

Merge sort is a divide and conquer algorithm that runs in $\theta(n \ log \ n)$. It divides the input array into two halves ($arr[left:mid]$, $arr[mid + 1: right]$), then repeatedly calls itself with the two halves, and merges the two sorted halves.

As an example, let's say we want to sort the array $\{ 38, 27, 43, 3, 9, 82, 10 \}$. The steps taken by merge sort is shown below:

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

## Complexity Analysis

#### **Time complexity:**

The time complexity of merge sort is $\theta(n \ log \ n)$ for all three cases (average, best, worst):

-   `mergeSort`: $\theta(log \ n)$ - Without including the `merge` operations, the "divide" recursion tree is approximately the size of $log \ n$.
-   `merge`: $\theta(n)$ - In the worst case, we have to go through the array (approximately) once.

Multiplying these together, we have $\theta(n \ log \ n)$.

#### **Space complexity:**

The space compleity is $\theta(n)$, as we need to create two arrays during the `merge()` function and also store data in the call stack during the `mergeSort()` function (because it's implemented using recursion).
