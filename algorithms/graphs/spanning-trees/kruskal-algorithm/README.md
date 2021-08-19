# Kruskal's Algorithm [(C++)](./kruskal.cpp)

## About

### **[What's a Minimum Spanning Tree(MST)?](https://en.wikipedia.org/wiki/Minimum_spanning_tree)**

Given a weighted, undirected graph $G$ with $n$ vertices and $m$ edges. You want to find a spanning tree of this graph which connects all vertices and has the least weight (i.e. the sum of weights of edges is minimal). A spanning tree is a set of edges such that any vertex can reach any other by exactly one simple path. The spanning tree with the least weight is called a minimum spanning tree.

In the left image you can see a weighted undirected graph, and in the right image you can see the corresponding minimum spanning tree.

![Image](https://raw.githubusercontent.com/e-maxx-eng/e-maxx-eng/master/img/MST_before.png) ![Image](https://raw.githubusercontent.com/e-maxx-eng/e-maxx-eng/master/img/MST_after.png)

## Idea

Kruskal's algorithm initially places all the nodes of the original graph isolated from each other, to form a forest of single node trees, and then gradually merges these trees, combining at each iteration any two of all the trees with some edge of the original graph. Before the execution of the algorithm, all edges are sorted by weight (in non-decreasing order). Then begins the process of unification: pick all edges from the first to the last (in sorted order), and if the ends of the currently picked edge belong to different subtrees, these subtrees are combined, and the edge is added to the answer. After iterating through all the edges, all the vertices will belong to the same sub-tree, and we will get the answer.

For connecting the subtrees and checking if the subtrees are connected, we will use the [Disjoint Set](https://github.com/aaronhma/algorithms/blob/master/data-structure/non-linear/set/disjoint-set.md) data structure.

Kruskal's algorithm runs in $\theta(m \ log \ n)$ and is most optimal on sparse graphs and also works on disconnected components.
