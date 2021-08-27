// BFS/Kahn's Algorithm
#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int start, end;
};

int main()
{
  int n = 6;
  vector<vector<int>> graph(n);
  vector<int> in(n), ans;
  vector<Edge> edges {{0, 2}, {2, 3}, {3, 5}, {4, 5}, {1, 4}, {1, 2}};

  // Directed Acyclic Graph (DAG)
  for (Edge i : edges) {
    graph[i.start].push_back(i.end);
    in[i.end]++; // node i.end has one more edge going into it
  }

  queue<int> Q;

  // Add the cells with no pre-requisites to the queue
  for (int i = 0; i < n; i++)
    if (in[i] == 0)
      Q.push(i);

  while (!Q.empty()) {
    int node = Q.front();
    Q.pop();

    // Add this node to the answer
    ans.push_back(node);

    // Decrease the in-degree of the neighbors of this node. If the in-degree of a node is 0, add that to the queue.
    for (int i : graph[node]) {
      in[i]--;

      if (in[i] == 0)
        Q.push(i);
    }
  }

  // Print one (of the many possible) topological sort of the graph
  for (int i : ans) cout << i << " ";
  cout << "\n";

  return 0;
}
