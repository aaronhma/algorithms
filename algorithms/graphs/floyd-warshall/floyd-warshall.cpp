#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

vector<vector<int>> floydWarshall(vector<vector<int>> &graph)
{
  vector<vector<int>> distance(graph);
  int n = (int)graph.size();

  for (int k = 0; k < n; k++) // Phase we are on
    // Iterate over the matrix
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        // If the distance from i - k and distance from k - j is already calculated, then update the distance with the sum of the two distances if the distance is smaller than the current distance.
        if (distance[i][k] != INF_INT && distance[k][j] != INF_INT)
          // Reduce the distance
          distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);

  return distance;
}

int main()
{
  vector<vector<int>> graph = {
      {0, INF_INT, -2, INF_INT},
      {4, 0, 3, INF_INT},
      {INF_INT, INF_INT, 0, 2},
      {INF_INT, -1, INF_INT, 0}};

  vector<vector<int>> distance = floydWarshall(graph);

  for (vector<int> i : distance) {
    for (int j : i) cout << j << " ";
    cout << "\n";
  }

  return 0;
}
