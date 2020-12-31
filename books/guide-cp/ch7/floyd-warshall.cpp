// Floyd-Warshall Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF = 1000001; // 10^6 + 1

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 5;

  vector<vector<int>> graph = {{}, {0, 5, INF, 9, 1}, {5, 0, 2, INF, INF}, {INF, 2, 0, 7, INF}, {9, INF, 7, 0, 2}, {1, INF, INF, 2, 0}};
  vector<vector<int>> dist(n + 1, vector<int>(n + 1, INF));

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      dist[i][j] = graph[i][j];
    }
  }

  const int x = 2;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
        dist[i][j] = 0;
      else if (graph[i][j])
        dist[i][j] = graph[i][j];
      else
        dist[i][j] = INF;
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      for (int k = 1; k <= n; k++)
      {
        dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
      }
    }
  }

  for (auto i : dist)
  {
    for (int j : i)
    {
      if (j == INF)
      {
        cout << "INF   ";
      }
      else
      {
        cout << j << "     ";
      }
    }

    cout << "\n";
  }

  int fin = 4;

  cout << "Weight from node 2 -> 4: " << dist[x][fin] << "\n";

  return 0;
}
