// Breadth-First Search
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int start, end;
};

void dfs(int source, vector<bool> &visited, list<int> &ordering, vector<vector<int>> &graph)
{
  visited[source] = 1;

  for (int i : graph[source]) {
    if (!visited[i]) {
      dfs(i, visited, ordering, graph);
    }
  }

  // at this point, source node has no more child to visit. going back to its parent
  ordering.push_front(source);
  return ;
}

void topSort(int n, vector<vector<int>> &graph)
{
  // how many direct edges connect to current node
  vector<bool> visited(n, 0);
  list<int> ordering;

  // Call dfs from every node if it is not visited
  for (int i = 0; i < n; i++) {
    if (!visited[i])
      dfs(i, visited, ordering, graph);
  }

  // print out the ordering
  for (int i : ordering)
    cout << i << " ";
}

void addEdge(int start, int end, vector<vector<int>> &graph)
{
  // directed graph: add nodes to both start
  graph[start].push_back(end);
  // graph[end].push_back(start);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 6;                         // number of nodes
  vector<vector<int>> graph(n + 1);   // adjacency list
  vector<bool> visited(n + 1, false); // place to store if the node is visited or not

  // edges for directed graph
  vector<Edge> edges = {{0, 2}, {2, 3}, {3, 5}, {4, 5}, {1, 4}, {1, 2}};

  // add edges to the graph
  for (auto i : edges)
  {
    addEdge(i.start, i.end, graph);
  }

  topSort(n, graph); // expected: 1 4 0 2 3 5

  cout << "\n";

  return 0;
}
