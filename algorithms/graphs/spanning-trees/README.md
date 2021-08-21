# Spanning Tree

## About

A spanning tree is a subgraph of a graph. A spanning tree always have $n$ vertices and $n - 1$ edges and there can not be a cycle in a spanning tree. There can be many spanning trees in a graph. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

## [Minimum Spanning Trees (MST)](./minimum-spanning-tree.md)

A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, and undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree. The MST has $n$ vertices and $n - 1$ edges. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

## Kruskal's vs. Prim's

| Prim’s Algorithm                                                                                                                                                                                                                   | Kruskal’s Algorithm                                                                                                               |
| ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| It starts to build the Minimum Spanning Tree from any vertex in the graph.                                                                                                                                                         | It starts to build the Minimum Spanning Tree from the vertex carrying minimum weight in the graph.                                |
| It traverses one node more than one time to get the minimum distance.                                                                                                                                                              | It traverses one node only once.                                                                                                  |
| Prim’s algorithm has a time complexity of $\theta(v^2)$, $v$ being the number of vertices and can be improved up to $\theta(e + log v)$ using [Fibonacci heaps](https://www.geeksforgeeks.org/fibonacci-heap-set-1-introduction/). | Kruskal’s algorithm’s time complexity is $\theta(e \ log \ v)$, $v$ being the number of vertices.                                 |
| Prim’s algorithm gives connected component as well as it works only on connected graph.                                                                                                                                            | Kruskal’s algorithm can generate forest(disconnected components) at any instant as well as it can work on disconnected components |
| Prim’s algorithm runs faster in dense graphs.                                                                                                                                                                                      | Kruskal’s algorithm runs faster in sparse graphs.                                                                                 |

## Minimum Spanning Tree Applications

-   Network design

A classication application is to a problem like phone network design. You have a business with several offices; you want to lease phone lines to connect them up with each other; and the phone company charges different amounts of money to connect different pairs of cities. You want a set of lines that connects all your offices with a minimum total cost. The answer should be the weight of the minimum spanning tree, since you can always remove some edges and save money.

-   Approximation algorithms for NP-hard problems

A less obvious application is that the minimum spanning tree can be used to approximately solve the traveling salesman problem. A convenient formal way of defining this problem is to find the shortest path that visits each point at least once.
