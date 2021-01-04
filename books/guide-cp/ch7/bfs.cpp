// Breadth-First Search
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int start, end;
};

void bfs(vector<bool> &visited, int node, vector<vector<int>> &graph)
{
  // create a queue which while store the nodes to explore
  queue<int> queue;

  // mark this node as explored
  visited[node] = true;

  // add current node to explore (its neighbors)
  queue.push(node);

  // as long as we still have nodes to explore, continue...
  while (!queue.empty())
  {
    // take the front node from the queue and print it
    int top = queue.front();
    queue.pop();

    cout << top << " ";

    // go through the neighbors of this ndoe
    for (auto i : graph[top])
    {
      // check we haven't visited this ndoe
      if (!visited[i])
      {
        // mark node as visited
        visited[i] = true;

        // add node for exploration
        queue.push(i);
      }
    }
  }
}

void addEdge(int start, int end, vector<vector<int>> &graph)
{
  // undirected graph: add nodes to both start and end vector
  graph[start].push_back(end);
  graph[end].push_back(start);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 15;                         // number of nodes
  vector<vector<int>> graph(n + 1);   // adjacency list
  vector<bool> visited(n + 1, false); // place to store if the node is visited or not

  // edges for undirected graph
  vector<Edge> edges = {{1, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}, {5, 9}, {5, 10}, {4, 7}, {4, 8}, {7, 11}, {7, 12}};

  // add edges to the graph
  for (auto i : edges)
  {
    addEdge(i.start, i.end, graph);
  }

  // To cover all components of the graph including unconnected components of the graph
  for (int i = 1; i <= n; i++)
  {
    if (!visited[i])
      bfs(visited, i, graph);
  }

  cout << "\n";

  return 0;
}
