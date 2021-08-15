#include <bits/stdc++.h>

using namespace std;

const int n = 10;

void addEdge(vector<vector<int>> &graph, int a, int b, bool directed = false)
{
  graph[a].push_back(b);

  if (!directed)
    graph[b].push_back(a);
}

void dfs(vector<vector<int>> &graph, vector<bool> &visited, int source)
{
  if (visited[source]) return;

  cout << source << " ";
  visited[source] = 1;

  for (int i : graph[source]) {
    if (!visited[i]) {
      dfs(graph, visited, i);
    }
  }
}

int main()
{
  vector<vector<int>> graph(n);
  vector<pair<int, int>> edges {{0, 1}, {0, 4}, {1, 2}, {2, 3}, {5, 6}};
  vector<bool> visited(n);

  for (auto i : edges)
    addEdge(graph, i.first, i.second);

  int k = 1;

  for (int i = 1; i <= 6; i++) {
    if (!visited[i]) {
      cout << "Connected component #" << k++ << ": ";
      dfs(graph, visited, i);
      cout << "\n";
    }
  }

  return 0;
}
