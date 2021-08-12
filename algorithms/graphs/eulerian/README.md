# Eulerian Tour/Path/Cycle/Circuit

## Eularian Tour/Path

The motivation of the Eularian Tour is derived from the famous Königsberg bridge problem solved by the Swiss mathematician Leonhard Euler in 1736. The 18th century German city of Königsberg was situated on the river Pregel. Within a park built on the banks of the river, there were two islands joined by seven bridges. The puzzle asks whether it is possible to take a tour through the park, crossing each bridge only once.

An exhaustive search requires starting at every possible point and traversing all the possible paths from that point - an $\theta(n!)$ problem. However Euler showed that an Eulerian path existed **if and only if**:

-   it is possible to go from any vertex to any other by following the edges (the graph must be connected) and
-   every vertex must have an even number of edges connected to it, with at most two exceptions (which constitute the starting and ending points).

It is easy to see that these are necessary conditions: to complete the tour, one needs to enter and leave every point except the start and end points. Thus, we now have a $\theta(n)$ problem to determine whether a path exists.

![Image](https://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/GraphAlgor/Gifs/konigsberg.gif)

In order to get a solution, we need to transform the map into a graph in which the nodes represent the "dry land" points and the edges represent the bridges.

![Image](https://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/GraphAlgor/Gifs/euler.gif)

We can now easily see that the Bridges of Königsberg does not have a solution, though the graph has a [Hamiltonian path](https://www.udemy.com/course/graph-theory/learn/lecture/18582536#overview).

> **Key Idea:** A Euler tour/path of a connected, directed graph $G$ is a path in the graph that passes through every edge exactly once, though vertices can be visited more than once.

> **NOTE:** If a graph has a Euler tour/path, the graph is called semi-Eulerian.

## Eularian Cycle/Circuit

> **Key Idea:** A Euler Cycle/Circuit of a connected, directed graph $G$ is a path in the graph that passes through every edge exactly once, though vertices can be visited more than once and starts and ends on the same vertex.

> **NOTE:** If a graph has a Euler Cycle/Circuit, the graph is called Eulerian.
