#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int val, count = 1;
  Node *left, *right;

  Node() {}
  Node(int v) : val(v), left(NULL), right(NULL) {}
  Node(int v, Node *l, Node *r) : val(v), left(l), right(r) {}
};

// Adds node x to the BST
Node *insert(Node *root, int x)
{
  if (!root) return new Node(x);

  if (x == root->val)
  {
    root->count++;
    return root;
  }

  if (x < root->val)
    root->left = insert(root->left, x);
  else
    root->right = insert(root->right, x);

  return root;
}

// Checks if node x is in the BST
bool exists(Node *root, int x)
{
  if (!root)
    return false;
  if (root->val == x)
    return true;

  if (x <= root->val)
    return exists(root->left, x);

  return exists(root->right, x);
}

// Remove node x (if it exists)
Node *remove(Node *root, int x)
{
  if (!root)
    return NULL;

  if (x < root->val)
    root->left = remove(root->left, x);
  else if (x > root->val)
    root->right = remove(root->right, x);
  else
  {
    if (root->left == NULL && root->right == NULL)
      return NULL;

    if (root->count != 1)
    {
      root->count--;
      return root;
    }

    if (root->left == NULL)
      return root->right;
    if (root->right == NULL)
      return root->left;

    Node *tmp = root->right;

    while (tmp->left != NULL)
      tmp = tmp->left;

    root->val = tmp->val;
    root->right = remove(root->right, tmp->val);
  }

  return root;
}

// In-Order Tree Traversal (prints BST in sorted order)
void print(Node *root)
{
  if (!root)
    return;

  print(root->left);
  cout << root->val << " exists " << root->count << " times in the BST.\n";
  print(root->right);
}

int main()
{
  Node *bst = NULL;
  bst = insert(bst, 5);

  insert(bst, 1);
  insert(bst, 3);
  insert(bst, 5);
  insert(bst, 5);
  insert(bst, 20);
  insert(bst, 30);

  print(bst);
  cout << "\n";

  cout << boolalpha << exists(bst, 20) << "\n";
  bst = remove(bst, 5);
  bst = remove(bst, 5);
  print(bst);
  cout << "\n";

  return 0;
}
