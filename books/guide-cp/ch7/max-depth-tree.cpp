// Max Depth of an N-ary Tree
// https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
#include <bits/stdc++.h>

using namespace std;

// Definition for a Node.
class Node
{
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val)
  {
    val = _val;
  }

  Node(int _val, vector<Node *> _children)
  {
    val = _val;
    children = _children;
  }
};

class Solution
{
public:
  int maxDepth(Node *root)
  {
    // Our answer
    int ans = 0;

    // Use Depth-First Search to find the answer
    dfs(root, 0, ans);

    return ans;
  }

private:
  void dfs(Node *root, int depth, int &ans)
  {
    // Backtrack if this node is empty.
    if (root == NULL)
      return;

    // Update our answer
    ans = max(ans, depth + 1);

    // explore the node's neighbors
    for (Node *node : root->children)
      dfs(node, depth + 1, ans);
  }
};
