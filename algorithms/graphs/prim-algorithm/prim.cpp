#include <bits/stdc++.h>

using namespace std;

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
		// most important stuff: Init a Min Heap
		priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> PQ;

		// visited array that denotes whether a node has been included in MST or Not
		bool * visited = new bool[size]{0};
		int minWeight = 0;

		PQ.push({0, 0}); // weight, node

		while(!PQ.empty()){
			// pick out the edge with min weight
			auto currNode = PQ.top();
			PQ.pop();

      int node = currNode.second, w = currNode.first;

      //discard the edge, and continue
			if (visited[node]) continue;

      visited[node] = 1;

			// otherwise take the current edge
			minWeight += w;

			// add the new edges in the queue
			for (auto i : graph[node])
				if (visited[i.first] == 0)
          PQ.push({i.second, i.first});
		}

		return minWeight;
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
