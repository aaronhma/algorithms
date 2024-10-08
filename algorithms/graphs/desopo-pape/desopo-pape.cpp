#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

vector<int> desopoPape(vector<vector<pair<int, int>>> &graph, vector<int> &parent, int source, int n) {
  vector<int> distance(n, INF_INT); // distance[i] - Distance from source -> i

  // m[0] - Distance is already calculated (though the distance may not be final)
  // m[1] - Node in queue
  // m[2] - Node has never been in queue (need to calculate)
  vector<int> m(n, 2);

  // Distance from source to itself is 0
  distance[source] = 0;

  // Instead of using a Priority Queue, use a deque that we will manually sort.
  deque<int> DQ;
  DQ.push_back(source);

  while (!DQ.empty()) {
    // Take the top-most node
    int node = DQ.front();
    DQ.pop_front();

    // Node no longer in the queue
    m[node] = 0;

    // Explore neighbors of this node
    for (pair<int, int> i : graph[node]) {
      int b = i.first, w = i.second;
      int new_dist = distance[node] + w;

      if (new_dist < distance[b]) {
        // Update distance and parent
        distance[b] = new_dist;
        parent[b] = node;

        // If this node has never been pushed into the deque, add it to the back.
        if (m[b] == 2)
          DQ.push_back(b);

        // If this node was in the queue before but has not been finished processing, add it to the front.
        else if (m[b] == 0)
          DQ.push_front(b);

        // Node is in the queue
        m[b] = 1;
      }
    }
  }

  return distance;
}

int main()
{
  int n = 6;

  vector<vector<pair<int, int>>> graph(n);
  vector<pair<int, pair<int, int>>> edge {{10, {0, 1}}, {1, {2, 1}}, {-2, {3, 2}}, {8, {0, 5}}, {1, {5, 4}}, {-4, {4, 1}}, {-1, {4, 3}}, {2, {1, 3}}};

  // directed graph
  for (auto i : edge)
    graph[i.second.first].push_back({i.second.second, i.first});

  vector<int> parent(n, -1);
  vector<int> distance = desopoPape(graph, parent, 0, n);

  // 0 5 5 7 9 8
  for (int i : distance) cout << i << " ";
  cout << "\n";

  return 0;
}
