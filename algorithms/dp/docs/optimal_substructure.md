# Optimal Substructure Property in DP

## The Property

A problem has the optimal substructure property if the optimal solution of a problem can be optained of the optimal solutions of its subproblems.

## Example

Assume we have the following graph:

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/LongestPath.gif)

If I ask you what is the **shortest** path from node $q$ to node $t$, assuming no cycles, the answer can be $q$ → $r$ → $t$ or $q$ → $s$ → $t$, both of which is the shortest path. We can then restate the problem as $shortestPath(q, r) + shortestPath(r, t)$ or $shortestPath(q, s) + shortestPath(s, t)$.

If I ask you what is the **longest** distance from node $q$ to node $t$, assuming no cycles, the answer can be $q$ → $r$ → $t$ or $q$ → $s$ → $t$, both of which is the longest path. Unfortunately, unlike the shortest path problem, the longest path problem does **not** have the optimal substructure property. For example, the path $q$ → $r$ → $t$ is not $longestPath(q, r) + longestPath(r, t)$ as the longest path from $q$ to $r$ is $q$ → $s$ → $t$ → $r$, which from the start is already **not** the correct answer, so adding the second part of the "answer" will still **not** be the correct answer.
