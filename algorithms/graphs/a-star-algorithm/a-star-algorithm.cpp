#include <bits/stdc++.h>

using namespace std;

// 8-sided direction vector (with Euclidean distances)
const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
// 4-sided direction vector (with Manhattan distances)
// const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

struct Point
{
  int x, y, parent_x = -1, parent_y = -1;
  bool visited = false;

  // g = movement cost from starting cell to current cell
  // h = estimated movement remaining
  // f = g + h
  double f = DBL_MAX, g = DBL_MAX;

  Point() {}
  Point(int X, int Y) : x(X), y(Y) {}

  bool isValid(int &n, int &m)
  {
    return x >= 0 && x < n && y >= 0 && y < m;
  }

  bool operator==(const Point &other)
  {
    return x == other.x && y == other.y;
  }

  void update(int px, int py)
  {
    parent_x = px, parent_y = py;
  }

  void update(int px, int py, double nf, double ng)
  {
    parent_x = px, parent_y = py, f = nf, g = ng;
  }
};

// Calculate the heuristic using the Euclidean Distance formula (see https://wikipedia.org/wiki/Euclidean_distance#Two_dimensions)
double calculateHValue(int &new_x, int &new_y, Point &dest)
{
  // calculating Euclidean distance
  return sqrt((new_x - dest.x) * (new_x - dest.x) + (new_y - dest.y) * (new_y - dest.y));
  // calculating Manhattan distances
  // return abs(new_x - dest.x) + abs(new_y - dest.y);
}

void tracePath(vector<vector<Point>> &points, Point &dest)
{
  int x = dest.x, y = dest.y;

  stack<Point> path;

  while (!(points[x][y].parent_x == x && points[x][y].parent_y == y))
  {
    path.push({x, y});
    int tmp_x = x;
    x = points[x][y].parent_x;
    y = points[tmp_x][y].parent_y;
  }

  path.push({x, y});

  while (!path.empty())
  {
    Point p = path.top();
    path.pop();
    cout << "-> (" << p.x << ", " << p.y << ") ";
  }

  cout << "\n";
}

// NOTE: Use `double` instead of `float` for higher precision
void aStarSearch(vector<vector<int>> &arr, Point &start, Point &end, int n, int m)
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

  vector<vector<Point>> points(n, vector<Point>(m)); // Details of cell (i, j)

  // Update starting cell value
  points[start.x][start.y].update(start.x, start.y, 0.0, 0.0);

  queue<Point> Q;
  Q.push(start);

  while (!Q.empty())
  {
    // Take top node from the queue
    Point node = Q.front();
    Q.pop();

    int i = node.x, j = node.y;
    node.visited = 1; // Mark current node as visited

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
        if (!neighbor.visited)
        {
          // Diagonal case
          double val = (dx[k] != 0 && dy[k] != 0) ? 1.414 : 1.0;

          // Variables to store the new g, h, and f value
          double gNew = points[i][j].g + val;                                // movement cost from starting cell to current cell
          double fNew = gNew + calculateHValue(neighbor.x, neighbor.y, end); // f = g + h (estimated movement remaining)

          // If the new f is less than the previous f, select this cell for further exploration.
          if (points[neighbor.x][neighbor.y].f > fNew)
          {
            // Add this cell to queue for exploration
            Q.push(neighbor);

            // Update the details of this cell
            points[neighbor.x][neighbor.y].update(i, j, fNew, gNew);
          }
        }
      }
    }
  }

  cout << "No path exists.\n";
}

int main()
{
  vector<vector<int>> arr{{1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                          {1, 1, 1, 0, 1, 1, 1, 0, 1, 1},
                          {1, 1, 1, 0, 1, 1, 0, 1, 0, 1},
                          {0, 0, 1, 0, 1, 0, 0, 0, 0, 1},
                          {1, 1, 1, 0, 1, 1, 1, 0, 1, 0},
                          {1, 0, 1, 1, 1, 1, 0, 1, 0, 0},
                          {1, 0, 0, 0, 0, 1, 0, 0, 0, 1},
                          {1, 0, 1, 1, 1, 1, 0, 1, 1, 1},
                          {1, 1, 1, 0, 0, 0, 1, 0, 0, 1}};

  int n = (int)arr.size(), m = (int)arr[0].size();
  Point start(8, 0), end(0, 0);

  aStarSearch(arr, start, end, n, m);

  return 0;
}
