# Depth-First Search (DFS) [(DFS)](./dfs.cpp), [(Connected components)](./connected-components.cpp)

## About

The idea behind DFS is to go as deep into the graph as possible, and backtrack once you are at a vertex without any unvisited adjacent vertices.

It is very easy to describe / implement the algorithm recursively: We start the search at one vertex. After visiting a vertex, we further perform a DFS for each adjacent vertex that we haven't visited before. This way we visit all vertices that are reachable from the starting vertex.

Depth First Search finds the lexicographical first path in the graph from a source vertex $u$ to each vertex. Depth First Search will also find the shortest paths in a tree (because there only exists one simple path), but on general graphs this is not the case.

The algorithm works in $\theta(n + m)$ time where $n$ is the number of vertices and $m$ is the number of edges.

![Image](https://www.interviewcake.com/images/svgs/depth_first_search_root.svg?bust=206)

![Image](https://www.interviewcake.com/images/svgs/depth_first_search_dead_end_one.svg?bust=206)

![Image](https://www.interviewcake.com/images/svgs/depth_first_search_dead_end_two.svg?bust=206)

![Image](https://www.interviewcake.com/images/svgs/depth_first_search_dead_end_three.svg?bust=206)

![Image](https://www.interviewcake.com/images/svgs/depth_first_search_dead_end_four.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/dfs))

## Classification of edges of a graph

We can classify the edges using the entry and exit time of the end nodes $u$ and $v$ of the edges $(u,v)$. These classifications are often used for problems like finding bridges and finding articulation points.

We perform a DFS and classify the encountered edges using the following rules:

If $v$ is not visited:

-   Tree Edge - If $v$ is visited after $u$ then edge $(u,v)$ is called a tree edge. In other words, if $v$ is visited for the first time and $u$ is currently being visited then $(u,v)$ is called tree edge. These edges form a DFS tree and hence the name tree edges.

If $v$ is visited before $u$:

-   Back edges - If $v$ is an ancestor of $u$, then the edge $(u,v)$ is a back edge. $v$ is an ancestor exactly if we already entered $v$, but not exited it yet. Back edges complete a cycle as there is a path from ancestor $v$ to descendant $u$ (in the recursion of DFS) and an edge from descendant $u$ to ancestor $v$ (back edge), thus a cycle is formed. Cycles can be detected using back edges.

-   Forward Edges - If $v$ is a descendant of $u$, then edge $(u,v)$ is a forward edge. In other words, if we already visited and exited $v$ and $entry[u]<entry[v]$ then the edge $(u,v)$ forms a forward edge.

-   Cross Edges: if $v$ is neither an ancestor or descendant of $u$, then edge $(u,v)$ is a cross edge. In other words, if we already visited and exited $v$ and $entry[u]>entry[v]$ then $(u,v)$ is a cross edge.

Note: Forward edges and cross edges only exist in directed graphs.

## Computing Entry & Exit Times

It might be useful to also compute the entry and exit times and vertex color. We will color all vertices with the color $0$, if we haven't visited them, with the color $1$ if we visited them, and with the color $2$, if we already exited the vertex.

Here is a generic implementation that additionally computes those:

```cpp
vector<vector<int>> adj; // graph represented as an adjacency list
int n; // number of vertices

vector<int> color;

vector<int> time_in, time_out;
int dfs_timer = 0;

void dfs(int v) {
    time_in[v] = dfs_timer++;
    color[v] = 1;
    for (int u : adj[v])
        if (color[u] == 0)
            dfs(u);
    color[v] = 2;
    time_out[v] = dfs_timer++;
}
```

## Finding All Connected Components

Given an undirected graph $G$ with $n$ nodes and $m$ edges, we are required to find in it all the connected components, i.e, several groups of vertices such that within a group each vertex can be reached from another and no path exists between different groups.

To solve the problem, we can use Depth First Search or Breadth First Search.

In fact, we will be doing a series of rounds of DFS: The first round will start from first node and all the nodes in the first connected component will be traversed (found). Then we find the first unvisited node of the remaining nodes, and run Depth First Search on it, thus finding a second connected component. And so on, until all the nodes are visited.

The total asymptotic running time of this algorithm is $\theta(n + m)$. This algorithm will not run on the same vertex twice, which means that each edge will be seen exactly twice (at one end and at the other end).
