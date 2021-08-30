#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<int>> vvi;

#define sz(x) (int)x.size()

// 8-sided direction vector
const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

struct Point {
  int x, y, parent_x = -1, parent_y = -1;

  // g = movement cost from starting cell to current cell
  // h = estimated movement remaining
  // f = g + h
  double f = DBL_MAX, g = DBL_MAX, h = DBL_MAX;

  Point() {}
  Point(int X, int Y) : x(X), y(Y) {}

  bool isValid(int &n, int &m) {
    return x >= 0 && x < n && y >= 0 && y < m;
  }

  bool operator==(const Point &other) {
    return x == other.x && y == other.y;
  }

  void update(int px, int py) {
    parent_x = px, parent_y = py;
  }

  void update(int px, int py, double nf, double ng, double nh) {
    parent_x = px, parent_y = py, f = nf, g = ng, h = nh;
  }
};

// Calculate the heuristic using the distance formula (see https://www.google.com/search?q=distance+formula)
double calculateHValue(int &new_x, int &new_y, Point &dest)
{
  return sqrt((new_x - dest.x) * (new_x - dest.x) + (new_y - dest.y) * (new_y - dest.y));
}

void tracePath(vector<vector<Point>> &cellDetails, Point &dest)
{
  int x = dest.x, y = dest.y;

  stack<Point> path;

  while (!(cellDetails[x][y].parent_x == x && cellDetails[x][y].parent_y == y))
  {
    path.push({x, y});
    int tmp_x = x;
    x = cellDetails[x][y].parent_x;
    y = cellDetails[tmp_x][y].parent_y;
  }

  path.push({x, y});

  while (!path.empty()) {
    Point p = path.top();
    path.pop();
    cout << "-> (" << p.x << ", " << p.y << ") ";
  }

  cout << "\n";
}

// NOTE: Use `double` instead of `float` for higher precision
void aStarSearch(vvi &arr, Point &start, Point &end, int n, int m)
{
  // Base case 1: If the starting and ending vertices isn't valid, return
  if (!(start.isValid(n, m) && end.isValid(n, m) && arr[start.x][start.y] && arr[end.x][end.y]))
  {
    cout << "No path exists.\n";
    return;
  }

  // Base case 2: If the starting and ending vertices is the same, return
  if (start == end)
  {
    cout << "Path exists.\n(" << start.x << ", " << start.y << ")\n";
    return;
  }

  vector<vector<bool>> visited(n, vector<bool>(m)); // Visited array
  vector<vector<Point>> points(n, vector<Point>(m)); // Details of cell (i, j)

  // Update starting cell value
  points[start.x][start.y].update(start.x, start.y, 0.0, 0.0, 0.0);

  // {f, {i, j}}
  // f = g + h
  queue<pair<double, Point>> Q;
  Q.push({0.0, start});

  while (!Q.empty())
  {
    // Take top node from the queue
    Point node = Q.front().second;
    Q.pop();

    int i = node.x, j = node.y;
    visited[i][j] = 1; // Mark current node as visited

    // Check through neighbors
    for (int k = 0; k < 8; k++)
    {
      // New neighbor index
      Point neighbor(i + dx[k], j + dy[k]);

      // Make sure this neighbor is valid
      if (neighbor.isValid(n, m) && arr[neighbor.x][neighbor.y])
      {
        // If we've reached the destination, backtrack to re-trace the path and return.
        if (neighbor.x == end.x && neighbor.y == end.y)
        {
          cout << "Path exists.\nThe path from (" << start.x << ", " << start.y << ") to (" << end.x << ", " << end.y << ") is:\n";
          points[neighbor.x][neighbor.y].update(i, j);
          tracePath(points, end);
          return;
        }

        // If we haven't visited this neighbor, visit it.
        if (!visited[neighbor.x][neighbor.y])
        {
          // Diagonal case
          double val = (dx[k] != 0 && dy[k] != 0) ? 1.414 : 1.0;

          // Variables to store the new g, h, and f value
          double gNew = points[i][j].g + val;          // movement cost from starting cell to current cell
          double hNew = calculateHValue(neighbor.x, neighbor.y, end); // estimated movement remaining
          double fNew = gNew + hNew;                        // f = g + h

          // If the new f is less than the previous f, select this cell for further exploration.
          if (points[neighbor.x][neighbor.y].f > fNew)
          {
            // Add this cell to queue for exploration
            Q.push({fNew, {neighbor.x, neighbor.y}});

            // Update the details of this cell
            points[neighbor.x][neighbor.y].update(i, j, fNew, gNew, hNew);
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
  Point start(8, 0), end(0, 0);

  aStarSearch(arr, start, end, n, m);

  return 0;
}
