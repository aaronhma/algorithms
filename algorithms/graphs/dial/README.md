# Dial's Algorithm (Optimized Dijkstra's For Graphs with a Small Range of Weights)

## About

Given a graph $G$ of size $n$ and $m$ with the maximum possible weight $w$. Find the shortest path between the source node to all other nodes in $\theta(m + nw)$.

**WARNING: Dial's Algorithm does NOT work on negative weights.**

We create a $2$D bucket array $buckets$ of size $nw + 1$ (to account for $1$-based indexing vertices), where $buckets[i]$ represents that the **current** smallest distance from the source node to node $j$ in $buckets[i][j]$ is $i$. We place the node $i$ in a smaller bucket if we can minimize the distance. We keep minimizing the distance until all the nodes have the smallest distance in the $distance$ array.
