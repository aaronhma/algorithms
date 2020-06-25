# Breadth-First Search (BFS)

## About

Breadth-First Search (BFS) is an algorithm that explores a tree or a graph. It explores the values first in the root, then the root's children, and the root's children's children, etc.

Here's how it would work on this tree:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_root.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/bfs))

After looking at the root, we look at the root's children:

![Image](https://www.interviewcake.com/images/svgs/breadth_first_search_first_level.svg?bust=206)

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

**NOTE: BFS uses more memory than [DFS](../dfs/README.md).**
