// Bellman-Ford Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF = 1000001; // 10^6 + 1

void addEdge(vector<tuple<int, int, int>> &graph, int a, int b, int weight)
{
  graph.push_back({a, b, weight});
  // graph.push_back({b, a, weight});
}

vector<int> bellmanFord(vector<tuple<int, int, int>> &graph, int n, int x)
{
  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF);

  // Distance from node x to itself is 0
  distance[x] = 0;

  // Go through each edge of the graph
  for (;;)
  {
    bool any = 0;

    // Update distance array
    for (auto e : graph)
    {
      int a, b, w;

      // Efficient way to unpack tuples
      // a = e.a
      // b = e.b
      // w = e.w
      tie(a, b, w) = e;

      int new_dist = distance[a] + w;

      // Reduce the distance
      if (new_dist < distance[b])
      {
        distance[b] = min(distance[b], new_dist);
        any = 1;
      }
    }

    if (!any)
      break;
  }

  return distance;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 6, x = 0;

  vector<tuple<int, int, int>> edges(n);
  vector<pair<int, pair<int, int>>> edge{{10, {0, 1}}, {1, {2, 1}}, {-2, {3, 2}}, {8, {0, 5}}, {1, {5, 4}}, {-4, {4, 1}}, {-1, {4, 3}}, {2, {1, 3}}};
  // addEdge(edges, 1, 3, 1);
  // addEdge(edges, 1, 4, 7);
  // addEdge(edges, 1, 2, 2);
  // addEdge(edges, 3, 4, 3);
  // addEdge(edges, 2, 4, 3);
  // addEdge(edges, 2, 5, 5);
  // addEdge(edges, 4, 5, 2);

  for (auto i : edge)
  {
    addEdge(edges, i.second.first, i.second.second, i.first);
  }

  vector<int> distance = bellmanFord(edges, n, x);

  for (int i = 1; i <= n; i++)
  {
    cout << "Distance from node " << x << " -> node " << i << ": " << distance[i] << "\n";
  }

  int fin = 5;

  cout << "Weight from node 1 -> 5: " << distance[fin] << "\n";

  return 0;
}
