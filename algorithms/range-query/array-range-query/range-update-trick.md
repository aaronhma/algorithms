# Range Update Trick [(C++)](./range-update-trick.cpp)

## About

Assume that we have an array $arr = \{ 2, -7, 10, 3, -1, 19, -20, 23, 17 \}$ and we have the following queries:

1. $$update(2, 6, 5)$$
2. $$update(3, 7, 2)$$
3. $$update(1, 5, -1)$$

We can efficiently update our array in $\theta(n)$ time for all of our queries if we already know our queries beforehand.

## The Trick

Now that we have our queries, we create an array $b$. For every query, we perform the following steps:

1. At index $query[i].start$, we add $query[i].val$.
2. At index $query[i].end + 1$, we subtract $query[i].val$.

After this, we compute the prefix sum of the array $b$. We store this in the array $prefixSum$. Now, we can update the array with the following formula:

$$arr[i] += prefixSum[i]$$
