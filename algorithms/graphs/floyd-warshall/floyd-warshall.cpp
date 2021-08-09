#include <bits/stdc++.h>

using namespace std;

const int INF = 2147483647;

vector<vector<int>> floyd_warshall(vector<vector<int>> graph) {
  vector<vector<int>> distance(graph);
  int n = graph.size();

  // Phases: in K-th phase we included vertices (1, 2, ...K) as intermediate vertices
  for (int k = 0; k < n; k++)
    // Iterate over entire 2D matrix
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        // If vertex k is included, and can we minimize the distance?
        // Handle negative weight edges to avoid `INF - 1`. Optional condition check if all weights are positive
        if (distance[i][k] < INF && distance[k][j] < INF)
          distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);

  return distance;
}

int main() {
  // n vertices (n x n - 2D Matrix)
  vector<vector<int>> graph = {
    {0, INF, -2, INF},
    {4, 0,    3, INF},
    {INF, INF, 0, 2 },
    {INF, -1, INF, 0}
  };

  vector<vector<int>> distance = floyd_warshall(graph);

  for (int i = 0; i < distance.size(); i++) {
    for (int j = 0; j < distance.size(); j++) {
      cout << distance[i][j] << " ";
    }
    cout << "\n";
  }

  // @TODO: Aaron: Add `parents` to retrieve the sequence vertices
  // @TODO: Aaron: Can you handle the negative cycles with a simple step. (May need to do a research. See here. https://cp-algorithms.com/graph/finding-negative-cycle-in-graph.html)

  return 0;
}
