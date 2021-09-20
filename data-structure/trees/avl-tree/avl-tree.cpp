#include <bits/stdc++.h>

using namespace std;

struct Node
{
  int val, height;
  Node *left, *right;

  Node() : height(0) {}
  Node(int V) : val(V), height(1) {}
  Node(int V, Node *L, Node *R) : val(V), left(L), right(R) {}
};

Node *rightRotate(Node *root)
{
  Node *tmp = root->left;
  Node *rr = tmp->right;

  tmp->right = root;
  root->left = rr;

  return tmp;
}

Node *leftRotate(Node *root)
{
  Node *tmp = root->right;
  Node *rl = tmp->left;

  tmp->left = root;
  root->right = rl;

  return tmp;
}

int height(Node *root)
{
  if (!root)
    return 0;

  return 1 + max(height(root->left), height(root->right));
}

Node *newNode(int x)
{
  Node *node = new Node(x);

  return node;
}

int getBalance(Node *root)
{
  return height(root->left) - height(root->right);
}

Node *insert(Node *root, int x)
{
  if (!root)
    return newNode(x);

  // No duplicates in AVL tree
  if (x == root->val)
    return root;
  else if (x < root->val)
    root->left = insert(root->left, x);
  else
    root->right = insert(root->right, x);

  int balance = getBalance(root);

  if (balance > 1)
  {
    if (getBalance(root->left) < 0)
      root->left = leftRotate(root->left); // Left-Right Case
    return rightRotate(root);              // Left Case
  }
  else if (balance < -1)
  {
    if (getBalance(root->right) > 0)
      root->right = rightRotate(root->right); // Right-Left Case
    return leftRotate(root);                  // Right Case
  }

  return root;
}

Node *deleteNode(Node *root, int x)
{
  if (!root)
    return root;

  if (x < root->val)
    root->left = deleteNode(root->left, x);
  else if (x > root->val)
    root->right = deleteNode(root->right, x);
  else
  {
    if (!root->right)
    {
      Node *tmp = root->left;
      root = NULL;
      return tmp;
    }
    else if (!root->left)
    {
      Node *tmp = root->right;
      root = NULL;
      return tmp;
    }

    Node *tmp = root->right;

    while (!tmp->left) tmp = tmp->left;

    root->val = tmp->val;
    root->right = deleteNode(root->right, tmp->val);
  }

  return root;
}

void inOrder(Node *root)
{
  if (!root)
    return;
  inOrder(root->left);
  cout << root->val << " ";
  inOrder(root->right);
}

int main()
{
  Node *root = new Node(10);

  /* Constructing tree given in
    the above figure */
  root = insert(root, 10); // Will not add 10 again to the AVL tree, as no duplicated are allowed in this implementation.
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);

  /* The constructed AVL Tree would be
                30
            / \
            20 40
            / \ \
        10 25 50
    */
  cout << "Inorder traversal of the constructed AVL tree: \n";
  inOrder(root);
  cout << "\n";

  root = deleteNode(root, 10);

  cout << "AVL tree after removing node 10: \n";
  inOrder(root);
  cout << "\n";

  return 0;
}
