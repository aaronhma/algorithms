# Mo's Algorithm

## About

Based on [Sqrt Decomposition](README.md), we can answer $Q$ queries offline in $\theta((N+Q)\sqrt{N})$ with a $\theta(Q \ log \ Q)$. This might sound like a lot worse than the methods in the previous section, since this is a slightly worse complexity than we had earlier and cannot update values between two queries. But in a lot of situations this method has advantages. During a normal sqrt decomposition, we have to precompute the answers for each block, and merge them during answering queries. In some problems this merging step can be quite problematic. For example, when each query asks to find the mode of its range (the number that appears the most often). For this each block would have to store the count of each number in it in some sort of data structure, and we cannot longer perform the merge step fast enough any more.

Mo's algorithm uses a completely different approach, that can answer these kind of queries fast, because it only keeps track of one data structure, and the only operations with it are easy and fast.

Instead of answering $Q$ queries in the query order, we answer queries moving from left-to-right (we can do this by sorting the queries in $\theta(Q \ log \ Q)$).

Since we change the order of answering the queries, this is only possible when we are allowed to answer the queries in offline mode.

> Mo's Algorithm Idea:

> We will use a single data structure. This data structure will store information about the range. At the beginning this range will be empty. When we want to answer the next query (in the special order), we simply extend or reduce the range, by adding/removing elements on both sides of the current range, until we transformed it into the query range. This way, we only need to add or remove a single element once at a time, which should be pretty easy operations in our data structure.

## Implementation

## Improving Runtime

1. Make $n$ a Constant

Block size of precisely $\sqrt{n}$ doesn't always offer the best runtime. For example, if $\sqrt{n} = 750$ then it may happen that block size of $700$ or $800$ may run better. More importantly, don't compute the block size at runtime - make it `const`. Division by constants is well optimized by compilers.

2. Custom Sort

In odd blocks sort the right index in ascending order and in even blocks sort it in descending order. This will minimize the movement of right pointer, as the normal sorting will move the right pointer from the end back to the beginning at the start of every block. With the improved version this resetting is no more necessary.

**NOTE: $idx$ is removed from the $\text{Query}$ object, so we can use a pair to represent $[l, r]$.**

```cpp
bool cmp(pair<int, int> p, pair<int, int> q) {
    if (p.first / BLOCK_SIZE != q.first / BLOCK_SIZE)
        return p < q;
    return (p.first / BLOCK_SIZE & 1) ? (p.second < q.second) : (p.second > q.second);
}
```


3. [An Even Faster Sorting Algorithm](https://codeforces.com/blog/entry/61203)
