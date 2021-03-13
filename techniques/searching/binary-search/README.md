# Binary Search

## About

Binary search is an efficient algorithm that runs in $\theta(log \ n)$ and works on a monotonic dataset.

It's essentially divide and conquer. At each step, we find the middle element between the "searchable" search space and divide the "searchable" search space in half and discard the half that will definitely **_not_** contain $x$ (we know this as the array will be monotonic) and continue searching in the half that will (possibly) contain $x$.

In the end, if we find $x$, we return the index/$true$/etc. If we couldn't find $x$, that means that $x \notin arr$, so we can return $-1$/$false$/etc.

## What is a Monotonic/Non-monotonic Function?

Binary search only works properly on a dataset when it's monotonic.

**Monotonic:**

A function is said to be monotonic if the entire domain is either fully increasing or fully decreasing.

> #### **Increasing or decreasing order**

**Non-monotonic:**

A function is non-monotonic when the entire dataset is not fully increasing or not fully decreasing.

## How it Works

Binary Search is generally composed of 3 main sections:

1. **Pre-processing**: Make the data monotonic.
2. **Binary Search**: Using a loop or recursion to divide search space in half after each comparison.
3. **Post-processing**: Determine viable candidates in the remaining space.

-   If the target value is equal to the middle element - we're done.
-   If the target value is smaller - continue to search on the left.
-   If the target value is larger - continue to search on the right.

## Iterative vs. Recursive Binary Search

You can find the iterative & recursive binary search implementation [here](https://www.geeksforgeeks.org/binary-search/).

**Iterative binary search implementation complexities:**

- Time: $\theta(log \ n)$
- Space $\theta(1)$

**Recursive binary search implementation complexities:**

- Time: $\theta(log \ n)$
- Space: $\theta(log \ n)$

The main difference between the iterative & recursive implementation is space complexity. So, always use the iterative version of binary search. **Remember: always prefer the implementation that uses the least resources.**

## Avoiding the Overflow Bug

Calculating the middle element of the "searchable" range is (surprisingly) a hard task. Jon Bently's own implementation contained an overflow error that remained undetected for over 20 years. Further more, Java's own implementation of Binary Search had the same bug and went undetected for over 9 years.

The key is here:

$$mid = \frac{low + high}{2}$$

We change the above formula to the following to avoid integer overflow:

$$mid = low + \frac{high - low}{2}$$

Proof that these are the same:

![Image](https://miro.medium.com/max/1400/1*oMP2IjNlw-A40YwjYw74lw.jpeg)

## When to use Binary Search?

- When we have to solve a problem in $\theta(log \ n)$, most likely it's solvable using Binary Search.
- If we need to find an element $x$ in a dataset that is monotonic (if not, make if monotonic (if possible)).

## Upper & Lower Boundss

1. **Upper bound**

If the value $x$ if not present in the array, $upper\_bound(arr, x)$ returns the highest position that could be inserted in the array without breaking the ordering.

If the value $x$ is in the array, $upper\_bound(arr, x)$ returns the last position that $x$ appears in the array.

2. **Lower bound**

If the value $x$ if not present in the array, $lower\_bound(arr, x)$ returns the lowest position that could be inserted in the array without breaking the ordering.

If the value $x$ is in the array, $lower\_bound(arr, x)$ returns the first position that $x$ appears in the array.

**ℹ️ Tip: If we are asked to compute the # of times $x$ appears in a sorted array, the answer would be $upper\_bound(arr, x) - lower\_bound(arr, x)$ (last appearance - first appearance is the # of times $x$ appears in the array).**

**ℹ️ Tip: C++ has a built-in $lower\_bound$ function that returns the first index the element $x$ appears. If $x$ doesn't appear in the array, both $upper\_bound$ and $lower\_bound$ are the same - where $x$ will be placed without ruining the order.**

**ℹ️ Tip: C++ has a built-in $upper\_bound$ function that returns the last index the element $x$ appears + 1. If $x$ doesn't appear in the array, both $upper\_bound$ and $lower\_bound$ are the same - where $x$ will be placed without ruining the order.**
