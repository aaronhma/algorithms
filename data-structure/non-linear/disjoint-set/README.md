# Disjoint Set (Union-Find)

## About

Consider a social media network where people can be friends and there are the following operations:

1. Add a friend, $x$ becomes a friend of $y$ (vice versa)
2. Check if $x$ is a friend of $y$ (vice versa)

We can use a **disjoint set**. We have an array $parent$ where $parent[i]$ represents the parent of the $i$-th item.

From our social media network example, to add a friend we perform $union(x, y)$, and to check if $x$ is friends with $y$, we perform $find(x)$

In Competitive Programming, we use the disjiont set data structure to store multiple sets/arrays in a single array.

## Building an Efficient Data Structure

### Storing Elements

![Image](https://raw.githubusercontent.com/e-maxx-eng/e-maxx-eng/master/img/DSU_example.png)

In the beginning, every element starts as a single set, therefore each vertex is its own tree. Then we combine the set containing the element 1 and the set containing the element 2. Then we combine the set containing the element 3 and the set containing the element 4. And in the last step, we combine the set containing the element 1 and the set containing the element 3.

For the implementation, this means that we will have to maintain an array `parent` that stores a reference to its immediate ancestor in the tree.

### Naive Implementation

```cpp
void make_set(int v) {
    parent[v] = v;
}

// Find representative (parent) of the node v
int find_set(int v) {
    if (v == parent[v])
        return v;
    return find_set(parent[v]);
}

// Merge the nodes of set a and set b
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);

    if (a != b)
        parent[b] = a; // Update parent of set b to set a
}
```

### Optimization 1: Path Compression

This optimization is designed for speeding up `find_set`.

If we call `find_set(v)` for some vertex $v$, we actually find the representative $p$ for all vertices that we visit on the path between $v$ and the actual representative $p$. The trick is to make the paths for all those nodes shorter, by setting the parent of each visited vertex directly to $p$.

You can see the operation in the following image. On the left there is a tree, and on the right side there is the compressed tree after calling `find_set(7)`, which shortens the paths for the visited nodes $7$, $5$, $3$ and $2$.

![Image](https://raw.githubusercontent.com/e-maxx-eng/e-maxx-eng/master/img/DSU_path_compression.png)

```cpp
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

```

The simple implementation does what was intended: first find the representative of the set (root vertex), and then in the process of stack unwinding the visited nodes are attached directly to the representative.

This simple modification of the operation already achieves the time complexity $\theta(log \ n)$ per call on average. There is a second modification in the `union` operation to make this function even faster.

### Optimization 2: Union by Size/Rank

#### Union by Size

```cpp
void make_set(int v) {
    parent[v] = v;
    size[v] = 1;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
}
```

#### Union by Rank (Depth of Trees)

```cpp
void make_set(int v) {
    parent[v] = v;
    rank[v] = 0;
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    // Attach the tree with the lower rank to the one with the bigger rank.
    if (a != b) {
        if (rank[a] < rank[b])
            swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
```

Both optimizations are equivalent in terms of time and space complexity.

### Time Complexity

The time complexity is $\theta(log \ n)$ for `union` and `find_set`.

## Applications

1. Finding connected components in a image
2. Check if $a$ and $b$ are connected in the same connected component in a graph
