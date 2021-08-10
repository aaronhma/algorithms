# Cycle Detection

## Finding Negative Cycles

The Bellman-Ford algorithm allows you to check whether there exists a cycle of negative weight in the graph, and if it does, find one of these cycles.

Do $n$ iterations of the Bellman-Ford algorithm. If there were no changes on the last iteration, there is no cycle of negative weight in the graph. Otherwise, take a vertex with the distance which has changed, and go from it via its ancestors until a cycle is found. This cycle will be the negative weight cycle.
