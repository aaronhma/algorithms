#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define f first
#define s second
#define sz(x) (int)x.size()

// 8-sided direction vector
const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

struct Cell {
  int parent_i = -1, parent_j = -1; // Parent of current cell
  // g = movement cost from starting cell to current cell
  // h = estimated movement remaining
  // f = g + h
  double f = DBL_MAX, g = DBL_MAX, h = DBL_MAX;
};

// Calculate the heuristic using the distance formula (see https://www.google.com/search?q=distance+formula)
double calculateHValue(int &new_x, int &new_y, pii &dest) {
  return ((double)sqrt(
      (new_x - dest.first) * (new_x - dest.first) + (new_y - dest.second) * (new_y - dest.second)));
}

void tracePath(vector<vector<Cell>> &cellDetails, pii &dest) {
  int x = dest.first, y = dest.second;

  stack<pii> path;

  while (!(cellDetails[x][y].parent_i == x && cellDetails[x][y].parent_j == y)) {
    path.push({x, y});
    int tmp_x = x;
    x = cellDetails[x][y].parent_i;
    y = cellDetails[tmp_x][y].parent_j;
  }

  path.push({x, y});

  while (!path.empty()) {
    pii p = path.top();
    path.pop();
    cout << "-> (" << p.f << ", " << p.s << ") ";
  }

  cout << "\n";
}

// NOTE: Use `double` instead of `float` for higher precision
void aStarSearch(vvi &arr, pii &start, pii &end, int n, int m) {
  // Base case 1: If the starting and ending vertices isn't valid, return
  if (!(start.f >= 0 && start.s >= 0 && end.f >= 0 && end.s >= 0 && start.f < n && start.s < m && end.f < n && end.s < m && arr[start.f][start.s] && arr[end.f][end.s])) {
    cout << "No path exists.\n";
    return;
  }

  // Base case 2: If the starting and ending vertices is the same, return
  if (start == end) {
    cout << "Path exists.\n(" << start.f << ", " << start.s << ")\n";
    return;
  }

  vector<vector<bool>> visited(n, vector<bool>(m)); // Visited array
  vector<vector<Cell>> cellDetails(n, vector<Cell>(m)); // Details of cell (i, j)

  // Update starting cell value
  cellDetails[start.f][start.s].f = 0.0;
  cellDetails[start.f][start.s].g = 0.0;
  cellDetails[start.f][start.s].h = 0.0;
  cellDetails[start.f][start.s].parent_i = start.f;
  cellDetails[start.f][start.s].parent_j = start.s;

  // {f, {i, j}}
  // f = g + h
  queue<pair<double, pii>> Q;
  Q.push({0.0, {start.f, start.s}});

  while (!Q.empty()) {
    // Take top node from the queue
    pair<double, pii> node = Q.front();
    Q.pop();

    int i = node.s.f, j = node.s.s;
    visited[i][j] = 1; // Mark current node as visited

    double gNew, hNew, fNew; // Variables to store the new g, h, and f value

    // Check through neighbors
    for (int k = 0; k < 8; k++) {
      // New neighbor index
      int new_x = i + dx[k], new_y = j + dy[k];

      // Make sure this neighbor is valid
      if (new_x >= 0 && new_y >= 0 && new_x < n && new_y < m && arr[new_x][new_y]) {
        // If we've reached the destination, backtrack to re-trace the path and return.
        if (new_x == end.f && new_y == end.s) {
          cout << "Path exists.\nThe path from (" << start.f << ", " << start.s << ") to (" << end.f << ", " << end.s << ") is:\n";
          cellDetails[new_x][new_y].parent_i = i;
          cellDetails[new_x][new_y].parent_j = j;
          tracePath(cellDetails, end);
          return;
        }

        // If we haven't visited this neighbor, visit it.
        if (!visited[new_x][new_y]) {
          double val = (dx[k] != 0 && dy[k] != 0) ? 1.414 : 1.0;
          gNew = cellDetails[i][j].g + val; // movement cost from starting cell to current cell
          hNew = calculateHValue(new_x, new_y, end); // estimated movement remaining
          fNew = gNew + hNew; // f = g + h

          // If the new f is less than the previous f, select this cell for further exploration.
          if (cellDetails[new_x][new_y].f > fNew) {
            // Add this cell to queue for exploration
            Q.push({fNew, {new_x, new_y}});

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

  cout << "No path exists.\n";
}

int main()
{
  vvi arr{{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
          {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
          {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
          {0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
          {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
          {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
          {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
          {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
          {1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

  int n = sz(arr), m = sz(arr[0]);
  pii start {8, 0}, end {0, 0};

  aStarSearch(arr, start, end, n, m);

  return 0;
}
