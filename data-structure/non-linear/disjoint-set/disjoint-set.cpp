#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

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
  // Note: union is a reserved keyword in C++
  void Union(ll a, ll b) {
    a = find_parent(a), b = find_parent(b);

    // Union by rank based on depth
    if (a != b) {
      if (rank[a] < rank[b])
        swap(a, b);

      // Attach smaller set to the larger set
      parent[b] = a;

      // Increase ranking of the now bigger set
      if (rank[a] == rank[b])
        rank[a]++;
    }
  }

private:
  vector<ll> parent, rank;
};

int main()
{
  DisjointSet set(2);
  set.Union(7, 6);

  cout << set.find_parent(1) << "\n";

  return 0;
}
