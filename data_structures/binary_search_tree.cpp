/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file binary_search_tree.cpp
 *  This implementations the binary search tree data structure.
 */

#include "include/header.h"

using namespace std;

/* Binary search tree implementation */
struct BinarySearchTree
{
  int val;
  BinarySearchTree *parent;
  BinarySearchTree *left;
  BinarySearchTree *right;
};

/* Search function is from The Algorithm Design Manual */
int search(BinarySearchTree *tree, int x)
{
  if (tree->val == x)
    return tree->val;
  if (x < tree->val)
    return search(tree->left, x);
  else
    return search(tree->right, x);
}

int main()
{
  /* Binary search tree test code */
  BinarySearchTree tree1;
  BinarySearchTree tree2;
  BinarySearchTree tree3;

  tree1.val = 1; // parent node
  tree2.val = 2; // child node
  tree3.val = 3; // child node

  tree1.left = &tree2;
  tree1.right = &tree3;

  tree2.parent = &tree1;
  tree3.parent = &tree1;

  cout << "Tree 1 value: " << tree1.val << "\n";
  cout << "Tree 1 left value: " << tree1.left->val << "\n";
  cout << "Tree 1 right value: " << tree1.right->val << "\n";

  int t = search(&tree1, 3);
  cout << t << "\n";

  return 0;
}
