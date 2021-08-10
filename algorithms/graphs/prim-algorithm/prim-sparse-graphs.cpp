#include <bits/stdc++.h>

using namespace std;

const int INF = 1000000000; // weight INF means there is no edge

struct Edge {
    int w = INF, to = -1;
    bool operator<(Edge const& other) const {
        return make_pair(w, to) < make_pair(other.w, other.to);
    }
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
    vector<Edge> min_edges(n);
    min_edges[0].w = 0;
    set<Edge> q;

    q.insert({0, 0});

    vector<bool> selected(n, false);

    for (int i = 0; i < n; ++i) {
      if (q.empty()) {
        cout << "No MST!" << endl;
        exit(0);
      }

      int v = q.begin()->to;
      selected[v] = true;
      total_weight += q.begin()->w;
      q.erase(q.begin());

      if (min_edges[v].to != -1)
        cout << v << " " << min_edges[v].to << endl;

      for (Edge e : graph[v]) {
        if (!selected[e.to] && e.w < min_edges[e.to].w) {
          q.erase({min_edges[e.to].w, e.to});
          min_edges[e.to] = {e.w, v};
          q.insert({e.w, e.to});
        }
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
