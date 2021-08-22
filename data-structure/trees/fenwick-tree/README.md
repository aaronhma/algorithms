# Fenwick Tree/Binary Indexed Tree (BIT)

## About

Given many queries that are of the form:

1. Change the value at $arr[i]$ to $arr[i] + v$.
2. Compute the sum of the range $[a, b]$.

## The Problem with Prefix Sums

We could use prefix sums for this problem for $\theta(1)$ queries, but we $\theta(n)$ updates, which is too slow.

One approach is to use [segment tree](../segment-tree/README.md) for $\theta(log \ n)$ time on both operations. Fenwick Tree also has $\theta(log \ n)$ time for both operations, but has a smaller constant factor.

**NOTE: For tight constraint problems, consider using a Fenwick Tree.**

> ### **Always using a Fenwick tree is not a good idea - there are some problems where only segment tree can be used.**

## Fenwick Tree Idea

Let the array $a$ be $[1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16]$ (image below is $1$-based, array here is also $1$-based, so $a[1] = 1$).

![Image](https://he-s3.s3.amazonaws.com/media/uploads/68f2369.jpg)

Note the fact that if $i$ is a power of $2$, then $bit[i] = \sum arr[i] \text{ where } i \in {0, ..., i}$ If $i$ is even, then $bit[i]$ is the $\sum$ of the current segment. Otherwise, $i$ is odd, and $bit[i] = arr[i]$.

**NOTE: The implementation used is $0$-based, though many people prefer $1$-based indexing implementation.**

## Fenwick Tree Update Queries



## Fenwick Tree Sum Queries



## 2D Fenwick Tree

A $2$D Fenwick Tree implementation is exactly the same as the $1$D Fenwick Tree implementation, except we add a $j$ index.

```cpp
struct FenwickTree2D {
    vector<vector<int>> bit;
    int n, m;

    // init(...) { ... }

    int sum(int x, int y) {
        int ret = 0;
        for (int i = x; i >= 0; i = (i & (i + 1)) - 1)
            for (int j = y; j >= 0; j = (j & (j + 1)) - 1)
                ret += bit[i][j];
        return ret;
    }

    void add(int x, int y, int delta) {
        for (int i = x; i < n; i = i | (i + 1))
            for (int j = y; j < m; j = j | (j + 1))
                bit[i][j] += delta;
    }
};
````
