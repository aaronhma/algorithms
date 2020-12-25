/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file tree.cpp
 *  This implementations the tree data structure.
 */

#include "../include/header.h"

using namespace std;

struct Tree
{
  int data;
  Tree *left;
  Tree *right;
};

int main()
{
  Tree *tree = new Tree();
  Tree *left_tree = new Tree();
  Tree *right_tree = new Tree();

  tree->data = 1;
  left_tree->data = 2;
  right_tree->data = 3;

  tree->left = left_tree;
  tree->right = right_tree;

  cout << tree->data << "\n";
  cout << tree->left << "\n";
  cout << tree->right << "\n";
  cout << tree->left->data << "\n";
  cout << tree->right->data << "\n";

  return 0;
}
