# Minimum Queries

Assume that the function $min(a, b)$ returns the minimum value of the array $arr$ between the range $a$ and $b$. The easiest approach to this problem is to iterate from index $a$ to index $b$ and update the minimum as we go for a time complexity of around $\theta(k*n)$ time, where the constants are as follows:

- $k$: # of queries
- $n$: $b - a + 1$ (# of elements in the range $[a, b]$)

This approach works, but for higher values of $k$ and $n$, this approach is not feasible. A neat optimization trick we can do is preprocess the values first in $\theta(n^2)$ time, then answer the queries in $\theta(1)$
time.

To preprocess the data, we store the minimum number's index in a $(n + 1)(n + 1)$ matrix. Then, when we answer the queries, we just need to retrieve the index from the matrix in $\theta(1)$ time.
