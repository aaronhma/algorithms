# Queries on Dynamic Arrays

## Binary Indexed Trees (Fenwick Tree)

A binary indexed tree (or a Fenwick tree) is a dynamic variant of the prefix sum array. It provides two $\theta(log \ n)$ operations:

-   processing a range sum query
-   updating a value in the array

### Storing Data

Even though the name contains _tree_, we store a Binary Indexed Tree as an **array**.

### Sample Problem

Assume that $p(k)$ denotes the largest power of two that divides $k$. When storing a binary indexed tree as an array $tree$, the following formula can be used:

$$tree[k] = sum(k - p(k) + 1, k)$$

Each position $k$ contains the sum of the values in the range of the original array whose length is $p(k)$ and ends at position $k$. For example, since $p(6) = 2$, $tree[6] = sum(5, 6)$.

### Updating Values

Updating values on the array is not a simple task. After updating the values on the array, values in the binary indexed tree needs to be changed. Since each array element belongs to $\theta(log \ n)$ subranges, it suffices to update $\theta(log \ n)$ tree values.

### Implementation

Assume that $p(k)$ is equal to the following formula:

$$p(k) = k \ \& \sim k$$

1. $sum(1, k)$:

```cpp
int sum(int k) {
  int s = 0;
  while (k >= 1) {
    s += tree[k];
    k -= k&-k;
  }
  return s;
}
```

2. $arr[k] = arr[k] + x$

```cpp
void add(int k, int x) {
  while (k <= n) {
    tree[k] += x;
    k += k & -k;
  }
}
```

The time complexity of both of these functions is $\theta(log \ n)$ because the functions access $\theta(log \ n)$ values in the binary indexed tree, and each move to the next position takes $\theta(1)$ time.

---

The full code can be found [here](sum-queries-mutable.cpp).

## Segment Trees

A segment tree is a data structure which provides two $\theta(log \ n)$ time operations:

-   processing a range query
-   updating an array value

Also, segment trees support sum queries, minimum query, and many other queries.

A segment tree is basically a binary tree whose bottom level nodes correspond to the array elements, and the other nodes contain information needed for processing range queries. When using segment trees, assume that the size of the array is a power of $2$. If the size of the array is not a power of $2$, we will add more elements to the array.

Assume we have an array $arr$ where $arr = \{ 5, 8, 6, 3, 2, 7, 2, 6\}$. Then, the segment tree can be as shown:

![Segment Tree](../images/seg-tree/ex.png)

### Sum Queries

The segment tree shown above supports sum queries. When a segment tree supports sum queries, the value of each internal node is the sum of the corresponding array values, and it can be calculated as the sum of the values of its left and right child node. An example of this:

![Image](../images/seg-tree/sum-query.png)

### Updating Values

We can directly manipulate the array, then update all the nodes whose value depends on the updated value. This can be done by traversing the path from the updated array element to the top node and updating the nodes along the path. As an example, the image below sows the nodes that change when the value at position 5 changes. The path from bottom to top always consists of $\theta(log \ n)$ nodes, so each update changes $\theta(log \ n)$ nodes in the tree.

![Image](../images/seg-tree/nodes-change.png)
