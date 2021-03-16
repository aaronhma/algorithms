# Aggressive Cows

## The Problem

#### **[View on SPOJ](https://www.spoj.com/problems/AGGRCOW/)**

## Approach 1: Binary Search

**ℹ️ Tip: For a better understanding, check the code.**

This problem can be solved using Binary Search.

At each step, calculate $mid$. Let $mid$ be the distance that each cow should be spaced apart. We also have a function $valid(arr, dist, c)$ that returns $true$ if we can place $c$ cows (at least) $dist$ apart from each other given stalls $arr$. Then, based on the result of the function, we have two cases:

-   $good(arr, mid, c) = true$:

If we could place all cows at least $mid$ distance apart, move $low$ to $mid + 1$ (try next possible).

**ℹ️ Tip: We don't need to take the max distance ($max(ans, mid)$), as at each step, if $valid(arr, mid, c)$ is true, we have a higher $mid$.**

-   $good(arr, mid, c) = false$:

Since we couldn't place all cows at least $mid$ distance apart, any distance $> mid$ will not work. Move $high$ to $mid - 1$ (try next possible as all distances $> mid$ will also result in "we couldn't place all cows at least $mid$ distance apart")
