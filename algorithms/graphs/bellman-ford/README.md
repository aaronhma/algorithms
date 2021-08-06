# Bellman-Ford Algorithm

## About

Suppose that we are given a weighted directed graph $G$ with $n$ vertices and $m$ edges, and some specified vertex $v$. You want to find the length of the shortest path from the vertex $v$ to every other vertex.

Unlike the Dijkstra algorithm, this algorithm can also be applied to graphs containing negative weight edges. However, if the graph contains a negative cycle, then, clearly, the shortest path to some vertices may not exist (due to the fact that the weight of the shortest path must be equal to $- \infty$); however, this algorithm can be modified to signal the presence of a cycle of negative weight, or even deduce this cycle.

The algorithm keeps track of distances from the starting node to all nodes of the
graph. Initially, the distance to the starting node is $0$ and the distance to any other node
is $\infty$. The algorithm then reduces the distances by finding edges that shorten
the paths until it is not possible to reduce any distance.

Figure $7.18$ shows how the Bellman–Ford algorithm processes a graph. First, the
algorithm reduces distances using the edges $1 → 2, 1 → 3$ and $1 → 4$, then using
the edges $2 → 5$ and $3 → 4$, and finally using the edge $4 → 5$. After this, no edge
can be used to reduce distances, which means that the distances are final.

### **[Video Explanation](https://www.youtube.com/watch?v=obWXjtg0L64)**

![Figure 7.18](../images/bellman-ford/fig_7_18.png)

## Implementation

Unlike many other graph algorithms, for the Bellman-Ford algorithm, it is more convenient to represent the graph using an array of [tuples](https://github.com/aaronhma/algorithms/blob/master/cpp-stl/tuples.md).

### The Simplest Implementation

The constant $INF$ denotes the number "infinity" ($\infty$) - $INF$ should be greater than the sum of all the weights.

```cpp
// array of n nodes containing distance from node x to node i
// Set distance from node x to all other nodes as infinity
vector<int> distance(n + 1, INF);

// Distance from node x to itself is 0
distance[x] = 0;

// Go through each edge of the graph
for (int i = 1; i <= n - 1; i++)
{
  // Update distance array
  for (auto e : edges)
  {
    int a, b, w;

    // Efficient way to unpack tuples
    // a = e.a
    // b = e.b
    // w = e.w
    tie(a, b, w) = e;

    // Reduce the distance
    distance[b] = min(distance[b], distance[a] + w);
  }
}
```

### A Better Implementation

The algorithm can be improved by adding a check: if we're on iteration $i$ and for this iteration no work is done, iterations $i + 1$, $i + 2$, $...$, $n - 1$, $n$ will also not reduce the distances, so we can exit immediately. (This does not improve the worst-case complexity, but still significantly accelerates the speed of the algorithm.)

```cpp
// Go through each edge of the graph
for (;;)
{
  bool any = 0;

  // Update distance array
  for (auto e : edges)
  {
    int a, b, w;

    // Efficient way to unpack tuples
    // a = e.a
    // b = e.b
    // w = e.w
    tie(a, b, w) = e;

    int new_dist = distance[a] + w;

    // Reduce the distance
    if (new_dist < distance[b]) {
      distance[b] = min(distance[b], new_dist);
      any = 1;
    }
  }

  if (!any) break;
}
```
