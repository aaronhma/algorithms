# Dynamic (Segment) Trees

An ordinary segment tree is static, which means that each node has a fixed position in the segment tree array and the structures requires a fixed amount of memory. In a dynamic segment tree, memory is allocataed only for nodes that are actually accessed during the algorithm, which can save a large amount of memory.

The nodes of a dynamic tree can be represented as structs:

```cpp
struct Node {
  int value, x, y;
  Node *left, *right;

  Node (int v, int x, int y) : value(v), x(x), y(y) {}
};
```

Here `value` is the value of the node, $[x, y]$ is the range and $left$ and $right$ point to the left and right subtree. Nodes can be created as follows:

```cpp
// create node with value 2 and range [0, 7]
Node *x = new Node(2, 0, 7);

// change value
x -> value = 5;
```
