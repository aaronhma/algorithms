#include <bits/stdc++.h>

using namespace std;

#define ROW 9
#define COL 10

// To store matrix cell coordinates
struct Point {
  int x;
  int y;
};

// A Data Structure for queue used in bfs
struct queueNode {
  Point pt; // The coordinates of a cell
  int dist; // cell's minimum distance from the source
};

// check whether given cell (row, col) is a valid cell or not. within boundary
bool isValid(int row, int col) {
  // return true if row number and column number is in range
  return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// Used to get row and column numbers of 4 neighbours of a given cell
int rowNum[] = {-1, 0, 0, 1};
int colNum[] = {0, -1, 1, 0};

// function to find the shortest path between
// a given source cell to a destination cell.
int bfs(int mat[][COL], Point src, Point dest){
  // Create a queue for bfs
  queue<queueNode> queue;

  // construct a matrix to keep track of visited cells
  bool visited[ROW][COL];
  // initially, all cells are unvisited
  memset(visited, false, sizeof visited);
  // Mark the source cell as visited
  visited[src.x][src.y] = true;

  // Distance of source cell is 0
  queueNode s = {src, 0};
  queue.push(s); // Enqueue source cell

  // Do a bfs starting from source cell
  while (!queue.empty()) {
    queueNode top = queue.front();
    Point pt = top.pt;

    // If we have reached the destination cell, we are done
    if (pt.x == dest.x && pt.y == dest.y) return top.dist;

    // Otherwise dequeue the front cell in the queue and enqueue its adjacent cells
    queue.pop();

    for (int i = 0; i < 4; i++) {
      int row = pt.x + rowNum[i];
      int col = pt.y + colNum[i];

      // if adjacent cell is valid, has path and not visited yet, enqueue it.
      if (isValid(row, col) && mat[row][col] && !visited[row][col]) {
        // mark cell as visited and enqueue it
        visited[row][col] = true;

        // add node for exploration
        queueNode Adjcell = { {row, col}, top.dist + 1 };
        queue.push(Adjcell);
      }
    }
  }

  // Return -1 if destination cannot be reached
  return -1;
}

// Driver program to test above function
int main()
{
  int mat[ROW][COL] =
      {
          {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
          {1, 0, 1, 0, 1, 1, 1, 0, 1, 1},
          {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
          {0, 0, 0, 0, 1, 0, 0, 0, 0, 1},
          {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
          {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
          {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
          {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
          {1, 1, 0, 0, 0, 0, 1, 0, 0, 1} };

  Point source = {0, 0};
  Point dest = {3, 4};

  int dist = bfs(mat, source, dest);

  if (dist != -1)
    cout << "Shortest Path is " << dist << "\n"; // Shortest Path is 11
  else
    cout << "Shortest Path doesn't exist";

  return 0;
}
