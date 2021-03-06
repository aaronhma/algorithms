# Sorting

| ☆   | Sorting Algorithm                            | C++                                        | Time Complexity (Best) | (Average)     | (Worst)          | Space Complexity |
| --- | -------------------------------------------- | ------------------------------------------ | ---------------------- | ------------- | ---------------- | ---------------- |
|     | [Bubble Sort](./bubble-sort/README.md)       | [C++](./bubble-sort/bubble-sort.cpp)       | $\theta(n)$            | $\theta(n^2)$ | O(n<sup>2</sup>) | $\theta(1)$      |
|     | [Insertion Sort](./insertion-sort/README.md) | [C++](./insertion-sort/insertion-sort.cpp) | $\theta(n)$            | $\theta(n^2)$ | $\theta(n^2)$    | $\theta(1)$      |
|     | [Selection Sort](./selection-sort/README.md) | [C++](./selection-sort/selection-sort.cpp) | $\theta(n^2)$          | $\theta(n^2)$ | $\theta(n^2)$    | $\theta(1)$      |

## Sorting Algorithms Time/Space Complexity

| Algorithm     | Time Complexity (Best) | (Average)      | (Worst)          | Space Complexity |
| ------------- | ---------------------- | -------------- | ---------------- | ---------------- |
| Quicksort     | O(n log(n))            | O(n log(n))    | O(n<sup>2</sup>) | O(log n)         |
| Mergesort     | O(n log(n))            | O(n log(n))    | O(n log(n))      | O(n)             |
| Timsort       | O(n)                   | O(n log(n))    | O(n log(n))      | O(n)             |
| Heapsort      | O(n log(n))            | O(n log(n))    | O(n log(n))      | O(1)             |
| Tree Sort     | O(n log(n))            | O(n log(n))    | O(n<sup>2</sup>) | O(n)             |
| Shell Sort    | O(n log(n))            | O(n(log(n))^2) | O(n(log(n))^2)   | O(1)             |
| Bucket Sort   | O(n+k)                 | O(n+k)         | O(n<sup>2</sup>) | O(n)             |
| Radix Sort    | O(nk)                  | O(nk)          | O(nk)            | O(n+k)           |
| Counting Sort | O(n+k)                 | O(n+k)         | O(n+k)           | O(k)             |
| Cubesort      | O(n)                   | O(n log(n))    | O(n log(n))      | O(n)             |
