#include <bits/stdc++.h>

using namespace std;

struct Edge
{
  int a, b, w;
};

vector<int> findNegativeWeight(vector<Edge> &graph, int n)
{
  vector<int> distance(n), parent(n, -1), cycle;

  // x: Ending vertice of the cycle (-1 if no cycle)
  int x = -1;

  for (int op = 0; op < n; op++)
  {
    x = -1;

    // Find ending cell of the cycle
    for (Edge i : graph)
    {
      if (distance[i.a] + i.w < distance[i.b])
      {
        distance[i.b] = distance[i.a] + i.w;
        parent[i.b] = i.a;
        x = i.b;
      }
    }
  }

  // x == -1 means no cycle
  if (x == -1)
    return {};

  // Find starting node of cycle
  for (int i = 0; i < n; i++)
    x = parent[x];

  // Backtrack
  for (int i = x;; i = parent[i])
  {
    cycle.push_back(i);

    if (i == x && (int)cycle.size() > 1) break;
  }

  // Return cycle in reverse order
  reverse(cycle.begin(), cycle.end());

  return cycle;
}

int main()
{
  int n = 5;

  vector<Edge> graph(n);
  vector<tuple<int, int, int>> edges{{1, 2, -2}, {2, 3, -1}, {3, 4, -3}, {4, 1, -4}};

  for (auto i : edges)
  {
    Edge ne;
    ne.a = get<0>(i);
    ne.b = get<1>(i);
    ne.w = get<2>(i);
    graph.push_back(ne);
  }

  vector<int> cycle = findNegativeWeight(graph, n);

  for (int i : cycle) cout << i << " ";
  cout << "\n";

  return 0;
}
