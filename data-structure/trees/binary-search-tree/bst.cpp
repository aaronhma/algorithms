#include <bits/stdc++.h>

using namespace std;

struct Node {
  int val;
  Node *left, *right;

  Node() {}
  Node(int v) : val(v), left(NULL), right(NULL) {}
  Node(int v, Node *l, Node *r) : val(v), left(l), right(r) {}
};

// Adds node x to the BST
Node *insert(Node *root, int x) {
  if (!root) return new Node(x);

  if (x <= root->val)
    root->left = insert(root->left, x);
  else
    root->right = insert(root->right, x);

  return root;
}

// Checks if node x is in the BST
bool search(Node *root, int x) {
  if (!root) return false;
  if (root->val == x) return true;

  return search(root->left, x) || search(root->right, x);
}

// Remove node x (if it exists)
Node *remove(Node *root, int x) {
  if (!root) return NULL;
  if (root->left == NULL || root->right == NULL) return NULL;
}

void print(Node *root) {
  if (!root) return;

  print(root->left);
  cout << root->val << " ";
  print(root->right);
}

int main()
{
  Node *bst = insert(bst, 5);
  print(bst);
  cout << "\n";

  bst = insert(bst, 5);

  print(bst);
  cout << "\n";

  return 0;
}
