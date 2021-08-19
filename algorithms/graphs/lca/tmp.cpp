#include<bits/stdc++.h>

using namespace std;

const int N = 1e5;

int K;

vector<int> graph[N];

// Distances to an invisible initial parent vertex 0
int distances[N];
// parents is the Sparse table:  2^j of i | 2^K of N
vector<vector<int>> parents;

// Added timer
int timer;
// the time of the first visit and exit of this node in Euler Tour
vector<int> timeIn, timeOut;

// O(N*K)
void dfs(int source, int parentNode) {
  timeIn[source] = ++timer;

	distances[source] = distances[parentNode] + 1;

  // building the sparse table
	parents[source][0] = parentNode;
	for (int i = 1; i <= K; ++i) {
		parents[source][i] = parents[parents[source][i - 1]][i - 1];
	}

	for (auto i : graph[source]) {
		if (i != parentNode) {
			dfs(i, source);5/10
		}
	}

  timeOut[source] = ++timer;
}

bool is_ancestor(int u, int v) {
  return timeIn[u] <= timeIn[v] && timeOut[u] >= timeOut[v];
}


// O(K) = logN   no use of n here.
int LCA(int u, int v) {
  // Check whether one node is the ancestor of the other.
  // If true, this node is already the LCA.
  if (is_ancestor(u, v)) return u;
  if (is_ancestor(v, u)) return v;

  // If u is not the ancestor of v, and v not the ancestor of u
  // climb the ancestors of u until we find the highest node (closest to root), which is not an ancestor of v
  for (int i = K; i >= 0; --i) {
    if (parents[u][i] != 0 && !is_ancestor(parents[u][i], v))
      u = parents[u][i];
  }

	// parents[v][0]. simply the u or v's parentNode will be the LCA
	return parents[u][0];
}

// O(1)   length of the path from u to v
int LengthFromUtoV(int u, int v) {
	int lca = LCA(u, v);
	return distances[u] + distances[v] - 2 * distances[lca];
}

int main() {
	int n = 7;
  vector<pair<int, int>> edges {{1, 2}, {1, 3}, {2, 4}, {2, 6}, {4, 5}};

	for (int i = 0; i < n; i++) {
    int x = edges[i].first, y = edges[i].second;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}

  timeIn.resize(n);
  timeOut.resize(n);
  timer = 0;

  K = ceil(log2(n));
  parents.assign(n, vector<int>(K + 1));

	dfs(1, 0);

  // See sparse table in action
	for (int i = 1; i < n; i++) {
		cout << "vertex " << i << " -> ";
    for (int j = 0; j <= K; j++)
			cout << parents[i][j] << " ";
    cout << '\n';
	}

	for (int i = 1; i < n; i++) {
		cout << "vertex " << i << " " << distances[i] << '\n';
	}

	for (int i = 1; i < n; i++) {
		cout << i << " - in: " << timeIn[i] << "  out: " << timeOut[i]<< '\n';
	}

	// cout << LCA(9, 12) << '\n';
	// cout << LCA(10, 8) << '\n';
	// cout << LCA(9, 11) << '\n';

  cout << LCA(3, 5) << '\n';

	// cout << LengthFromUtoV(9, 12) << '\n';
	// cout << LengthFromUtoV(10, 8) << '\n';

	return 0;
}
