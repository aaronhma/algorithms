# Tree Terminology & Formulas

## Terminology

### internal node

In a tree, any node that has at least one non-empty child is an internal node.


### leaf node

A leaf node is a node that does not have any children.

### acyclic

not forming a cycle

### forest

A disconnected acyclic graph (a forest) is a graph split into many parts that are trees.

![Image](https://www.tutorialspoint.com/graph_theory/images/forest.jpg)

---

## Formulas

1. For a tree with $n$ vertices, there are $n - 1$ edges.

2. There are $C_n$ possible Binary Search Trees and $C_n * n!$ possible Binary Trees for $n$ nodes, where $C_n$ is the [$n$-th Catalan number](https://www.geeksforgeeks.org/total-number-of-possible-binary-search-trees-with-n-keys/).

3. The degree of a tree is the total number of children a node has. The leaf of a tree has a degree of 0, as a leaf node does not have any children. The maximum degree of a tree is the maximum number of children any node in the tree has, and the minimum degree of a tree is the minimum number of children any node in the tree has.

4. Circuit Rank of a Undirected Graph

The Circuit Rank of a undirected graph is the minimum number of edges you need to remove from a graph in order to delete all of the graph's cycles, converting the graph into a tree or a forest. The formula for this is $\text{circuit rank} = \text{edges} - (\text{vertices} - 1)$.
