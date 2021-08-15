#include <bits/stdc++.h>

using namespace std;

const int n = 10; // Max number of nodes
const int INF_INT = 2147483647;

void addEdge(vector<vector<int>> &graph, int a, int b, bool directed = false)
{
  graph[a].push_back(b);

  if (!directed)
    graph[b].push_back(a);
}

void dfs(vector<vector<int>> &graph, vector<bool> &visited, vector<int> &distance, vector<int> &parent, int source)
{
  if (visited[source]) return;

  cout << source << " ";
  visited[source] = 1;

  for (int i : graph[source]) {
    if (!visited[i]) {
      parent[i] = source;
      distance[i] = distance[source] + 1;
      dfs(graph, visited, distance, parent, i);
    }
  }
}

int main()
{
  vector<vector<int>> graph(n);
  vector<pair<int, int>> edges{{0, 1}, {0, 4}, {1, 2}, {2, 3}, {5, 6}, {3, 5}};
  vector<bool> visited(n);
  vector<int> distance(n, INF_INT), parent(n, -1);

  for (auto i : edges)
    addEdge(graph, i.first, i.second);

  dfs(graph, visited, distance, parent, 0);

  distance[0] = 0;
  cout << "Distance from 0 -> 4: " << distance[4] << "\n";
  cout << "Path from 0->3: ";

  vector<int> path;
  path.push_back(3);

  for (int i = parent[3]; i != parent[0]; i = parent[i])
    path.push_back(i);

  reverse(path.begin(), path.end());

  for (int i : path) cout << i << " ";
  cout << "\n";

  return 0;
}
