# Selection Sort

## About

Selection sort is an unstable sorting algorithms that sorts the elements in a array in-place. Selection sort has performance advantages over other sorting algorithms, as it has O(n<sup>2</sup>) time complexity, always beats bubble sort.

## Pros & Cons of Selection Sort

- Pros:

  - Space efficient

- Cons:

  - Slow on large datasets

## Implementation

1. Select the smallest element from the unsorted array and moving it to the front. So our array would look like this:

![Image](https://www.interviewcake.com/images/svgs/selection_sort__list_with_1_sorted_and_6_unsorted.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/selection-sort))

2. Then, in the unsorted array, we choose the next smallest element and move it to the front.

![Image](https://www.interviewcake.com/images/svgs/selection_sort__list_with_sorted_2_elements.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/selection-sort))

3. Repeat until there are no elements in the unsorted array.

4. Once sorted, return the sorted array.
