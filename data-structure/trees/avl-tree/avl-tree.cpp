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

// Returns the node after right rotation
Node *rightRotate(Node *root)
{
  Node *tmp = root->left;
  Node *rr = tmp->right;

  tmp->right = root;
  root->left = rr;

  return tmp;
}

// Returns the node after left rotation
Node *leftRotate(Node *root)
{
  Node *tmp = root->right;
  Node *rl = tmp->left;

  tmp->left = root;
  root->right = rl;

  return tmp;
}

// Finds the height of the tree
int height(Node *root)
{
  if (!root)
    return 0;

  return 1 + max(height(root->left), height(root->right));
}

// Creates a new node with x as the value
Node *newNode(int x)
{
  Node *node = new Node(x);

  return node;
}

// The balance (aka balance factor) of the tree is the height of the left subtree - the height of the right subtree
int getBalance(Node *root)
{
  return height(root->left) - height(root->right);
}

Node *insert(Node *root, int x)
{
  // If the AVL tree is empty OR we found the correct position of node x in the AVL tree, add the new node.
  if (!root)
    return newNode(x);

  // No duplicates in AVL tree
  if (x == root->val)
    return root;

  // Find the position of where x should be in the AVL tree.
  else if (x < root->val)
    root->left = insert(root->left, x);
  else
    root->right = insert(root->right, x);

  // Get the balance factor
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

// Balanced Deletion
Node *deleteNode(Node *root, int x)
{
  // Return the empty tree if the tree is empty
  if (!root)
    return root;

  // Find the position of node x
  if (x < root->val)
    root->left = deleteNode(root->left, x);
  else if (x > root->val)
    root->right = deleteNode(root->right, x);

  // Node x found, delete it
  else
  {
    // If there only is a left subtree at x, delete the right subtree.
    if (!root->right)
    {
      Node *tmp = root->left;
      root = NULL;
      return tmp;
    }

    // If there only is a right subtree at x, delete the left subtree.
    else if (!root->left)
    {
      Node *tmp = root->right;
      root = NULL;
      return tmp;
    }

    // If node x contains 2 children, node x is replaced by the smallest node in the right subtree (OR the biggest node in the left subtree).
    Node *tmp = root->right;

    while (!tmp->left) tmp = tmp->left;

    root->val = tmp->val; // Update the value at node x

    // Delete the smallest node in the right subtree.
    root->right = deleteNode(root->right, tmp->val);
  }

  // Return the tree after deleting the node x
  return root;
}

// Add nodes in the AVL tree to the answer array
void addNodes(Node *root, vector<pair<int, int>> &ans, int height)
{
  if (!root)
    return;
  addNodes(root->left, ans, height + 1);
  ans.push_back({root->val, height});
  addNodes(root->right, ans, height + 1);
}

// Print the AVL tree level-by-level
void print(Node *root) {
  vector<pair<int, int>> ans;
  addNodes(root, ans, 0);

  sort(ans.begin(), ans.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
  });

  int n = (int)ans.size();

  cout << "Root of AVL tree: ";

  for (int i = 0; i < n; i++) {
    // Next level
    if (i != 0 && ans[i].second != ans[i - 1].second) cout << "\nNodes in level " << ans[i].second << ": ";
    cout << ans[i].first << " ";
  }
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
  print(root);
  cout << "\n";

  root = deleteNode(root, 10);

  cout << "AVL tree after removing node 10: \n";
  print(root);
  cout << "\n";

  return 0;
}
