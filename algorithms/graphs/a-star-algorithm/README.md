# A\* Algorithm

## About

Given the following array, and starting and ending positions, check if it is possible to move from the starting to end position, and if possible, print the shortest path between the two positions.

```cpp
vector<int> arr {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
{1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
{1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
{0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
{1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
{1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
{1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
{1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

pair<int, int> start {8, 0}, end {0, 0};
```

**NOTE: You can only move on $1$ cells! $0$ cells are "obstacle cells".**

## Idea

### Properties of A* Algorithm

The A* Algorithm achieves **optimality** and **completeness**, two valuable properties of search algorithms.

> When a search algorithm has the property of **optimality**, it means it is guaranteed to find the **best possible solution**.

> When a search algorithm has the property of **completeness**, it means that if a solution to a given problem exists, the algorithm is **guaranteed to find it**.

### $f = g + h$

One important aspect of A* is $f = g + h$. The $f$, $g$, and $h$ variables are in our `Cell` class and get calculated every time we create a new node. Quickly, I’ll go over what these variables mean.
* $f$ is the total cost of the node ($f = g + h$).
* $g$ is the distance between the current node and the start node.
* $h$ is the heuristic — estimated distance from the current node to the end node. In the provided code, the heuristic used is [the Distance Formula](https://www.google.com/search?q=distance+formula).

At each step, we pick the smallest $f$ among all the valid neighbors among cell $(i, j)$.

![Image](https://miro.medium.com/max/600/1*iSt-urlSaXDABqhXX6xveQ.png)

## A\* vs. Dijkstra

**Dijkstra's Algorithm:**

![Image](https://miro.medium.com/max/420/1*2jRCHqAbTCY7W7oG5ntMOQ.gif)

Taking a look at Dijkstra’s algorithm, we see that it just keeps searching. It has no idea which node is "best", so it calculates paths for them all.

**A\* Algorithm:**

![Image](https://miro.medium.com/max/420/1*HppvOLfDxXqQRFn0Cv2dHQ.gif)

With A\*, we see that once we get past the obstacle, the algorithm prioritizes the node with the lowest $f$ and the "best" chance of reaching the end.
