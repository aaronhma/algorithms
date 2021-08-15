#include <bits/stdc++.h>
using namespace std;

const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int dfs(vector<vector<int>> grid, int i, int j, int n, int m, vector<vector<bool>> &visited)
{
  visited[i][j] = 1;
  int ans = 1;
  for (int k = 0; k < 4; k++)
  {
    int x = i + dx[k], y = j + dy[k];

    if (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] == 1)
    {
      ans += dfs(grid, x, y, n, m, visited);
    }
  }

  return ans;
}

int maxAreaOfIsland(vector<vector<int>> grid)
{
  int n = grid.size(), m = grid[0].size(), ans = 0;
  vector<vector<bool>> visited(n, vector<bool>(m));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!visited[i][j] && grid[i][j] == 1)
      {
        ans = max(ans, dfs(grid, i, j, n, m, visited));
      }
    }
  }

  return ans;
}

int main()
{
  vector<vector<int>> grid{
    {1, 1, 1, 1, 0}, // 0
    {1, 1, 0, 1, 0}, // 1
    {1, 1, 0, 0, 0}, // 2
    {0, 0, 0, 0, 0}}; // 3
  cout << maxAreaOfIsland(grid) << "\n";

  return 0;
}
