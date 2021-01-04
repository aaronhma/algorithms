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
  addEdge(graph, 1, 4, 9);
  addEdge(graph, 1, 5, 1);
  addEdge(graph, 1, 2, 5);
  addEdge(graph, 2, 3, 2);
  addEdge(graph, 3, 4, 6);
  addEdge(graph, 4, 5, 2);

  priority_queue<pair<int, int>> q;

  const int x = 1;

  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF);
  vector<bool> processed(n + 1, false);

  // Distance from node x to itself is 0
  distance[x] = 0;

  // {distance, node}
  q.push({0, x});

  while (!q.empty())
  {
    // take the top most node
    int node = q.top().second;
    q.pop();

    // if we've already seen this node, skip it
    if (processed[node])
      continue;

    // mark as seen
    processed[node] = true;

    // explore this node's neighbors
    for (auto i : graph[node])
    {
      // get node b and weight of the edge between node a and node b
      int b = i.first, weight = i.second;

      // if the current node's distance + the extra weight
      // is less than the distance at node b, update it
      int new_dist = distance[node] + weight;

      if (new_dist < distance[b])
      {
        // update distance
        distance[b] = new_dist;

        // add current ndoe for processing
        // wee add the negative distance (we actually  don't care about it, we just use it for getting the minimum distance) instead of maximum node
        q.push({-distance[b], b});
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    cout << "Distance from node " << x << " -> node " << i << ": " << distance[i] << "\n";
  }

  int fin = 3;

  cout << "Weight from node 1 -> 3: " << distance[fin] << "\n";

  return 0;
}
