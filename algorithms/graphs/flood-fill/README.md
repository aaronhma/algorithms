# Flood-fill Algorithm

## About

Flood fill is an algorithm mainly used to determine a bounded area connected to a given node in a multi-dimensional array. It is a close resemblance to the bucket tool in paint programs.

The most approached implementation of the algorithm is a stack-based [recursive](https://github.com/aaronhma/algorithms-notes/blob/master/techniques/recursion/about.md) function, and that’s what we’re gonna talk about next.

### How does it work?

The problem is pretty simple and usually follows these steps:

1. Take the position of the starting point.
2. Decide wether you want to go in 4 directions (N, S, W, E) or 8 directions (N, S, W, E, NW, NE, SW, SE).
3. Choose a replacement color and a target color.
4. Travel in those directions.
5. If the tile you land on is a target, reaplce it with the chosen color.
6. Repeat 4 and 5 until you’ve been everywhere within the boundaries.

([Source](https://www.freecodecamp.org/news/flood-fill-algorithm-explained/))

## Example: Islands

### The Problem

You are given a $n * m$ matrix of .s (land) and #s (water). An island is formed by connecting adjacent land cells horizontally or vertically and is surrounded by water. Find the number of islands and the maximum cells of one island.

### The Solution

We start by assuming that we have the following data:

-   $arr$: $n * m$ character matrix containing the data
-   $visited$ - $n * m$ boolean matrix
-   $dx$ - Direction vector for $x$ index
-   $dy$ - Another direction vector for $y$ index

The logic for the rest of the solution is presented below:

-   Create island count and max island size variables
-   Iterate through $arr$:
    -   Check that $i$ and $j$ index is valid
        -   Update island count
        -   Start flood fill
        -   Update max island size
-   Print island count and max island size

Click [here](flood-fill.cpp) for the implementation.
