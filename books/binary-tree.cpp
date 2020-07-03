#include <bits/stdc++.h>

using namespace std;

struct BinaryTree
{
  int val;
  BinaryTree *left;
  BinaryTree *right;
  BinaryTree() : val(0), left(nullptr), right(nullptr) {}
  BinaryTree(int v) : val(v), left(nullptr), right(nullptr) {}
};

void PrintBinaryTree(BinaryTree *tree)
{
  // if the tree is empty, do not print anything
  if (tree == nullptr)
    return;

  // print out the value of the tree
  cout << tree->val << "\n";

  // expand to the tree's left neighbor
  PrintBinaryTree(tree->left);

  // expand to the tree's right neighbor
  PrintBinaryTree(tree->right);
}

int main()
{
  // root
  BinaryTree *b_root = new BinaryTree(1);

  // root left
  BinaryTree *b_root_left = new BinaryTree(2);

  // root left children
  BinaryTree *b_root_l_left = new BinaryTree(4);
  BinaryTree *b_root_l_right = new BinaryTree(5);

  // root right
  BinaryTree *b_root_right = new BinaryTree(3);

  // root right children
  BinaryTree *b_root_r_left = new BinaryTree(6);
  BinaryTree *b_root_r_right = new BinaryTree(7);

  // link nodes
  b_root_left->left = b_root_l_left;
  b_root_left->right = b_root_l_right;
  b_root_right->left = b_root_r_left;
  b_root_right->right = b_root_r_right;
  b_root->left = b_root_left;
  b_root->right = b_root_right;

  PrintBinaryTree(b_root);

  return 0;
}
