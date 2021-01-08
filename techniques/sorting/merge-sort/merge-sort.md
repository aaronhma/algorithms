# Merge Sort

The MergeSort algorithm is a “divide-and- conquer” algorithm that splits the input array into two halves, recursively sorts each half, and combines the results using the Merge subroutine.

The simplest way to decompose a sorting problem into smaller sorting problems is to break the input array in half. The first and second halves are each sorted recursively.

## About

The idea of merge sort is to break the array in half, and recursively sort each half, and finally merge these arrays together.

## Pros & Cons of Merge Sort

- Pros:

  - Fast - O(n log n)
  - Parallel sorting

- Cons:
  - O(n) extra space
