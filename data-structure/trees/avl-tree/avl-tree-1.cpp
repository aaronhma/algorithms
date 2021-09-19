#include <bits/stdc++.h>

using namespace std;

struct Node {
  int val, height;
  struct Node *left, *right;
};

/** Returns Node after Right Rotation */
Node *rightRotate(Node *root) {
  Node *tmp = root->left;
  Node *rr = tmp->right;

  tmp->right = root;
  root->left = rr;

  return tmp;
}

/** Returns Node after Left Rotation */
Node *leftRotate(Node *root) {
  Node *tmp = root->right;
  Node *rl = tmp->left;

  tmp->left = root;
  root->right = rl;

  return tmp;
}

/** Returns Node with minimum value in the tree */
Node *minValue(Node *root) {
  if (root->left == NULL)
    return root;
  return minValue(root->left);
}

/** Balanced Deletion */
Node *deleteNode(Node *root, int x) {
  if (root == NULL)
    return root;

  if (x < root->val)
    root->left = deleteNode(root->left, x);
  else if (x > root->val)
    root->right = deleteNode(root->right, x);
  else {
    // Node to be deleted is leaf Node or have only one Child
    if (!root->right) {
      Node *temp = root->left;
      delete(root);
      root = NULL;
      return temp;
    } else if (!root->left) {
      Node *temp = root->right;
      delete(root);
      root = NULL;
      return temp;
    }

    // Node to be deleted have both left and right subtrees
    Node *temp = minValue(root->right);
    root->val = temp->val;
    root->right = deleteNode(root->right, temp->val);
  }
  // Balancing Tree after deletion
  return root;
}

/** LevelOrder (Breadth First Search) */
void levelOrder(Node *root) {
  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {
    root = q.front();
    cout << root->val << " ";

    q.pop();

    if (root->left)
      q.push(root->left);
    if (root->right)
      q.push(root->right);
  }
}

/** Returns height of tree */
int height(Node *root) {
  if (root == NULL)
    return 0;

  return 1 + max(height(root->left), height(root->right));
}

/** Returns difference between height of left and right subtree */
int getBalance(Node *root) {
  return height(root->left) - height(root->right);
}

/** Create and return a new Node */
Node *createNode(int val) {
  Node *node = new Node();

  node->val = val;
  node->height = 0;
  node->left = NULL;
  node->right = NULL;

  return node;
}

/** Balanced Insertion */
Node *insert(Node *root, int x) {
    Node *node = createNode(x);

    if (root == NULL)
        return node;
    if (x < root->val)
        root->left = insert(root->left, x);
    else
        root->right = insert(root->right, x);

    int b = getBalance(root);

    if (b > 1) {
      if (getBalance(root->left) < 0)
        root->left = leftRotate(root->left);  // Left-Right Case
      return rightRotate(root);               // Left Case
    } else if (b < -1) {
      if (getBalance(root->right) > 0)
        root->right = rightRotate(root->right);  // Right-Left Case
      return leftRotate(root);                   // Right Case
    }

    return root;
}

int main() {
  Node *root = NULL;

  for (int i = 1; i <= 7; i++) root = insert(root, i);

/* The constructed AVL Tree would be
               4
            /    \
          2       6
       /   \    /  \
     1      3  5    7
*/
  cout << "Tree: ";
  levelOrder(root);

  root = deleteNode(root, 1);  // Delete node with value 1
  cout << "\nTree: ";
  levelOrder(root);

  root = deleteNode(root, 4);  // Delete node with value 4
  cout << "\nTree: ";
  levelOrder(root);

  return 0;
}
