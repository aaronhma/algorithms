# Spanning Tree

## About

A spanning tree is a subgraph of a graph. A spanning tree always have $n$ vertices and $n - 1$ edges and there can not be a cycle in a spanning tree. There can be many spanning trees in a graph. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

## Minimum Spanning Trees (MST)

A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected, and undirected graph is a spanning tree with a weight less than or equal to the weight of every other spanning tree. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

### How many edges does a minimum spanning tree has?

A minimum spanning tree has $v - 1$ edges where $v$ is the number of vertices in the given graph.

### Kruskal's Minimum Spanning Tree Algorithm (Greedy Algorithm)

1. Sort all the edges in non-decreasing order of their weight.
2. Pick the smallest edge. [Check if it forms a cycle (see union find algorithm)](https://www.geeksforgeeks.org/union-find/) with the spanning tree formed so far. If cycle is not formed, include this edge. Otherwise, we discard it.
3. Repeat step #2 until there are $v - 1$ edges in the spanning tree.

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Fig-0-300x139.jpg)

The graph contains $9$ vertices and $14$ edges. So, the minimum spanning tree formed will be having $(9 - 1) = 8$ edges.

After sorting all the edges in non-decreasing order of their weight, here's what we'll get:

```
Weight   Src    Dest
1         7      6
2         8      2
2         6      5
4         0      1
4         2      5
6         8      6
7         2      3
7         7      8
8         0      7
8         1      2
9         3      4
10        5      4
11        1      7
14        3      5
```

Now, we pick all the edges one by one from the sorted list of edges:

1. Pick edge $7-6$: No cycle is formed, include it.
2. Pick edge $8-2$: No cycle is formed, include it.

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Fig-2-241x300.jpg)

3. Pick edge $6-5$: No cycle is formed, include it.
4. Pick edge $0-1$: No cycle is formed, include it.
5. Pick edge $2-5$: No cycle is formed, include it.
6. Pick edge $8-6$: Since including this edge results in the cycle, discard it.
7. Pick edge $2-3$: No cycle is formed, include it.

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Fig-6-300x175.jpg)

8. Pick edge $7-8$: Since including this edge results in the cycle, discard it.
9. Pick edge $0-7$: No cycle is formed, include it.
10. Pick edge $1-2$: Since including this edge results in the cycle, discard it.
11. Pick edge $3-4$: No cycle is formed, include it.

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/fig8new.jpeg)

Now that we have $v - 1$ edges, the algorithm stops here.

The implementation for this algorithm can be found [here](https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/).

### Prim's Minimum Spanning Tree Algorithm (Greedy Algorithm)

1. Create a set $mst$ that keeps track of the vertices already included in the Minimum Spanning Tree.
2. Assign a key to all vertices in the input graph. Initialize all the keys to $INF$. Assign the key value as $0$ for the first vertex so that it is picked first.
3. As long as the set $mst$ doesn't include all the vertices in the graph:

-   Pick a vertex $u$ that is not in $mst$ and has the smallest key.
-   Include $u$ to $mst$.
-   Update the keys of all adjacent vertices of $u$. For every adjacent vertex $v$, if weight of edge $u-v$ is less than the previous key of $v$, update the key as weight of $u-v$.

The implementation for this algorithm can be found [here](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/).

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

A classication application is to a problem like phone network design. You have a business with several offices; you want to lease phone lines to connect them up with each other; and the phone company charges different amounts of money to connect different pairs of cities. You want a set of lines that connects all your offices with a minimum total cost. It should be a spanning tree, since if a network isn’t a tree you can always remove some edges and save money.

-   Approximation algorithms for NP-hard problems

A less obvious application is that the minimum spanning tree can be used to approximately solve the traveling salesman problem. A convenient formal way of defining this problem is to find the shortest path that visits each point at least once.
