// Dijkstra's Algorithm
#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

void addEdge(vector<vector<pair<int, int>>> &graph, int a, int b, int weight)
{
  graph[a].push_back({b, weight});
  graph[b].push_back({a, weight});
}

vector<int> dijkstra(vector<vector<pair<int, int>>> &graph, int x, int n)
{
  priority_queue<pair<int, int>> q;

  // array of n nodes containing distance from node x to node i
  // Set distance from node x to all other nodes as infinity
  vector<int> distance(n + 1, INF_INT);
  vector<bool> processed(n + 1, false);

  // Distance from node x to itself is 0
  distance[x] = 0;

  // {distance, node}
  q.push({0, x});

  while (!q.empty())
  {
    // take the top most node (smallest distance)
    int node = q.top().second;
    q.pop();

    // if we've already seen this node, skip it
    // this check prevents the time complexity increasing up to O(nm)
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

  return distance;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 5, x = 1;

  vector<vector<pair<int, int>>> graph(n + 1);
  addEdge(graph, 1, 4, 9);
  addEdge(graph, 1, 5, 1);
  addEdge(graph, 1, 2, 5);
  addEdge(graph, 2, 3, 2);
  addEdge(graph, 3, 4, 6);
  addEdge(graph, 4, 5, 2);

  vector<int> distance = dijkstra(graph, x, n);

  for (int i = 1; i <= n; i++)
  {
    // Distance from node 1 -> node 1: 0
    // Distance from node 1 -> node 2: 5
    // Distance from node 1 -> node 3: 7
    // Distance from node 1 -> node 4: 3
    // Distance from node 1 -> node 5: 1
    cout << "Distance from node " << x << " -> node " << i << ": " << distance[i] << "\n";
  }

  int fin = 3;

  cout << "Weight from node 1 -> 3: " << distance[fin] << "\n"; // 7

  return 0;
}
