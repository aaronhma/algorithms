#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

vector<vector<int>> updateMatrix(vector<vector<int>> &mat)
{
  int n = mat.size(), m = mat[0].size();
  queue<pair<int, int>> Q;
  vector<vector<int>> dist(n, vector<int>(m, INF_INT));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!mat[i][j])
      {
        Q.push({i, j});
        dist[i][j] = 0;
      }
    }
  }

  while (!Q.empty())
  {
    int x = Q.front().first, y = Q.front().second;
    Q.pop();

    for (int i = 0; i < 4; i++)
    {
      int new_x = x + dx[i], new_y = y + dy[i];

      if (new_x >= 0 && new_y >= 0 && new_x < n && new_y < m && dist[new_x][new_y] == INF_INT)
      {
        Q.push({new_x, new_y});
        dist[new_x][new_y] = dist[x][y] + 1;
      }
    }
  }

  return dist;
}

int main()
{
  vector<vector<int>> arr {{0,0,0},{0,1,0},{0,0,0}};

  vector<vector<int>> ans = updateMatrix(arr); // {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}}

  for (vector<int> i : ans) {
    for (int j : i) cout << j << " ";
    cout << "\n";
  }

  return 0;
}
