# Topological Sort

## About

A topological sort is an ordering of the nodes of a graph with the following criteria:

-   There must be node $a$ and node $b$.
-   There is a path between $a$ and $b$.
-   $a$ comes before $b$ in the topological sort.

## Example

Suppose we have the following graph:

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/graph.png)

([Source](https://www.geeksforgeeks.org/topological-sorting/))

Some possible topological sorts are shown:

**ℹ️ Tip: A graph can have multiple topological sorts. As described [here](https://stackoverflow.com/questions/16638623/what-is-the-maximum-number-of-possible-topological-sorts-of-n-order-direct-acycl), the maximum number of possible topological sorts for a graph with $n$ vertices is $n!$.**

## Implementation

The implementation can be found [here](topological-sort.cpp).
