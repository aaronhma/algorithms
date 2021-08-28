// Code is tested against https://www.spoj.com/problems/LCA/
// Bonus problem: https://www.spoj.com/problems/QTREE2/
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

vi time_in, time_out, dist; // NOTE: Can't create distance named array in global scope
int timer, l;

// Modified DFS for trees (see https://github.com/aaronhma/algorithms/blob/master/data-structure/trees/tree/README.md#tree-traversals)
void dfs(vvi &graph, vvi &parent, int node, int prev)
{
  time_in[node] = ++timer; // Keep track of when we first looked at this node

  parent[node][0] = prev; // the 2^0-st parent above this node is the parent
  dist[node] = dist[prev] + 1; // Keep track of distances for the distance(parent, u, v) function

  // Use previously computed values to find the 2^i-th parent of current node (0 if the parent doesn't exist)
  for (int i = 1; i <= l; i++)
    parent[node][i] = parent[parent[node][i - 1]][i - 1];

  for (int i : graph[node])
  {
    if (i != prev)
      dfs(graph, parent, i, node);
  }

  time_out[node] = ++timer; // Keep track of when we last looked at this node
}

// Reset all arrays and variables and fill the parent, time_in, and time_out array
void preprocess(vvi &graph, vvi &parent, int root, int n)
{
  time_in.resize(n);
  time_out.resize(n);
  dist.resize(n);
  timer = 0;
  dfs(graph, parent, root, 0);
}

// Node u is the ancestor of node v is we visit node u before node v and exit node v before exiting node u
bool is_ancestor(int u, int v)
{
  // NOTE: We use <= so if u == v, we return the lca(u, v) = u (or v as they're the same)
  return time_in[u] <= time_in[v] && time_out[u] >= time_out[v];
}

int lca(vvi &parent, int u, int v)
{
  // If node u is the ancestor of node v, then lca(u, v) = u
  if (is_ancestor(u, v))
    return u;

  // If node v is the ancestor of node u, then lca(u, v) = v
  if (is_ancestor(v, u))
    return v;

  // Try to move 2^i nodes up, 2^{i - 1}, 2^{i - 2}, ..., 2^0 nodes above
  for (int i = l; i >= 0; i--)
  {
    // If the parent exists and is not an ancestor of node v, move to that node.
    if (parent[u][i] != 0 && !is_ancestor(parent[u][i], v))
      u = parent[u][i];
  }

  // We now have u as the node at the same or higher lever than node v. The parent of nove u is the LCA of nodes u and v.
  return parent[u][0];
}

// Distance between (u, v)
int distance(vvi &parent, int u, int v)
{
  // Find the middle node (LCA) of (u, v)
  int lca = ::lca(parent, u, v);

  // Distance is the distance from node 1 to node u + distance from node 1 to node v - 2 * (distance from node 1 to node lca)
  return dist[u] + dist[v] - 2 * dist[lca];
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n, q, k, k1;
  cin >> t;

  for (int cas_no = 1; cas_no <= t; cas_no++)
  {
    cin >> n;

    int no_nodes = n + 1;

    cout << "Case " << cas_no << ":\n";

    l = ceil(log2(no_nodes));
    vvi graph(no_nodes), parent(no_nodes, vi(l + 1));

    // Read the graph
    for (int i = 1; i <= n; i++)
    {
      cin >> q;

      while (q--)
      {
        cin >> k;
        graph[i].push_back(k);
        graph[k].push_back(i);
      }
    }

    // Preprocess the graph with node 1 as the root
    preprocess(graph, parent, 1, no_nodes);

    cin >> q;

    while (q--)
    {
      cin >> k >> k1;

      // Print the lca with the distance:
      // cout << lca(parent, k, k1) << " | " << distance(parent, k, k1) << "\n";

      // For SPOJ problem
      cout << lca(parent, k, k1) << "\n";
    }
  }

  return 0;
}
