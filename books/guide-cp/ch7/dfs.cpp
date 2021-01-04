// Depth-First Search
#include <bits/stdc++.h>

using namespace std;

void dfs(vector<bool> &visited, int node, vector<vector<int>> &graph)
{
  // Backtrack if we've visited this node already.
  if (visited[node])
    return;

  // Mark this node as visited
  visited[node] = true;

  // Print out this node
  cout << node << " ";

  // Explore this node's neighbors
  for (auto i : graph[node])
    dfs(visited, i, graph);
}

void addEdge(int start, int end, vector<vector<int>> &graph)
{
  // undirected graph
  graph[start].push_back(end);
  graph[end].push_back(start);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 4;
  vector<vector<int>> graph(n);
  vector<bool> visited(n, false);

  vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 0}, {2, 3}, {3, 3}};

  for (auto i : edges)
    addEdge(i.first, i.second, graph);

  // Start from node 2
  dfs(visited, 2, graph); // 2 0 1 3

  cout << "\n";

  return 0;
}
