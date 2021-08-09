#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

// This class represents a directed graph using
// adjacency list representation
class Graph {
  int V; // No. of vertices

  // In a weighted graph, we need to store vertex
  // and weight pair for every edge
  list<pair<int, int>> *adj;

public:
  Graph(int V); // Constructor

  // function to add an edge to graph
  void addEdge(int u, int v, int w);

  // prints shortest path from s
  void shortestPath(int s, int W);
};

// Allocates memory for adjacency list
Graph::Graph(int V)
{
  this->V = V;
  adj = new list<pair<int, int>>[V];
}

// adds edge between u and v of weight w
void Graph::addEdge(int u, int v, int w)
{
  adj[u].push_back(make_pair(v, w));
  adj[v].push_back(make_pair(u, w));
}

// Prints shortest paths from src to all other vertices.
// W is the maximum weight of an edge
void Graph::shortestPath(int src, int W) {
  /* With each distance, iterator to that vertex in
	its bucket is stored so that vertex can be deleted
	in O(1) at time of updation. So
	distance[i].first = distance of ith vertex from src vertex
	dits[i].second = iterator to vertex i in bucket number */
  vector<pair<int, list<int>::iterator>> distance(V);

  // Initialize all distances as infinite (INF)
  for (int i = 0; i < V; i++)
    distance[i].first = INF;
  // Distance from node x to itself is 0
  distance[src].first = 0;

  // Total bucket is going to be created
  int MAX_BUCKET_SIZE = W * V;

  // Create buckets buckets[].
  // buckets[i] keep vertex of distance label i
  list<int> buckets[MAX_BUCKET_SIZE + 1];

  // Put the source to the first bucket
  buckets[0].push_back(src);

  int idx = 0;

  while (true) {
    // Go sequentially through buckets till one non-empty bucket is found
    while (buckets[idx].size() == 0 && idx < MAX_BUCKET_SIZE)
      idx++;

    // If all buckets are empty, we are done.
    if (idx == MAX_BUCKET_SIZE)
      break;

    // Select the node with the minimum temporary distance label
    // Take top vertex from bucket and pop it
    int u = buckets[idx].front();
    buckets[idx].pop_front();

    // Process all adjacents of extracted vertex 'u' and
    // update their distanced if required.
    for (auto i = adj[u].begin(); i != adj[u].end(); ++i) {
      // get node b and weight of the edge between node a and node b
      int v = (*i).first;
      int weight = (*i).second;

      int du = distance[u].first;
      int dv = distance[v].first;

      // if the current node's distance + the extra weight
      // is less than the distance at node b, update it
      int new_dist = du + weight;

      // If there is shorted path to v through u.
      if (new_dist < dv) {
        // If dv is not INF then it must be in buckets[dv]
        // bucket, so erase its entry using iterator
        // in O(1)
        if (dv != INF)
          buckets[dv].erase(distance[v].second);

        // updating the distance
        distance[v].first = new_dist;
        dv = distance[v].first;

        // pushing vertex v into updated distance's bucket
        buckets[dv].push_front(v);

        // storing updated iterator in distance[v].second
        distance[v].second = buckets[dv].begin();
      }
    }
  }

  for (int i = 1; i <= V; i++) {
    // Distance from node 1 -> node 1: 0
    // Distance from node 1 -> node 2: 2
    // Distance from node 1 -> node 3: 3
    // Distance from node 1 -> node 4: 6
    // Distance from node 1 -> node 5: 4
    // Distance from node 1 -> node 6: 6
    cout << "Distance from node " << src << " -> node " << i << ": " << distance[i].first << "\n";
  }
}

// Driver program to test methods of graph class
int main() {
  // create the graph given in above fugure
  int V = 9;
  Graph g(V);

  // making above shown graph
  g.addEdge(1, 2, 2);
  g.addEdge(1, 3, 4);
  g.addEdge(2, 3, 1);
  g.addEdge(2, 5, 2);
  g.addEdge(2, 4, 4);
  g.addEdge(3, 5, 3);
  g.addEdge(4, 6, 2);
  g.addEdge(5, 4, 3);
  g.addEdge(5, 6, 2);

  // maximum weighted edge - 4
  g.shortestPath(1, 4);

  return 0;
}
