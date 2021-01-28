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
