// https://www.spoj.com/problems/MST/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

struct Edge {
  ll a, b, w;
};

ll prim(vector<Edge> &graph, ll n) {
  priority_queue<pair<int, int>> PQ;
  PQ.push({0, 0});
  vector<bool> visited(n);
  ll ans = 0;

  while (!PQ.empty()) {
    ll node = PQ.top().second, w = PQ.top().first;
    PQ.pop();

    if (visited[node]) continue;

    visited[node] = 1;
    ans += w;

    for (auto i : graph)
      if (i.a == node && !visited[i.b])
        PQ.push({-i.w, i.b});
  }

  return abs(ans);
}

int main()
{
  ll n, m, a, b, w;
  cin >> n >> m;

  vector<Edge> graph(n);

  while (m--) {
    cin >> a >> b >> w;
    a--; b--;
    Edge ne; ne.a = a; ne.b = b; ne.w = w;
    graph.push_back(ne);
    Edge ne1; ne1.a = b; ne1.b = a; ne1.w = w;
    graph.push_back(ne1);
  }

  cout << prim(graph, n) << "\n";

  return 0;
}
