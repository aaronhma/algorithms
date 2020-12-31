// Dijkstra's Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF = 1000001; // 10^6 + 1

void addEdge(vector<vector<pair<int, int>>> &graph, int a, int b, int weight)
{
  graph[a].push_back({b, weight});
  graph[b].push_back({a, weight});
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 5;

  vector<vector<pair<int, int>>> graph(n + 1);
  addEdge(graph, 1, 3, 1);
  addEdge(graph, 1, 4, 7);
  addEdge(graph, 1, 2, 2);
  addEdge(graph, 3, 4, 3);
  addEdge(graph, 2, 4, 3);
  addEdge(graph, 2, 5, 5);
  addEdge(graph, 4, 5, 2);

  priority_queue<pair<int, int>> q;

  const int x = 1;

  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF);
  vector<bool> processed(n + 1, false);

  // Distance from node x to itself is 0
  distance[x] = 0;

  q.push({0, x});

  while (!q.empty())
  {
    int node = q.top().second;
    q.pop();

    if (processed[node])
      continue;

    processed[node] = true;

    for (auto i : graph[node])
    {
      int b = i.first, weight = i.second;

      if (distance[node] + weight < distance[b])
      {
        distance[b] = distance[node] + weight;
        q.push({-distance[b], b});
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    cout << "Distance from node " << x << " -> node " << i << ": " << distance[i] << "\n";
  }

  int fin = 5;

  cout << "Weight from node 1 -> 5: " << distance[fin] << "\n";

  return 0;
}
