# Lowest Common Ancestor (LCA)

## About

Given a tree $G$, and queries of the form $(v_1, v_2)$, for each query you need to find the lowest common ancestor (or least common ancestor), i.e. a vertex $v$ that lies on the path from the root to $v_1$ and the path from the root to $v_2$, and the vertex should be the lowest. In other words, the desired vertex $v$ is the first common ancestor of $v_1$ and v2. It is obvious that their lowest common ancestor lies on a shortest path from $v_$1 and $v_2$. Also, if $v_1$ is the ancestor of $v_2$, $v_1$ is their lowest common ancestor.

## Idea

### Precomputation

For each node, we will precompute the current node's ancestor above the current node, the current node's ancestor 2 nodes above, the current node's ancestor 4 nodes above, etc. increasing in powers of $2$, where $parent[i][j]$ is the $2 ^ j$-th ancestor above the current node $i$.

For each node $x \in G$, we will also remember the time of the first visit (when we perform $dfs(G, x)$) and the time we left the node (explored all the neighbors of node $x$). This will allows us to check if a node is an ancestor of another node in $\theta(1)$. Performing DFS on the tree can be more efficient using a [modified DFS](https://github.com/aaronhma/algorithms/blob/master/algorithms/trees/tree/README.md#tree-traversals).

### Answering Queries

We first check whether one node is the ancestor of the other. In this case, this node is already the LCA.

Otherwise, if $u$ is not the ancestor of $v$, and $v$ is not the ancestor of $u$, we climb the ancestors of $u$ until we find the highest (i.e. closest to the root) node, which is not an ancestor of $v$ (i.e. a node $x$, such that $x$ is not an ancestor of $v$, but $parent[x][0]$ is).

We will describe this process in more detail. Let $L = ceil(log(N))$. Suppose first that $i = L$. If $parent[u][i]$ is not an ancestor of $v$, then we can assign $u = parent[u][i]$ and decrement $i$. If $parent[u][i]$ is an ancestor, then we just decrement $i$. Clearly after doing this for all non-negative $i$ the node $u$ will be the desired node - i.e. $u$ is still not an ancestor of $v$, but $parent[u][0]$ is.

Now, obviously, the answer to LCA will be $parent[u][0]$ - i.e., the smallest node among the ancestors of the node $u$, which is also an ancestor of $v$.

So answering a LCA query will iterate $i$ from $ceil(log(N))$ to $0$ and checks in each iteration if one node is the ancestor of the other.


### Time Complexity

The idea described will need $\theta(n \ log \ n)$ for preprocessing and $\theta(log \ n)$ for each LCA query.
