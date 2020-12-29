// Bellman-Ford Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF = 1000001; // 10^6 + 1

void addEdge(vector<tuple<int, int, int>> &graph, int a, int b, int weight)
{
  graph.push_back({a, b, weight});
  graph.push_back({b, a, weight});
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 5;

  vector<tuple<int, int, int>> edges(n);
  addEdge(edges, 1, 3, 1);
  addEdge(edges, 1, 4, 7);
  addEdge(edges, 1, 2, 2);
  addEdge(edges, 3, 4, 3);
  addEdge(edges, 2, 4, 3);
  addEdge(edges, 2, 5, 5);
  addEdge(edges, 4, 5, 2);

  const int x = 1;

  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF);

  // Distance from node x to itself is 0
  distance[x] = 0;

  // Go through each edge of the graph
  for (int i = 1; i <= n - 1; i++)
  {
    // Update distance array
    for (auto e : edges)
    {
      int a, b, w;

      // Efficient way to unpack tuples
      // a = e.a
      // b = e.b
      // w = e.w
      tie(a, b, w) = e;

      // Reduce the distance
      distance[b] = min(distance[b], distance[a] + w);
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