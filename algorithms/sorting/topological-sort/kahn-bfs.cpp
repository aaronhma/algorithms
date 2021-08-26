// Breadth-First Search
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int start, end;
};

void topSort(int n, vector<vector<int>> &graph)
{
  // how many direct edges connect to current node
  vector<int> indegree(n, 0);

  // Initialization: iterate over all the edges to find the right indegree
  for(int i = 0; i < n; i++) {
    for (int j : graph[i]) {
      indegree[j]++;
    }
  }

  // BFS starts
  queue<int> queue;

  // init the q with nodes having 0 indegree
  for(int i = 0; i < n; i++) {
    // cout << "node " << i << " : " << indegree[i] << "\n";
    if (indegree[i] == 0) queue.push(i);
  }

  // as long as we still have nodes to explore, continue...
  while (!queue.empty())
  {
    // take the front node from the queue and print it
    int top = queue.front();
    queue.pop();

    cout << top << " ";

    // go through the neighbors of this ndoe
    for (int i : graph[top])
    {
      indegree[i]--;
      // check we haven't visited this ndoe
      if (indegree[i] == 0)
      {
        // add node for exploration
        queue.push(i);
      }
    }
  }
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

  topSort(n, graph);  // expected: 0 1 4 2 3 5

  cout << "\n";

  return 0;
}
