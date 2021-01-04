# Queries on Static Arrays

## About

Queries on Static Arrays refers to a situation where our array is static (the array values are never updated between the queries). Because of this, we can first preprocess our array before answering queries so we can **efficiently** answer queries.

## Sum Queries

The first example of a sum queries is writing the `rangeSumQuery` function which returns the sum of an array $arr$ between the range $a$ and $b$. There are two options for the output of the answer:

- Case 1: $a == 0$

$$sum(a, b) = prefixSum[b]$$

- Case 2: $a \neq 0$

$$sum(a, b) = prefixSum[b] - prefixSum[a - 1]$$

---

You may have noticed the $prefixSum$ array. The $prefixSum$ array contains the sum of all elements from index $0$ to index $i$ for the array $arr$.

1. Add first element into the $prefixSum$ array:
   $$prefixSum[0] = arr[0]$$
2. Add the remaining elements:
   $$prefixSum[i] = prefixSum[i - 1] + arr[i]$$

## Minimum Queries

Assume that the function $min(a, b)$ returns the minimum value of the array $arr$ between the range $a$ and $b$. The easiest approach to this problem is to iterate from index $a$ to index $b$ and update the minimum as we go for a time complexity of around $\theta(k*n)$ time, where the constants are as follows:

- $k$: # of queries
- $n$: $b - a + 1$ (# of elements in the range $[a, b]$)

This approach works, but for higher values of $k$ and $n$, this approach is not feasible. A neat optimization trick we can do is preprocess the values first in $\theta(n^2)$ time, then answer the queries in $\theta(1)$
time.

To preprocess the data, we store the minimum number's index in a $(n + 1)(n + 1)$ matrix. Then, when we answer the queries, we just need to retrieve the index from the matrix in $\theta(1)$ time.
