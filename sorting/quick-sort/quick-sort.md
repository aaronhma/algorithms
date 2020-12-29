# QuickSort

## About

Quicksort works by setting the first element in the list as the pivot. Then, we iterate through the list and if the element at the current index is smaller or equal to the pivot, we add that element to our `low` list (elements smaller than pivot) or `high` list (elements greater than pivot). Then, we recursively sort both of the lists. In the end we get `sorted low list + pivot + sorted high list`.

## Pros & Cons of Quick Sort

- Pros:

  - Fast: O(n log n) average
  - Parallel sorting

- Cons:

  - Slow worst case: O(n<sup>2</sup>)

# Complexity Analysis

- Time complexity: average: O(n log n) worst: O(n<sup>2</sup>)
- Space complexity: O(log n)
