#include <bits/stdc++.h>

using namespace std;

const int INF = 1000001; // 10^6 + 1

struct Edge {
  int to, w;
};

int n;
vector<vector<Edge>> graph;

void shortest_paths(int src, vector<int>& distance, vector<int>& parent) {
  // The vertices in the set `m` are stored in a bidirectional queue (deque).
  // M0 - vertices, for which the distance has already been calculated (although it might not be the final distance)
  // M1 - vertices, for which the distance currently is calculated
  // M2 - vertices, for which the distance has not yet been calculated
  vector<int> m(n, 2);

  deque<int> DQ;
  DQ.push_back(src);

  // array of n nodes containing distance from node x to node i
  distance.assign(n, INF);
  // Distance from node x to itself is 0
  distance[src] = 0;

  parent.assign(n, -1);

  while (!DQ.empty()) {
    // take the top most node (smallest distance)
    int node = DQ.front();
    DQ.pop_front();
    m[node] = 0;

    for (Edge i : graph[node]) {
      int b = i.to, w = i.w;

      int new_dist = distance[node] + w;

      if (new_dist < distance[b]) {
        distance[b] = new_dist;
        parent[b] = node;

        if (m[b] == 2) {
          m[b] = 1;
          DQ.push_back(b);
        } else if (m[b] == 0) {
          m[b] = 1;
          DQ.push_front(b);
        }
      }
    }
  }
}

int main() {

  return 0;
}
