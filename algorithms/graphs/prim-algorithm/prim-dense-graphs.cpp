#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000; // weight INF means there is no edge

struct Edge {
  int w = INF, to = -1;
};


class Graph{
	vector<pair<int,int>> *graph;
	int size;

public:
	Graph(int sz){
		size = sz;
		graph = new vector<pair<int,int>>[sz];
	}

	void addEdge(int x, int y, int w) {
		graph[x].push_back({ y, w });
		graph[y].push_back({ x, w });
	}

	int prim(){
    int total_weight = 0;
    vector<bool> selected(n, false);
    vector<Edge> min_edges(n);
    min_edges[0].w = 0;

    for (int i = 0; i < n; ++i) {
        int v = -1;

        for (int j = 0; j < n; ++j) {
          if (!selected[j] && (v == -1 || min_edges[j].w < min_edges[v].w))
            v = j;
        }

        if (min_edges[v].w == INF) {
          cout << "No MST!" << endl;
          exit(0);
        }

        selected[v] = true;
        total_weight += min_edges[v].w;

        if (min_edges[v].to != -1)
          cout << v << " " << min_edges[v].to << endl;

        for (int to = 0; to < n; ++to) {
          if (graph[v][to] < min_edges[to].w)
            min_edges[to] = {graph[v][to], v};
        }
    }

    return total_weight;
	}
};

int main() {
  // https://www.spoj.com/problems/MST/
  // Payload goes below, the expected output is 17
  /*
4 5
1 2 10
2 3 15
1 3 5
4 2 2
4 3 40
  */
	int n, m;
	cin >> n >> m;

	Graph graph(n);

	for(int i = 0; i < m; i++){
		int x, y, w;
		cin >> x >> y >> w;

		graph.addEdge(x-1, y-1, w);
	}

	cout << graph.prim() << "\n";

  return 0;
}
