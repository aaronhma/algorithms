# C++'s Standard Template Library

C++'s Standard Template Library (STL) is nothing more than implementations of commonly used data structures & algorithms.

The data structures provided in C++'s STL is just a container where you can store things.

| ☆   | STL                                  | C++     |     |
| --- | ------------------------------------ | ------- | --- |
|     | [Array](./array.md)                  | [C++]() |     |
|     | [Map](./map.md)                      | [C++]() |     |
|     | [Permutation](./permutation.md)      | [C++]() |     |
|     | [Priority Queue](./piority-queue.md) | [C++]() |     |
|     | [Set](./set.md)                      | [C++]() |     |
|     | [String](./string.md)                | [C++]() |     |
|     | [Vectors](./vectors.md)              | [C++]() |     |

## STL Algorithms on Vectors & More

If we had a vector $arr$, we could apply some possible operations:

-   `std::shuffle(arr.begin(), arr.end(), gen)`: Randomly shuffles the array using a generator $gen$ from [`<random>`](http://www.cplusplus.com/reference/random/) library
-   `std::random_shuffle(arr.begin(), arr.end())`: Randomly shuffles the array using `rand()`
-   `std::unique(arr.begin(), arr.end())`: [TODO]
-   `arr.erase(std::unique(arr.begin(), arr.end()), arr.end())`: Makes the array unique
-   `std::max_element(arr.begin(), arr.end())`: Returns iterator to the maximum element in the array $arr$ (segmentation fault if the array is empty)
-   `std::min_element(arr.begin(), arr.end())`: Returns iterator to the minimum element in the array $arr$ (segmentation fault if the array is empty)
-   `std::accumulate(arr.begin(), arr.end(), x)`: Returns the sum of all the elements in the array $arr$ + $x$
-   `std::count(arr.begin(), arr.end(), x)`:
-   `std::find(arr.begin(), arr.end(), x)`:
-   `std::iota()`:
-   `std::next_permutation(arr.begin(), arr.end()):`

## How `rand()` Works

`rand()` in C++ generates a number in the range $[0, RAND\_MAX]$. Note that [`RAND_MAX`](https://www.cplusplus.com/RAND_MAX) is implementation dependent.

We can generate a number in the range $[L, R]$ if $L \in [0, RAND\_MAX]$ and $R \in [0, RAND\_MAX]$ by using the format $rand() \ \% \ (R - L + 1) + L$.

## Details Regarding C++ Sort

C++'s sort uses intro sort and runs in $\theta(n \ log \ n)$. Introsort is the best general sorting algorithm and is a hybrid sorting algorithm (uses more than one sorting algorithm during its process for speed). Intro sort uses Quicksort, Heapsort, and Insertion sort runs in $\theta(n \ log \ n)$.

## ℹ️ Tip: Use a Data Structure's Own Implementation of an Algorithm over STL's Implementation

**ℹ️ Tip: If possible, use a data structure's own implementation of an algorithm over STL's implementation.**

_Example:_

```cpp
// Create a set
set<int> set1;

// bad:
count(set1.begin(), set1.end(), 5); // O(n)

// good:
set1.count(5); // O(log n)
```
