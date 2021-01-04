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


# Quicksort

Quicksort uses divide-and-conquer, a well-known recursive technique for solving problems. Using divide-and-conquer, break down the array until you’re at the base case.

**Using quicksort, always choose a random element as the pivot. The average runtime of quicksort is O(n log(n))!**

What’s the simplest array that a sorting algorithm can handle? some arrays don’t need to be sorted at all. You can just return those arrays as is—there’s nothing to sort

1. Empty arrays
2. arrays with just one element will be the base case.

- Here’s how quicksort works.

1. Pick a pivot.

pick an element from the array. This element is called the *pivot*.

2. Partition the array into two sub-arrays: elements less than the pivot and elements greater than the pivot.

find the elements smaller than the *pivot* and the elements larger than the *pivot*.
This is called partitioning. Now you have 1. A sub-array of all the numbers less than the pivot 2. The pivot  3. A sub-array of all the numbers greater than the pivot. The two sub-arrays aren’t sorted. They’re just partitioned. But if they were sorted, then sorting the whole array would be pretty easy.

3. Call quicksort recursively on the two sub-arrays.

## Runtime. Big O natation

Quicksort is unique because its speed depends on the pivot you choose.

Quicksort is a tricky case. In the worst case, quicksort takes *O(n^2)* time.
In the average case, quicksort takes *O(n log(n))* time.
AKA *O(n) * O(log n) = O(n log(n))*, the technical way to say that is, the height of the call stack is *O(log n)*, and each level takes *O(n)* time.

But sometimes the constant can make a difference. Quicksort versus merge sort is one example. Quicksort has a smaller constant than merge sort. So if they’re both *O(n log n)* time, quicksort is faster. And quicksort is faster in practice because it hits the average case way more often than the worst case.

- Average case vs. worst case

The performance of quicksort heavily depends on the pivot you choose. The best case is also the average case. If you always choose a random element in the array as the pivot, quicksort will complete in O(n log n) time on average. Quicksort is one of the fastest sorting algorithms out there, and it’s a very good example of D&C.

The constant in Big O notation can matter sometimes. That’s why quicksort is faster than merge sort.

The constant almost never matters for simple search versus binary search, because O(log n) is so much faster than O(n) when your list gets big.
