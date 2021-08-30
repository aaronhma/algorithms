# Randomized Heap ([Wikipedia](https://en.wikipedia.org/wiki/Randomized_meldable_heap))

## About

A randomized heap is a heap that, through using randomization, allows to perform all operations in expected logarithmic time.

A **min heap** is a binary tree in which the value of each vertex is less than or equal to the values of its children. Thus the minimum of the tree is always in the root vertex.

A max heap can be defined in a similar way: by replacing less with greater in the `merge` function.

The default operations of a heap are:

-   Adding a value
-   Extracting the minimum
-   Removing the minimum
-   Merging two heaps (without deleting duplicates)
-   Removing an arbitrary element (if its position in the tree is known)

A randomized heap can perform all these operations (on average) $\theta(log \ n)$ time (only the extracting the minimum operation is $\theta(1)$) with a very simple implementation.

## A Note on Randomness

["Why use `rng` instead of `rand`?" by $\text{\color{black}n\color{red}{eal}}$](https://codeforces.com/blog/entry/61587)

```cpp
// 32-bit:
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// 64-bit:
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
```

## Heap-ordered [Binary Tree](https://en.wikipedia.org/wiki/Binary_tree)

The heap-ordered [binary tree](https://en.wikipedia.org/wiki/Binary_tree) structure has a $value$ and the $left$ and $right$ children of the node.

```cpp
struct Tree
{
  int val;
  Tree *left, *right;

  Tree() {}
  Tree(int V) : val(V), left(NULL), right(NULL) {}
  Tree(int V, Tree *L, Tree *R) : val(V), left(L), right(R) {}
};
```

## Merging

It is not difficult to see, that all operations can be reduced to a single one: **merging two heaps into one**. Indeed, adding a new value to the heap is equivalent to merging the heap with a heap consisting of a single vertex with that value. Finding a minimum doesn't require any operation at all - the minimum is simply the value at the root. Removing the minimum is equivalent to the result of merging the left and right children of the root vertex. And removing an arbitrary element is similar. We merge the children of the vertex and replace the vertex with the result of the merge.

So we actually only need to implement the operation of merging two heaps. All other operations are trivially reduced to this operation.

Let two heaps $T_1$ and $T_2$ be given. It is clear that the root of each of these heaps contains its minimum. So the root of the resulting heap will be the minimum of these two values. So we compare both values, and use the smaller one as the new root. Now we have to combine the children of the selected vertex with the remaining heap. For this we select one of the children, and merge it with the remaining heap. Thus we again have the operation of merging two heaps. Sooner of later this process will end (the number of such steps is limited by the sum of the heights of the two heaps).

To achieve $\theta(log \ n)$ on average, we need to specify a method for choosing one of the two children so that the average path length is logarithmic. It is not difficult to guess, that we will make this decision **randomly** (thus a **randomized heap**).

## Adding Elements to the Heap

Adding elements to the heap is simple: we merge the new node $x$ to the current heap in $\theta(log \ n)$.

## Removing the Min/Max from the Heap

Removing elements to the heap is simple: we merge the left and right child of the top of the heap in $\theta(log \ n)$.

## Getting the Min/Max from the Heap

The top of the heap is the min/max. We only need to take the top of the heap (`heap->val`). This can be performed in $\theta(1)$.

**NOTE: An extra check must be done to make sure the heap is not empty. If the heap is empty, the min/max of the heap is $0$.**
