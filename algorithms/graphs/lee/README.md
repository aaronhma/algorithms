# Lee's Algorithm [(C++)](./lee.cpp)

## About

[Go to OJ](https://cses.fi/problemset/task/1193)

**(Easier Version)** You are given a map of a labyrinth, and your task is to find a path from start to end. You can walk left, right, up and down. Print $YES$/$NO$ is we can find a path from the starting cell to the ending cell. If there is a path, print the minimum number of steps you must take in order to reach the path.

**Input:**

```
5 8
########
#.A#...#
#.##.#B#
#......#
########
```

**Output:**

```
YES
9
```

## Lee's Algorithm

We start from the starting cell and perform a $4$-sided BFS (Top, Left, Bottom, Right) on the current node's neighbors until we reach the ending cell or all the cells have been visited. Unfortunately, Lee's Algorithm is slow, as the time and space complexity is $\theta(nm)$.
