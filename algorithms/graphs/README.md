# Graphs Algorithms

### Graphs Algorithms

| ☆   | Single Source Shortest Path (SSSP) Algorithms        | C++                                                                                                                                                          | Problems |
| --- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ | -------- |
|     | [Depth First Search](./depth-first-search/README.md) | [DFS](./depth-first-search/dfs.cpp), [Connected Comp](./depth-first-search/connected-components.cpp), [Max Island](./depth-first-search/max-island-size.cpp) |          |
|     | [Flood Fill](./flood-fill/README.md)                 | [C++](./flood-fill/flood-fill.cpp)                                                                                                                           |          |

### Single Source Shortest Path (SSSP) Algorithms

| ☆   | Single Source Shortest Path (SSSP) Algorithms            | C++                                                                                          | Features                                                    |
| --- | -------------------------------------------------------- | -------------------------------------------------------------------------------------------- | ----------------------------------------------------------- |
|     | [Bellman Ford](./bellman-ford/README.md)                 | [C++](./bellman-ford/bellman-ford.cpp)                                                       | Weighted graph, Work with positive/negative weight edges    |
|     | [Breadth First Search](./breadth-first-search/README.md) | [List](./breadth-first-search/bfs-list.cpp), [Vector](./breadth-first-search/bfs-vector.cpp) | Unweighted Graph, or Equal weighted graph                   |
|     | [Dijkstra](./dijkstra/README.md)                         | [C++](./dijkstra/dijkstra.cpp)                                                               | Weighted graph, Greedy Algorithms, NO negative weight edges |

### All Pairs Shortest Path Algorithms

| ☆   | Single Source Shortest Path (SSSP) Algorithms          | C++                                                            | Features                                       |
| --- | ------------------------------------------------------ | -------------------------------------------------------------- | ---------------------------------------------- |
|     | [Floyd Warshall](./floyd-warshall-algorithm/README.md) | [C++](./floyd-warshall-algorithm/floyd-warshall-algorithm.cpp) | Weighted graph, All pairs, DP based algorithms |

**Graphs Algorithms** can be used to model many types of relations and processes in physical, biological, social and information systems. Graphs are used to represent networks of communication, data organization, computational devices, the flow of computation, etc.

## Graphs

## Background

A graph is a non-linear data structure that consists of nodes and edges. Each item in a graph is called a node. Nodes are connected by edges.

![Image](https://www.geeksforgeeks.org/wp-content/uploads/undirectedgraph.png)

([Source](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/))

## Pros & Cons of Graphs

-   Pros:

    -   Represents links

-   Cons:

    -   Scaling challenges

## Graph Use Cases

In the real world, graphs can be applied to many industry problems, such as the social media "Who to follow?" problem or paths from the start to ending position in route planners.

## References

-   [Geeks For Geeks: Graphs](https://www.geeksforgeeks.org/graph-data-structure-and-algorithms/)
