# Multi-Source Shortest Path

## About

[Go to OJ](https://leetcode.com/problems/01-matrix/)

Given an $n * m$ binary matrix $mat$, where each cell is $0$ or $1$, return the distance of the nearest $0$ for each cell.

The distance between two adjacent cells is $1$.

## Approach 1: Brute Force $\color{red}{TLE}$

We iterate for every $(i, j)$ in the matrix $mat$. If $mat[i][j] = 0$, then $ans[i][j] = 0$, as the shortest distance between $mat[i][j]$ and $mat[i][j]$ is itself. Otherwise, we iterate through the entire matrix $(x, y)$ and check that $mat[x][y] = 1$. If $mat[x][y] = 1$, then $ans[i][j] = min(ans[i][j], \text{minimum distance between} (i, j) \text{ and } (x, y))$. To compute the distance, we use the [Manhattan distance](https://xlinux.nist.gov/dads/HTML/manhattanDistance.html) ($|x_1 - x_2| + |y_1 - y_2|$ for $(x_1, y_1)$ and $(x_2, y_2)$).

Unfortunately, the time complexity for this approach is $\theta(n^2m^2)$, which is not feasible for large matrices.

## Approach 2: BFS $\color{#0fa}{AC}$

For each node equal to $0$, we perform a BFS to all other nodes that have not been visited and update the distance.
