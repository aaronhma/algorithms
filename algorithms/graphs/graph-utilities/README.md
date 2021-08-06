# Storing Graphs [(Adjacency List)](./adjacency-list.cpp), [(Adjacency Metrix)](./adjacency-matrix.cpp)

## Adjacency List

Undirected/Directed graph:

```cpp
vector<int> adj[N];

// node 1 is connected to node 2
adj[1].push_back(2);

// directed:
adj[2].push_back(1);
```

Weighted graph:

```cpp
vector<pair<int, int>> adj[N];

// node 1 -> node 2 has weight of 2
adj[1].push_back({2, 2});
```

Using adjacency lists, we can efficiently find the nodes which we can go to from the current node $x$:

```cpp
// neighbors of x:
for (auto i : adj[x]) {
  // process node i
}
```

## Adjacency Matrix

```cpp
int adj[N][N];
adj[1][2] = 1; // edge between node 1 -> node 2
```

## Edge List

Unweighted graph:

```cpp
vector<pair<int, int>> edges;

// edge between node 1 -> node 2
edges.push_back({1, 2});
```

Weighted graph: (**Note that older compilers may need to use `make_tuple(a, b, w)` instead of `{a, b, w}`.**)

```cpp
vector<tuple<int, int, int>> edges;

// (a, b, w)
// edge between node a -> node b with weight w
edges.push_back({1, 2, 5});
```
