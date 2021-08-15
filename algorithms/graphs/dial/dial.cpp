#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

int max_weight = 0;

void addEdge(vector<vector<pair<int, int>>> &graph, int a, int b, int weight) {
  graph[a].push_back({b, weight});
  graph[b].push_back({a, weight});
  max_weight = max(max_weight, weight);
}

void dial(vector<vector<pair<int, int>>> &graph, int source) {
  int n = (int)graph.size(), buckets_size = n * max_weight, i = 0;

  // Initialize all the distances to infinity
  vector<pair<int, list<int>::iterator>> distance(n);

  for (auto &j : distance)
    j.first = INF_INT;

  // Create the buckets
  vector<list<int>> buckets(buckets_size + 1);

  // Distance for the source is 0
  distance[source].first = 0;

  // Add source to the bucket with weight 0
  buckets[0].push_back(source);

  for (;;) {
    // Find the first non-empty bucket
    while (i < buckets_size && buckets[i].empty()) i++;

    // If all buckets are empty, we are done
    if (i == buckets_size) break;

    // Select the node at the front
    int node = buckets[i].front();
    buckets[i].pop_front();

    // Distance to the current node
    int distance_node = distance[node].first;

    // Go through this node's neighbors
    for (auto neighbor : graph[node]) {
      // Get the neighbor's node and the weight of the edge
      int b = neighbor.first, w = neighbor.second;

      // Get the current neighbor's distance
      int distance_neighbor = distance[b].first;

      // New possible distance
      int new_dist = distance_node + w;

      // Check if there exists a shorter path
      if (new_dist < distance_neighbor) {
        // If the current neighbor's distance is not infinity, this means that the node is in a bucket.
        // Remove the node from that bucket
        if (distance_neighbor != INF_INT)
          buckets[distance_neighbor].erase(distance[b].second);

        // Update the distance
        distance[b].first = distance_neighbor = new_dist;

        // Add the distance to the front of the bucket
        buckets[distance_neighbor].push_front(b);
        distance[b].second = buckets[distance_neighbor].begin();
      }
    }
  }

  for (int j = 1; j <= n; j++) {
    cout << "Distance from " << source << " -> " << j << ": " << distance[j].first << "\n";
  }
}

int main()
{
  int n = 8;

  vector<vector<pair<int, int>>> graph(n);
  vector<tuple<int, int, int>> edges {{1, 2, 2}, {1, 3, 4}, {2, 3, 1}, {2, 5, 2}, {2, 4, 4}, {3, 5, 3}, {4, 6, 2}, {5, 4, 3}, {5, 6, 2}};

  for (auto i : edges)
    addEdge(graph, get<0>(i), get<1>(i), get<2>(i));

  dial(graph, 1); // 0, 2, 3, 6, 4, 6

  return 0;
}
/**
 * Steps to solve CP problems:
 * 1) Carefully extract the important information from the problem.
 * 2) Find out all the hidden information.
 * 3) Read input & output & understand the question.
 * 4) Visualize the problem.
 *  a. Does my result output the expected output?
 *  b. Does the idea you think works?
 *  c. Check for edge cases.
 * 5) Implementation.
*/
