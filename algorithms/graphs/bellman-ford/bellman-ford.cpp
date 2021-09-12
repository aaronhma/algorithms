// Bellman-Ford Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

vector<int> bellmanFord(vector<tuple<int, int, int>> &graph, int n, int x)
{
  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF_INT);

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
        distance[b] = new_dist;
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

  int n = 6, x = 1;

  vector<tuple<int, int, int>> edges(n);
  vector<vector<int>> graph{{1, 3, 1}, {1, 2, 2}, {1, 4, 7}, {3, 4, 3}, {2, 4, 3}, {2, 5, 5}, {4, 5, 2}};

  for (auto i : graph)
  {
    edges.push_back({i[0], i[1], i[2]});
  }

  vector<int> distance = bellmanFord(edges, n, x);

  // Distance from node 0 -> node 1: -2147483648
  // Distance from node 0 -> node 2: -2147483648
  // Distance from node 0 -> node 3: -2147483646
  // Distance from node 0 -> node 4: 9
  // Distance from node 0 -> node 5: 8
  // Distance from node 0 -> node 6: 2147483647
  // Distance from node 1 -> 5: 8
  for (int i = 0; i <= n; i++)
  {
    cout << "Distance from node " << x << " -> node " << i << ": " << distance[i] << "\n";
  }

  int fin = 5;

  cout << "Distance from node 1 -> 5: " << distance[fin] << "\n";

  return 0;
}
