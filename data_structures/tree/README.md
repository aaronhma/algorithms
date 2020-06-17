# Tree

## Background

A tree is a non-linear data structure that organizes values hierarchically through linking together nodes (each entry in a tree). Each linkage has 0 or more child nodes.

![Image](https://www.interviewcake.com/images/svgs/trees__animal_classes.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

## Traversing a Tree

### Breadth-First Search (BFS)

In Breadth-First Search (BFS), we explore all the nodes level by level. Here's a tree with nodes labeled in the order they'd be visited with BFS:

![Image](https://www.interviewcake.com/images/svgs/trees__bfs.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

level 1: root: 1
level 2: 2, 3
level 3: 4, 5, 6, 7
level 4: 8, 9

### Depth-First Search (DFS)

On the other hand, in Depth-First Search (DFS), we go as deep as possible, prefering the left elements first over the right elements, then moving back up again and moving to explore the right elements.

![Image](https://www.interviewcake.com/images/svgs/trees__dfs.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/tree?))

## Real-World Applications

- Operating system filesystems - showing all your folders with files

- Comments - Comments, replies, etc.

- Family tree - grandparents, parents, children

## References

- [Interview Cake: Tree](https://www.interviewcake.com/concept/cpp/tree?)
