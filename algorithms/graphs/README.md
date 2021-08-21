# Graphs Algorithms

### Graphs Algorithms

| ☆   | Graphs Algorithms/Utilities                          | C++                                                                                                                                                                                        | Problems | Resources                                                              |
| --- | ---------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ | -------- | ---------------------------------------------------------------------- |
|     | [Depth First Search](./depth-first-search/README.md) | [DFS](./depth-first-search/dfs.cpp), [Connected Comp](./depth-first-search/connected-components.cpp), [Max Island](./depth-first-search/max-island-size.cpp)                               |          | [cp-algo](https://cp-algorithms.web.app/graph/depth-first-search.html) |
|     | [Flood Fill](./flood-fill/README.md)                 | [C++](./flood-fill/flood-fill.cpp)                                                                                                                                                         |          |                                                                        |
|     | [Graph Utilities](./graph-utilities/README.md)       | [Adj List](./graph-utilities/adjacency-list.cpp), [Adj Matrix](./graph-utilities/adjacency-matrix.cpp), [Weighted Adj List](algorithms/graphs/graph-utilities/weighted-adjacency-list.cpp) |          |                                                                        |

### Single Source Shortest Path (SSSP) Algorithms

| ☆   | Shortest path from one node to all nodes                 | C++                                                                                          | Features                                                                                                                                         | Resources                                                                                                                                                                                                                                |
| --- | -------------------------------------------------------- | -------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [0-1 BFS](./0-1-bfs-binary/README.md)                    | [C++](./0-1-bfs-binary/bfs-binary.cpp)                                                       | Binary Weighted graph, either 0 or 1, 0 or X.                                                                                                    | [cp-algo](https://cp-algorithms.web.app/graph/01_bfs.html)                                                                                                                                                                               |
|     | [Bellman Ford](./bellman-ford/README.md)                 | [C++](./bellman-ford/bellman-ford.cpp)                                                       | Weighted graph, Not Greedy solution, DP algorithms, Work with positive/negative weight edges                                                     | [cp-algo](https://cp-algorithms.web.app/graph/bellman_ford.html)                                                                                                                                                                         |
|     | [Breadth First Search](./breadth-first-search/README.md) | [List](./breadth-first-search/bfs-list.cpp), [Vector](./breadth-first-search/bfs-vector.cpp) | Unweighted Graph, or Equal weighted graph                                                                                                        | [cp-algo](https://cp-algorithms.web.app/graph/breadth-first-search.html)                                                                                                                                                                 |
|     | [D´Esopo-Pape algorithm](./desopo-pape/README.md)        | [C++](./desopo-pape/desopo-pape.cpp)                                                         | Faster than Dijkstra and Bellman-Ford. Similar to [0-1 BFS](./0-1-bfs-binary/README.md), Work for negative weight edges, NOT for negative cycles | [cp-algo](https://cp-algorithms.web.app/graph/desopo_pape.html)                                                                                                                                                                          |
|     | [Dial](./dial/README.md)                                 | [C++](./dial/dial.cpp)                                                                       |                                                                                                                                                  | [cp-algo](https://cp-algorithms.web.app/graph/01_bfs.html)                                                                                                                                                                               |
|     | [Dijkstra](./dijkstra/README.md)                         | [C++](./dijkstra/dijkstra.cpp)                                                               | Weighted graph, Greedy Algorithms, NO negative weight edges                                                                                      | [cp-algo 1](https://cp-algorithms.web.app/graph/dijkstra.html), [cp-algo 2](https://cp-algorithms.web.app/graph/dijkstra_sparse.html), [techie delight](https://www.techiedelight.com/single-source-shortest-paths-dijkstras-algorithm/) |
|     | [Multi Source BFS](./multi-source-bfs/README.md)         | [C++](./multi-source-bfs/multi-source-bfs.cpp)                                               |                                                                                                                                                  |                                                                                                                                                                                                                                          |

### All Pairs Shortest Path Algorithms

| ☆   | Shortest path between all pairs of vertices            | C++                                                            | Features                                                                                                                                                     | Resources                                                                                                                                                                                |
| --- | ------------------------------------------------------ | -------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
|     | [Floyd Warshall](./floyd-warshall-algorithm/README.md) | [C++](./floyd-warshall-algorithm/floyd-warshall-algorithm.cpp) | Weighted graph, All pairs of vertices, DP based algorithms (O(n^3)), Work with positive/negative weight edges, can detect negative cycles with an extra step | [cp-algo](https://cp-algorithms.web.app/graph/all-pair-shortest-path-floyd-warshall.html) [Techie Delight](https://www.techiedelight.com/pairs-shortest-paths-floyd-warshall-algorithm/) |

### Shortest path in a Maze

| ☆   | Algorithms                                   | C++                                            | Features                               | Resources                                                                 |
| --- | -------------------------------------------- | ---------------------------------------------- | -------------------------------------- | ------------------------------------------------------------------------- |
|     | [A\* (a-star)](./a-star-algorithm/README.md) | [C++](./a-star-algorithm/a-star-algorithm.cpp) |                                        |                                                                           |
|     | [Lee](./lee/README.md)                       | [C++](./lee/README.md/lee/README.md.cpp)       | based on BFS, Slow and use lots memory | [1](https://www.techiedelight.com/lee-algorithm-shortest-path-in-a-maze/) |

### Cycle

| ☆   | Algorithms                       | C++                                            | Features | Resources                                                                           |
| --- | -------------------------------- | ---------------------------------------------- | -------- | ----------------------------------------------------------------------------------- |
|     | [Cycle](./cycle/README.md)       | [Negative Weight](./cycle/negative-weight.cpp) |          | [cp-algo](https://cp-algorithms.web.app/graph/finding-negative-cycle-in-graph.html) |
|     | [Eulerian](./eulerian/README.md) | TODO: In progress                              |          | [cp-algo](https://cp-algorithms.web.app/graph/euler_path.html)                      |

### [Minimum Spanning Trees](./spanning-trees/README.md)

| ☆   | Algorithms                                                                                    | C++                                                                                   | Features                                                          | Resources                                                             |
| --- | --------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------- | ----------------------------------------------------------------- | --------------------------------------------------------------------- |
|     | [Kruskal](./spanning-trees/kruskal-algorithm/README.md)                                       | [C++](./spanning-trees/kruskal-algorithm/kruskal.cpp)                                 |                                                                   |                                                                       |
|     | [Kirchhoff Theorem: # of spanning trees](./spanning-trees/number-of-spanning-trees/README.md) | [C++](./spanning-trees/number-of-spanning-trees/spanning-tree-not-complete-graph.cpp) | TODO: Determinant of matrix not working                           | [cp-algo](https://cp-algorithms.web.app/graph/kirchhoff-theorem.html) |
|     | [Prim](./spanning-trees/prim-algorithm/README.md)                                             | [C++](./spanning-trees/prim-algorithm/prim.cpp)                                       | Weighted undirected graph, Greedy Algorithm, Use a priority Queue |                                                                       |

### [Lowest Common Ancestor](https://www.youtube.com/watch?v=X5pp8L_lypw)

| ☆   | Algorithms             | C++                             | Features                                                         | Resources |
| --- | ---------------------- | ------------------------------- | ---------------------------------------------------------------- | --------- |
|     | [LCA](./lca/README.md) | [Binary Lifting](./lca/lca.cpp) | Two pointers, Euler Tour, Binary lifting, TODO: Code not working |           |

## Graphs

**Graphs Algorithms** can be used to model many types of relations and processes in physical, biological, social and information systems. Graphs are used to represent networks of communication, data organization, computational devices, the flow of computation, etc.

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
