# 0-1 BFS [(C++)](./bfs-binary.cpp)

## About

Given a weighted graph $G$ with $n$ nodes and $m$ edges, with each edge weight $0$ or $1$, find the shortest path in $\theta(m)$.

## Idea

The idea is simple: We write Dijkstra's, except instead of using a priority queue, we use a double-ended queue ([`deque`](https://github.com/aaronhma/algorithms/blob/master/cpp-stl/other-structures.md#deque)). If the weight is $0$, we add the node to the front of the `deque`, otherwise we add the node to the end of the `deque`.
