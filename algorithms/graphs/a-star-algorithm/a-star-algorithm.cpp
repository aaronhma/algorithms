#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<str> vstr;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define f first
#define s second
#define sz(x) (int)x.size()

const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1}, dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

struct Cell {
  int parent_i, parent_j;
  double f, g, h;
};

double calculateHValue(int row, int col, pii dest) {
  // Return using the distance formula
  return ((double)sqrt(
      (row - dest.first) * (row - dest.first) + (col - dest.second) * (col - dest.second)));
}

void tracePath(vector<vector<Cell>> &cellDetails, pii dest) {
  printf("\nThe Path is ");
  int row = dest.first;
  int col = dest.second;

  stack<pii> Path;

  while (!(cellDetails[row][col].parent_i == row && cellDetails[row][col].parent_j == col)) {
    Path.push(make_pair(row, col));
    int temp_row = cellDetails[row][col].parent_i;
    int temp_col = cellDetails[row][col].parent_j;
    row = temp_row;
    col = temp_col;
  }

  Path.push({row, col});

  while (!Path.empty()) {
    pair<int, int> p = Path.top();
    Path.pop();
    printf("-> (%d,%d) ", p.first, p.second);
  }

  return;
}

void aStarSearch(vvi &arr, pii &start, pii &end, int n, int m) {
  if (!(start.f >= 0 && start.s >= 0 && end.f >= 0 && end.s >= 0 && start.f < n && start.s < m && end.f < n && end.s < m && arr[start.f][start.s])) return;

  vector<vb> visited(n, vb(m));
  vector<vector<Cell>> cellDetails(n, vector<Cell>(m));

  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      cellDetails[i][j].f = FLT_MAX;
      cellDetails[i][j].g = FLT_MAX;
      cellDetails[i][j].h = FLT_MAX;
      cellDetails[i][j].parent_i = -1;
      cellDetails[i][j].parent_j = -1;
    }
  }

  i = start.f, j = start.s;
  cellDetails[i][j].f = 0.0;
  cellDetails[i][j].g = 0.0;
  cellDetails[i][j].h = 0.0;
  cellDetails[i][j].parent_i = i;
  cellDetails[i][j].parent_j = j;

  queue<pair<float, pii>> Q;
  Q.push({0.0, {start.f, start.s}});

  while (!Q.empty()) {
    pair<float, pii> node = Q.front();
    // cout << node << "\n";
    Q.pop();

    i = node.s.f;
    j = node.s.s;
    visited[i][j] = 1;

    float gNew, hNew, fNew;

    for (int k = 0; k < 8; k++) {
      int new_x = i + dx[k], new_y = j + dy[k];

      if (new_x >= 0 && new_y >= 0 && new_x < n && new_y < m) {
        // cout << "(" << new_x << ", " << new_y << ")\n";
        if (new_x == end.f && new_y == end.s) {
          cout << "REACHED\n";
          cellDetails[new_x][new_y].parent_i = i;
          cellDetails[new_x][new_y].parent_j = j;
          tracePath(cellDetails, end);
          exit(EXIT_SUCCESS);
        }

        if (!visited[new_x][new_y] && arr[new_x][new_y]) {
          float val = (dx[k] != 0 && dy[k] != 0) ? 1.414 : 1.0;
          gNew = cellDetails[i][j].g + val;
          hNew = calculateHValue(new_x, new_y, end);
          fNew = gNew + hNew;

          if (cellDetails[new_x][new_y].f == FLT_MAX || cellDetails[new_x][new_y].f > fNew) {
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
