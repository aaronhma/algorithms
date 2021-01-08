# Bellman-Ford Algorithm

## About

The Bellman-Ford Algorithm finds the shortest path from a starting node to all nodes of a graph. The algorithm can process all graphs, except for graphs does not contain a negative cycle. If it does, the algorithm can detect this.

The algorithm keeps track of distances from the starting node to all nodes of the
graph. Initially, the distance to the starting node is $0$ and the distance to any other node
is $\infty$. The algorithm then reduces the distances by finding edges that shorten
the paths until it is not possible to reduce any distance.

Figure $7.18$ shows how the Bellman–Ford algorithm processes a graph. First, the
algorithm reduces distances using the edges $1 → 2, 1 → 3$ and $1 → 4$, then using
the edges $2 → 5$ and $3 → 4$, and finally using the edge $4 → 5$. After this, no edge
can be used to reduce distances, which means that the distances are final.

![Figure 7.18](../images/bellman-ford/fig_7_18.png)
Figure $7.18$

### Implementation

```cpp
// Infinity
const INF = 1000001; // 10^6 + 1

// array of n nodes containing distance from node x to node i
vector<int> distance(n + 1);

// Set distance from node x to all the other nodes as infinity
for (int i = 1; i <= n; i++) {
  distance[i] = INF;
}

// Distance from node x to itself is 0
distance[x] = 0;

// Go through each edge of the graph
for (int i = 1; i <= n-1; i++) {
  // Update distance
  for (auto e : edges) {
    int a, b, w;

    // Efficient way to unpack tuples
    // a = e.a
    // b = e.b
    // w = e.w
    tie(a, b, w) = e;

    // Reduce the distance
    distance[b] = min(distance[b], distance[a]+w);
  }
}
```
