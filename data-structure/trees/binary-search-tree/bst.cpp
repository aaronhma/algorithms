#include <bits/stdc++.h>

using namespace std;

struct Node {
  int val;
  Node *left, *right;

  Node() : val(0), left(NULL), right(NULL) {}
  Node(int v) : val(v), left(NULL), right(NULL) {}
  Node(int v, Node *l, Node *r) : val(v), left(l), right(r) {}
};

// Adds node x to the BST
Node *insert(int x) {}

// Checks if node x is in the BST
Node *search(int x) {}

// Remove node x (if it exists)
Node *remove(int x) {}

int main()
{
  return 0;
}
