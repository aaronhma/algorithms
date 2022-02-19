#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

vector<int> desopoPape(vector<vector<pair<int, int>>> &graph, vector<int> &parent, int source, int n) {
  vector<int> distance(n, INF_INT), m(n, 2);
  distance[source] = 0;

  deque<int> DQ;
  DQ.push_back(source);

  while (!DQ.empty()) {
    int node = DQ.front();
    DQ.pop_front();

    m[node] = 0;

    for (auto i : graph[node]) {
      int b = i.first, w = i.second;
      int new_dist = distance[node] + w;

      if (new_dist < distance[b]) {
        distance[b] = new_dist;
        parent[b] = node;

        if (m[b] == 2) DQ.PB(b);
        else if (m[b] == 0) DQ.push_front(b);
      }
    }
  }
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
