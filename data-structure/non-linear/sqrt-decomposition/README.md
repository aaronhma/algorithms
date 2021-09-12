# Sqrt Decomposition

## About

Given an integer array $arr$ with $n$ elements, find the sum of some elements in the range from $i$ to $j$. This array is mutable, meaning, any element in the array can be modified. So, we have two following operations: `query` and `update`. The `query` method should always work even if the array is updated.

-   $query(i, j)$ - Find the sum of the elements between indices $i$ and $j$ ($i \leq j$), inclusive.
-   $update(i, val)$ - Modify the array by updating the element at index $i$ to $val$.

Sqrt Decomposition allows us to answer queries in $\theta(\sqrt{n})$, and the implementation is easier than a Segment Tree or Fenwick Tree.

# **[Video Explanation](https://www.youtube.com/watch?v=gWbDocYhwDA)**

## Preprocess

We "decompose" the array into $\sqrt{n}$ blocks, where each block is of size $\sqrt{n}$ (hence the name Sqrt Decomposition).

![Image](./images/sqrt-de-1.png)

If the length of array $n$ is not a perfect square, we'll create $\lceil \sqrt{n} \ \rceil$ blocks, with the remaining unused elements filled with $0$.

The preprocess operation takes $\theta(n)$ time.

## Query

There are two cases for the query.

If the range is on block boundaries, we can get the sum from blocks directly. For example, if the range is from $3$ to $8$, then $block[1]$ and $block[2]$ perfectly cover this range.

![Image](./images/sqrt-de-2.png)

If range crosses blocks partially, we cannot get the sum from blocks directly. For example, if the range is from $2$ to $7$, we can get the sum for array $[3, 4, 5]$ from $block[1]$, however, we have to get other sums from the array.

![Image](./images/sqrt-de-3.png)

The query time is $\theta(\sqrt{n})$.

## Update

If we update the array, we need to update the block accordingly. For example, $update(2,7)$ will modify the $array[2]$ from $1$ to $7$, and update $block[0]$ from $9$ to $15$.

![Image](./images/sqrt-de-4.png)

The update operation takes $\theta(1)$ time.

## Why Sqrt Decomposition?

Sqrt decomposition can solve a wider range of problems than Segment Trees and Fenwick Trees. The low constant factor of operations and easy coding are also reasons it could be used over segment trees when feasible.
