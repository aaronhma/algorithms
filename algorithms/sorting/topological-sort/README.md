# Topological Sort [DFS](./topological-sort-dfs.cpp), [Kahn's Algorithm/BFS](./kahn-bfs.cpp)

## About

### Idea

A topological sort is an ordering of the nodes of a DAG (Directed Acyclic Graph - a directed graph with **NO CYCLES**) with the following criteria:

-   There must be node $a$ and node $b$.
-   There is a path between $a$ and $b$.
-   $a$ comes before $b$ in the topological sort.

**ℹ️ Tip: A topological sort of a graph can only be generated on a DAG (Directed Acyclic Graph - a directed graph with **NO CYCLES**).**

### Example

Suppose we have the following graph:

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/graph.png)

([Source](https://www.geeksforgeeks.org/topological-sorting/))

One topological sort of the graph is $[5, 4, 2, 3, 1, 0]$.

**ℹ️ Tip: A graph can have multiple topological sorts. As described [here](https://stackoverflow.com/questions/16638623/what-is-the-maximum-number-of-possible-topological-sorts-of-n-order-direct-acycl), the maximum number of possible topological sorts for a graph with $n$ vertices is $n!$.**

## Implementation

Both approaches have a $\theta(n + m)$ time complexity. The DFS code may use too much memory on dense graphs, though the code is short.

## Kahn's Algorithm (BFS)

We start by labeling each node's in-degree. For every node with a in-degree of $0$, we print out that node and decrease the in-degree of that nodes neighbor until we have printed out every single node in the DAG.

## Topolological Sort (DFS)

We run a DFS starting on every non-visited node $x$ from the set $[0, 1, ... n]$. After each DFS call (after marking the node $x$ as visited and running DFS on the neighbors of $x$), we add the node $x$ to an array $ans$. Once done running DFS starting on every non-visited node $x$ from the set $[0, 1, ... n]$, we reverse the array $ans$. The array $arr$ should now have one (of the many possible) topological sort of the DAG.
