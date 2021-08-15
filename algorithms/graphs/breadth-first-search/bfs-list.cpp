#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

void addEdge(vector<list<int>> &graph, int a, int b, bool directed = false)
{
  graph[a].push_back(b);

  if (!directed)
    graph[b].push_back(a);
}

void bfs(vector<list<int>> &graph, int source, int dest, int n)
{
  queue<int> Q;

  vector<bool> visited(n);
  vector<int> distance(n, INF_INT), parent(n, -1);
  distance[source] = 0;

  Q.push(source);
  visited[source] = 1;

  while (!Q.empty())
  {
    int node = Q.front();
    Q.pop();
    cout << node << " ";

    for (int i : graph[node])
      if (!visited[i])
      {
        Q.push(i);
        visited[i] = 1;
        distance[i] = distance[node] + 1;
        parent[i] = node;
      }
  }

  cout << "\nDistance from node " << source << " to every other node: ";

  for (int i : distance) cout << i << " ";
  cout << "\n";

  if (dest != -1)
  {
    if (!visited[dest])
      cout << "No Path\n";
    else
    {
      cout << "Path from " << source << " to " << dest << ": ";
      vector<int> path;

      for (int i = dest; i != source; i = parent[i])
        path.push_back(i);

      path.push_back(source);
      reverse(path.begin(), path.end());

      for (int i : path) cout << i << " ";
      cout << "\n";
    }
  }
}

int main()
{
  int n = 7;

  vector<pair<int, int>> edges{{0, 1}, {0, 4}, {4, 5}, {1, 2}, {2, 3}, {3, 5}, {5, 6}};
  vector<list<int>> graph(n);

  for (auto i : edges)
    addEdge(graph, i.first, i.second);

  bfs(graph, 1, 6, n);

  return 0;
}
