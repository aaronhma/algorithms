# Number of Spanning Trees

## Case 1: The Graph is a Complete Graph

If a graph is a complete graph with $n$ vertices, then the total number of spanning trees is $n^{(n-2)}$. (Counting the number of different labeled trees with $n$ nodes uses Cayley's formula, which is the formula used here)

## Case 2: The Graph is **NOT** a Complete Graph (Kirchoff's Theorem)

1. Create a adjacency matrix $mat$ for the graph.
2. Create a [degree matrix](https://en.wikipedia.org/wiki/Degree_matrix) $deg$ for the graph.
3. Compute the matrix $res$ where $res = mat - deg$.
4. Delete the first column and first row from $res$.
5. Compute the [determinant of $res$ in $\theta(n^3)$](https://www.geeksforgeeks.org/determinant-of-a-matrix/). The result is the number of spanning trees that can be formed.

### TODO: Determinant code is not working (See https://www.geeksforgeeks.org/determinant-of-a-matrix/)

### **[View a Video Explanation](https://www.youtube.com/watch?v=ZEOozqMQ5sM)**
