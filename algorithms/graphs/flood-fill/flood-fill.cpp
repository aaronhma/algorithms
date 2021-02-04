#include <bits/stdc++.h>

using namespace std;

/**
 * Checks if (row, column) is valid:
 * - (row, column) is within (n, m)
 * - (row, column) is an island
 * - (row, column) has not been visited
*/
bool valid(int row, int column, int n, int m, vector<vector<char>> &arr, vector<vector<bool>> &visited)
{
  // (row, column) is within (n, m)
  if ((row < 0 || row >= n) || (column < 0 || column >= m))
    return false;

  // (row, column) is an island
  if (arr[row][column] == '#')
    return false;

  // (row, column) has not been visited
  if (visited[row][column])
    return false;

  // If all checks passed, (row, column) is valid
  return true;
}

/**
 * Repeatedly fill all valid cells using recursion
*/
void floodFill(int row, int column, int n, int m, int &islandSize, vector<vector<char>> &arr, vector<int> &dx, vector<int> &dy, vector<vector<bool>> &visited)
{
  // Add one to the size of island
  islandSize++;

  // Mark cell as visited
  visited[row][column] = true;

  // Iterate through all neighbors
  for (int i = 0; i < 4; i++)
  {
    // Check if the new neighbor is valid
    if (valid(row + dx[i], column + dy[i], n, m, arr, visited))
    {
      // If the neighbor is valid, explore that cell's neighbor
      floodFill(row + dx[i], column + dy[i], n, m, islandSize, arr, dx, dy, visited);
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Islands array
  vector<vector<char>> arr = {
      {'.', '#', '.', '#', '#', '.'},
      {'#', '.', '.', '#', '.', '.'},
      {'#', '.', '#', '.', '.', '#'},
      {'#', '.', '.', '#', '#', '.'},
      {'.', '.', '#', '.', '.', '.'}};

  // n * m array
  // islands: # of islands
  // maxCells: maximum island size
  int n = arr.size(), m = arr[0].size(), islands = 0, maxCells = 0;

  // Direction vectors: neighbors index
  // Up, Down, Left, Right
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};

  // Vector to store if we've visited arr[row][column]
  vector<vector<bool>> visited(n, vector<bool>(m));

  // Row index
  for (int i = 0; i < n; i++)
  {
    // Column index
    for (int j = 0; j < m; j++)
    {
      // If (i, j) is a valid cell...
      if (valid(i, j, n, m, arr, visited))
      {
        // We found a new island!
        islands++;

        // Calculate island size
        int islandSize = 0;

        // Call flood-fill algorithm to get island size
        floodFill(i, j, n, m, islandSize, arr, dx, dy, visited);

        // Update max island size
        maxCells = max(maxCells, islandSize);
      }
    }
  }

  cout << "There are " << islands << " islands and the biggest island has a size of " << maxCells << " cells.\n"; // There are 4 islands and the biggest island has a size of 8 cells.

  return 0;
}
