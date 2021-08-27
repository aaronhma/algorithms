// DFS
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int start, end;
};

void dfs(vector<vector<int>> &graph, int i, vector<bool> &visited, vector<int> &ans) {
  if (visited[i]) return;
  visited[i] = 1;

  for (int j : graph[i])
    dfs(graph, j, visited, ans);

  // Add this value to our answer array
  ans.push_back(i);
}

int main()
{
  int n = 6;
  vector<vector<int>> graph(n);
  vector<bool> visited(n);
  vector<int> ans;
  vector<Edge> edges {{0, 2}, {2, 3}, {3, 5}, {4, 5}, {1, 4}, {1, 2}};

  // Directed Acyclic Graph (DAG)
  for (Edge i : edges) {
    graph[i.start].push_back(i.end);
  }

  for (int i = 0; i < n; i++)
    if (!visited[i])
      dfs(graph, i, visited, ans);

  // Reverse the answer array to get one (of the many possible) topological sort of the graph
  reverse(ans.begin(), ans.end());

  for (int i : ans) cout << i << " ";
  cout << "\n";

  return 0;
}
