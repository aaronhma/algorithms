// A C++ Program to implement A* Search Algorithm
#include <bits/stdc++.h>
using namespace std;

#define ROW 9
#define COL 10

// Creating a shortcut for int, int pair type
typedef pair<int, int> Pair;

// Creating a shortcut for pair<int, pair<int, int>> type
typedef pair<double, pair<int, int>> pPair;

const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

// A structure to hold the necessary parameters
struct cell {
  // Search Space — A collection of nodes, like all board positions of a board game
  // Row and Column index of its parent
  // Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1
  int parent_i, parent_j;
  // Cost — Numerical value (say distance, time, or financial expense) for the path from a node to another node.
  // f = g + h
  // f(n) — lowest cost in the neighboring node n
  // g(n) — the exact cost of the path from the starting node to any node n
  // h(n) — the heuristic estimated cost from node n to the goal node.
  double f, g, h;
};

// Check whether given cell (row, col) is a valid cell or not.
bool isValid(int row, int col) {
  // Returns true if row number and column number is in range
  return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

// Check whether the given cell is blocked or not
bool isUnBlocked(int grid[][COL], int row, int col) {
  return grid[row][col] == 1; // 1 is allowed, 0 is blocked
}

// Check whether destination cell has been reached or not
bool isDestination(int row, int col, Pair dest) {
  return row == dest.first && col == dest.second;
}

// A Utility Function to calculate the 'h' heuristics.
double calculateHValue(int row, int col, Pair dest) {
  // Return using the distance formula
  return ((double)sqrt(
      (row - dest.first) * (row - dest.first) + (col - dest.second) * (col - dest.second)));
}

// Trace the path from the source to destination
void tracePath(cell cellDetails[][COL], Pair dest) {
  printf("\nThe Path is ");
  int row = dest.first;
  int col = dest.second;

  stack<Pair> Path;

  while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col)) {
    Path.push(make_pair(row, col));
    int temp_row = cellDetails[row][col].parent_i;
    int temp_col = cellDetails[row][col].parent_j;
    row = temp_row;
    col = temp_col;
  }

  Path.push(make_pair(row, col));

  while (!Path.empty()) {
    pair<int, int> p = Path.top();
    Path.pop();
    printf("-> (%d,%d) ", p.first, p.second);
  }

  return;
}

// Find the shortest path between a given source cell to a destination cell
void aStarSearch(int grid[][COL], Pair src, Pair dest) {
  // Cell boundary check: If the source is out of range
  if (isValid(src.first, src.second) == false) return;
  // Cell boundary check: If the destination is out of range
  if (isValid(dest.first, dest.second) == false) return;

  // If cell is allowed or blocked: Either the source or the destination is blocked
  if (isUnBlocked(grid, src.first, src.second) == false || isUnBlocked(grid, dest.first, dest.second) == false) return;

  // Check if the destination cell is the same as source cell
  if (isDestination(src.first, src.second, dest) == true) return;

  // A boolean 2D array: default to false, which means that no cell has been included yet
  bool visited[ROW][COL];
  memset(visited, false, sizeof(visited));

  // Declare a 2D array of structure to hold the details of that cell
  cell cellDetails[ROW][COL];

  int i, j;

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COL; j++) {
      cellDetails[i][j].f = FLT_MAX;
      cellDetails[i][j].g = FLT_MAX;
      cellDetails[i][j].h = FLT_MAX;
      cellDetails[i][j].parent_i = -1;
      cellDetails[i][j].parent_j = -1;
    }
  }

  // Initialising the parameters of the starting node
  i = src.first, j = src.second;
  cellDetails[i][j].f = 0.0;
  cellDetails[i][j].g = 0.0;
  cellDetails[i][j].h = 0.0;
  cellDetails[i][j].parent_i = i;
  cellDetails[i][j].parent_j = j;

  /*
	Create an open list having information as <f, <i, j>>
	where f = g + h,
	and i, j are the row and column index of that cell
	Note that 0 <= i <= ROW-1 & 0 <= j <= COL-1 */
  set<pPair> Q;

  // Put the starting cell on the open list and set its 'f' as 0
  Q.insert(make_pair(0.0, make_pair(i, j)));

  // Set this boolean value as false as initially the destination is not reached.
  bool foundDest = false;

  while (!Q.empty()) {
    pPair p = *Q.begin();
    // Remove this vertex from the Q
    Q.erase(Q.begin());

    // Add this vertex to the closed list
    i = p.second.first;
    j = p.second.second;
    visited[i][j] = true;

    // Generating all the 8 successor of this cell To store the 'g', 'h' and 'f' of the 8 successors
    double gNew, hNew, fNew;

    for (int k = 0; k < 8; k++) {
      int new_x = i + dx[k], new_y = j + dy[k];
      // cout << "(" << dx[k] << ", " << dy[k] << ") - " << new_x << " : " << new_y << "\n";

      // Only process this cell if this is a valid one
      if (isValid(new_x, new_y)) {
        // If the destination cell is the same as the current successor
        if (isDestination(new_x, new_y, dest)) {
          // Set the Parent of the destination cell
          cellDetails[new_x][new_y].parent_i = i;
          cellDetails[new_x][new_y].parent_j = j;
          printf("The destination cell is found\n");
          tracePath(cellDetails, dest);
          foundDest = true;
          return;
        }

        // If the successor is already on the closed list or if it is blocked, then ignore it. Else do the following
        else if (visited[new_x][new_y] == false && isUnBlocked(grid, new_x, new_y)) {
          // If it is diagonal direction, cost is more than direct neighbour
          int val = (dx[k] != 0 && dy[k] != 0) ? 1.414 : 1.0;
          gNew = cellDetails[i][j].g + val;
          hNew = calculateHValue(new_x, new_y, dest);
          fNew = gNew + hNew;

          // If it isn’t on the Q, add it to the Q.
          // Make the current square the parent of this square.
          // Record the f, g, and h costs of the square cell
          //			 OR
          // If it is on the Q already, check to see if this path to that square is
          // better, using 'f' cost as the measure.
          if (cellDetails[new_x][new_y].f == FLT_MAX || cellDetails[new_x][new_y].f > fNew) {
            Q.insert(make_pair(fNew, make_pair(new_x, new_y)));

            // Update the details of this cell
            cellDetails[new_x][new_y].f = fNew;
            cellDetails[new_x][new_y].g = gNew;
            cellDetails[new_x][new_y].h = hNew;
            cellDetails[new_x][new_y].parent_i = i;
            cellDetails[new_x][new_y].parent_j = j;
          }
        }
      }
    }
  }

  // When the destination cell is not found and the Q is empty, then we conclude that we failed to reach the destination cell.
  // This may happen when the there is no way to destination cell (due to blockages)
  if (foundDest == false)
    printf("Failed to find the Destination Cell\n");

  return;
}

int main() {
  /* Description of the Grid
	1--> The cell is not blocked
	0--> The cell is blocked */
  int grid[ROW][COL] = {{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                        {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
                        {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
                        {0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                        {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
                        {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
                        {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                        {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                        {1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

  Pair start = {8, 0};
  Pair end = {0, 0};

  aStarSearch(grid, start, end);

  return (0);
}
