/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file graph.cpp
 *  This implementations the graph data structure.
 */

#include "include/header.h"

using namespace std;

#define HASH_TABLE_HEADER "[HASH TABLE] "

/* Implementation of a graph node */
struct Node
{
  int node;
  Node *neighbors;
};

/* Implementation of graph neighbors */
struct Neighbors
{
  int node;
  Node *neighbor;
};

/* Implementation of a graph */
struct Graph
{
  int node;
  Neighbors *neighbors;
};

int main()
{
  /* Graph implementation test code */
  /* Graph */
  Graph *graph = new Graph();

  /* Graph Neighbors */
  Neighbors *neighbors = new Neighbors();
  neighbors->node = 12;

  /* Initialize graph node value */
  graph->node = 10;

  /* Add graph neighbors */
  graph->neighbors = neighbors;

  /* Print graph values */
  cout << "Graph node value: " << graph->node << "\n";
  cout << "Current graph node neighbor's memory address: " << graph->neighbors << "\n";
  cout << "Current graph node neighbor's value: " << graph->neighbors->node << "\n";

  return 0;
}
