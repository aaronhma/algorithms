#include <bits/stdc++.h>

using namespace std;

const int INF_INT = 2147483647;

void addEdge(vector<vector<pair<int, int>>> &graph, int a, int b, int weight)
{
  graph[a].push_back({b, weight});
  graph[b].push_back({a, weight});
}

void bfs01(vector<vector<pair<int, int>>> &graph, vector<int> &distance, int start)
{
  deque<int> DQ;
  DQ.push_back(start);
  distance[start] = 0;

  while (!DQ.empty())
  {
    int node = DQ.front();
    DQ.pop_front();

    for (pair<int, int> i : graph[node])
    {
      int b = i.first, w = i.second;

      int new_dist = distance[node] + w;

      if (new_dist < distance[b])
      {
        distance[b] = new_dist;

        if (w == 1)
          DQ.push_back(b);
        else
          DQ.push_front(b);
      }
    }
  }
}

int main()
{
  int n = 7, start = 1;

  vector<tuple<int, int, int>> data{{1, 2, 0}, {2, 3, 1}, {1, 4, 1}, {4, 5, 1}, {3, 5, 0}, {5, 6, 1}};
  vector<vector<pair<int, int>>> graph(n);

  for (auto i : data)
    addEdge(graph, get<0>(i), get<1>(i), get<2>(i));

  vector<int> distance(n, INF_INT);

  bfs01(graph, distance, start);

  for (int i : distance) cout << i << " ";
  cout << "\n";

  return 0;
}
