# Find the Number of Inversions in an Array [(C++)](./inversions.cpp)

## The Problem

#### [View on CodeChef](https://www.codechef.com/UASS001/problems/CINV)

Given an array, count the number of [inversions](https://github.com/aaronhma/algorithms-notes/tree/master/techniques/sorting#inversions) that exists.

## Approach 1: Brute Force

We can directly brute force the indexes $i$ and $j$ and check if $arr[i] > arr[j]$. If yes, then $(arr[i], arr[j])$ form an inversion pair.

```cpp
for (int i = 0; i < n; i++) {
  for (int j = i + 1; j < n; j++) {
    if (arr[i] > arr[j]) ans++;
  }
}
```

## Approach 2: Modified Merge Sort

Unfortunately, submitting the previous solution gives us partial credit, as the time complexity is $\theta(n^2)$. We need a **faster** solution. Fortunately, this is a classical problem that can be solved using Merge Sort.

We directly implement Merge Sort, but the key difference is the `merge` function. Instead of just merging two arrays, we'll also count the # of inversions and return that.

Counting the # inversions can be done in the `if arr[i] > arr[j]` statement. If we hit this statement, then we will add $mid - i + 1$ (all elements after $arr[i]$ form an inversion pair with $arr[j]$ as they are all bigger than $arr[j]$) to our inversion count.

**Important:**

-   Use `long long` to prevent integer overflow.
-   Instead of creating a temporary array every time, we'll globally create an array that is of the size $2 * 10^5 + 9$ (bigger than any $n$ in the input).
