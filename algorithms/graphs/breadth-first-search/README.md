# Breadth-First Search (BFS) [(BFS list)](./bfs-list.cpp), [(BFS Vector)](./bfs-vector.cpp), [(Multi Source BFS)](./multi-source-bfs.cpp)

## About

Breadth-First Search (BFS) is an algorithm that explores a tree or a graph. It explores the values first in the root, then the root's children, and the root's children's children, etc.

The algorithm takes as input an unweighted graph and the id of the source vertex $s$. The input graph can be directed or undirected, it does not matter to the algorithm.

The algorithm can be understood as a fire spreading on the graph: at the zeroth step only the source $s$ is on fire. At each step, the fire burning at each vertex spreads to all of its neighbors. In one iteration of the algorithm, the "ring of fire" is expanded in width by one unit (hence the name of the algorithm).

The algorithm works in $\theta(n + m)$ time, where $n$ is the number of vertices and $m$ is the number of edges.

Here's how it would work on this tree:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_root.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/bfs))

After looking at the root, we look at the root's children:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_first_level.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/bfs))

Then the root's children's children:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_second_level.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/bfs))

And the final layer:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_third_level.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/bfs))

This occurs until we reach the end or find the element we are looking for.

**NOTE: BFS uses more memory than DFS. [Learn more](https://stackoverflow.com/a/23478282)**
