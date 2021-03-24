# Sorting

## About

Sorting is when we are arranging things in order, based on the properties of the elements. Also, [searching](../searching/README.md) is made easier after soring.

## Time Complexities

| ☆   | Sorting Algorithm                            | C++                                        | Time Complexity (Best) | (Average)             | (Worst)               | Space Complexity  | Additional Contents                            |
| --- | -------------------------------------------- | ------------------------------------------ | ---------------------- | --------------------- | --------------------- | ----------------- | ---------------------------------------------- |
|     | [Bubble Sort](./bubble-sort/README.md)       | [C++](./bubble-sort/bubble-sort.cpp)       | $\theta(n)$            | $\theta(n^2)$         | $\theta(n^2)$         | $\theta(1)$       |                                                |
|     | [Counting Sort](./counting-sort/README.md)   | [C++](./counting-sort/counting-sort.cpp)   | $\theta(n+k)$          | $\theta(n+k)$         | $\theta(n+k)$         | $\theta(k)$       |                                                |
|     | [Insertion Sort](./insertion-sort/README.md) | [C++](./insertion-sort/insertion-sort.cpp) | $\theta(n)$            | $\theta(n^2)$         | $\theta(n^2)$         | $\theta(1)$       |                                                |
|     | [Merge Sort](./merge-sort/README.md)         | [C++](./merge-sort/merge-sort.cpp)         | $\theta(n \ log \ n)$  | $\theta(n \ log \ n)$ | $\theta(n \ log \ n)$ | $\theta(n)$       | [Inversions](./merge-sort/inversions.md)       |
|     | [Quick Sort](./quick-sort/README.md)         | [C++](./quick-sort/quick-sort.cpp)         | $\theta(n \ log \ n)$  | $\theta(n \ log \ n)$ | $\theta(n^2)$         | $\theta(log \ n)$ | [Nuts & Bolts](./quick-sort/nuts-and-bolts.md) |
|     | [Radix Sort](./radix-sort/README.md)         | [C++](./radix-sort/radix-sort.cpp)         | $\theta(nk)$           | $\theta(nk)$          | $\theta(nk)$          | $\theta(n + k)$   |                                                |
|     | [Selection Sort](./selection-sort/README.md) | [C++](./selection-sort/selection-sort.cpp) | $\theta(n^2)$          | $\theta(n^2)$         | $\theta(n^2)$         | $\theta(1)$       |                                                |

## Sorting Algorithms Time/Space Complexity

| Algorithm   | Time Complexity (Best) | (Average)      | (Worst)          | Space Complexity |
| ----------- | ---------------------- | -------------- | ---------------- | ---------------- |
| Timsort     | O(n)                   | O(n log(n))    | O(n log(n))      | O(n)             |
| Heapsort    | O(n log(n))            | O(n log(n))    | O(n log(n))      | O(1)             |
| Tree Sort   | O(n log(n))            | O(n log(n))    | O(n<sup>2</sup>) | O(n)             |
| Shell Sort  | O(n log(n))            | O(n(log(n))^2) | O(n(log(n))^2)   | O(1)             |
| Bucket Sort | O(n+k)                 | O(n+k)         | O(n<sup>2</sup>) | O(n)             |
| Cubesort    | O(n)                   | O(n log(n))    | O(n log(n))      | O(n)             |

## Stable Sorting Algorithms

A **_stable sorting algorithm_** is defined as a sorting algorithm that sorts the array in the given order. For example, assume that we have an array $arr = \{ 6, 2_a, 3, 2_b \}$ ($a$ and $b$ are marked to show that when sorting using a stable sorting algorithm $2_a$ comes before $2_b$).

If we were using an unstable sorting algorithm, we would get two possible results:

$$\{ 2_a, 2_b, 3, 6 \}$$
$$\{ 2_b, 2_a, 3, 6 \}$$

Using a stable sorting algorithm, we have only one result:

$$\{ 2_a, 2_b, 3, 6 \}$$

$2_a$ comes before $2_b$ in the original array, so when sorting, $2_a$ will come before $2_b$.

## Inversions

An **_inversion_** is the number of swaps needed to sort an array. Formally speaking, two elements $arr[i]$ and $arr[j]$ are said to be an _inversion_ if $arr[i] > arr[j]$ and $i < j$.

**Example:**

$$arr = \{ 8, 4, 2, 1 \}$$

The number of inversions in this array is $6$ and the inversion pairs are $(8, 4), (8, 2), (4, 2), (8, 1), (4, 1), (2, 1)$.
