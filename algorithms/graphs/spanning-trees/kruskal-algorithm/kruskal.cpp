// https://www.spoj.com/problems/MST/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// See https://github.com/aaronhma/algorithms/blob/master/data-structure/non-linear/set/disjoint-set.cpp
class DisjointSet
{
public:
  DisjointSet(ll n)
  {
    rank.resize(n);
    parent.resize(n);
    makeSet(n);
  }

  // Create a n sets
  void makeSet(ll n) {
    for (int i = 0; i < n; i++) {
      parent[i] = i;
      rank[i] = 0;
    }
  }

  // Find the representative (parent) of the set that i is in
  ll find_parent(ll i) {
    if (parent[i] == i) return i;

    return parent[i] = find_parent(parent[i]);
  }

  // Join nodes in set a and nodes in set b together
  void Union(ll a, ll b) {
    ll parent_a = find_parent(a);
    ll parent_b = find_parent(b);

    // Union by rank
    if (parent_a != parent_b) {
      if (rank[parent_a] < rank[parent_b])
        swap(parent_a, parent_b);

      // Attach bigger set to the smaller set
      parent[parent_b] = parent_a;

      // Increase ranking of the now bigger set
      if (rank[parent_a] == rank[parent_b])
        rank[parent_a]++;
    }
  }

private:
  vector<int> parent, rank;
};

// Edge structure
struct Edge {
  ll a, b, w;
};

ll kruskal(vector<Edge> &graph, ll n) {
  ll ans = 0;
  DisjointSet set(n);

  // Sort all edges by weight
  sort(graph.begin(), graph.end(), [](const Edge &a, const Edge &b) {
    return a.w < b.w;
  });

  for (Edge i : graph) {
    // If i.a and i.b is not connected
    if (set.find_parent(i.a) != set.find_parent(i.b)) {
      // Add the weight to the answer
      ans += i.w;

      // Connect the two edges
      set.Union(i.a, i.b);
    }
  }

  return ans;
}

int main()
{
  ll n, m, a, b, w;
  cin >> n >> m;
  n *= 2; // 2n edges because the graph is undirected

  vector<Edge> graph;

  while (m--) {
    cin >> a >> b >> w;
    Edge ne; ne.a = a; ne.b = b; ne.w = w;
    Edge ne1; ne1.a = b; ne1.b = a; ne1.w = w;
    graph.push_back(ne);
    graph.push_back(ne1);
  }

  cout << kruskal(graph, n) << "\n";

  return 0;
}
