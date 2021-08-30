# Prim's Algorithm [(C++)](./prim.cpp)

## About

### **[What's a Minimum Spanning Tree(MST)?](https://en.wikipedia.org/wiki/Minimum_spanning_tree)**

Given a weighted, undirected graph $G$ with $n$ vertices and $m$ edges. You want to find a spanning tree of this graph which connects all vertices and has the least weight (i.e. the sum of weights of edges is minimal). A spanning tree is a set of edges such that any vertex can reach any other by exactly one simple path. The spanning tree with the least weight is called a minimum spanning tree.

![Steps](../images/prims_steps.png)

It is easy to see that any spanning tree will only contain $n - 1$ edges, thus there are no cycles.

## The Idea (For Sparse Graphs)

We use the idea of Dijkstra's for an optimal time complexity of $\theta(m \ log \ n)$. Everytime we pop out the node with the minimum weight, add the weight to the answer to get the sum of the weights in the MST.

## Applications

There are $n$ cities and for each pair of cities we are given the cost to build a road between them (or we know that is physically impossible to build a road between them). We have to build roads, such that we can get from each city to every other city, and the cost for building all roads is minimal.
