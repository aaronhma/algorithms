# Insertion Sort [(C++)](./insertion-sort.cpp)

## About

Insertion sort works by adding elements from a unsorted array to a unsorted array.

1. Have an array:

![Image](https://www.interviewcake.com/images/svgs/insertion_sort_algorithm__unsorted_starting_list.svg?bust=206)

2. Then break the vector into 2 chunks:

![Image](https://www.interviewcake.com/images/svgs/insertion_sort_algorithm__list_with_sorted_first_element.svg?bust=206)

3. Add next element in unsorted array to sorted array, then swap if needed:

now swap:

![Image](https://www.interviewcake.com/images/svgs/insertion_sort_algorithm__list_with_swapped_3_and_8.svg?bust=206)

4. Repeat until the unsorted array is empty. Here's what the final array would look like:

![Image](https://www.interviewcake.com/images/svgs/insertion_sort_algorithm__moving_element_4_by_swapping.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/insertion-sort))

## ℹ️ Tips

-   Insertion sort is best used on a partially sorted array, as the best case complexity is $\Omega(n)$.
-   Insertion sort is a stable sorting algorithm.
-   Insertion sort is an in-place algorithm.
