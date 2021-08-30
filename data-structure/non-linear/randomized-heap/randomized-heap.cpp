// Minimum randomized heap
// Idea based on https://bit.ly/3BsizmJ
#include <bits/stdc++.h>

using namespace std;

// For true randomness
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// Binary Tree structure
struct Tree
{
  int val;
  Tree *left, *right;

  Tree() {}
  Tree(int V) : val(V), left(NULL), right(NULL) {}
  Tree(int V, Tree *L, Tree *R) : val(V), left(L), right(R) {}
};

Tree *heap; // Heap

// Create a new empty node
Tree *new_node(int val)
{
  Tree *node = new Tree(val);

  return node;
}

// Merge t1 and t2 into the heap
Tree *merge(Tree *t1, Tree *t2)
{
  // If t1 or t2 is empty, return the other non-empty binary tree.
  // It's guaranteed that at least 1 binary tree is non-empty.
  if (!t1 || !t2)
    return t1 ? t1 : t2;

  // Max heap: if (t2->val > t1->val)
  // Min heap: if (t2->val < t1->val)
  if (t2->val < t1->val)
    swap(t1, t2); // Make t1 the smallest (min)/biggest (max) heap

  // If random number is odd, swap the left and right children.
  if (rng() & 1)
    swap(t1->left, t1->right);

  // Left child of t1 will be merged with t2.
  t1->left = merge(t1->left, t2);

  return t1;
}

// Add element x to the heap
void push(int x)
{
  heap = merge(new_node(x), heap);
}

// Remove min/map element from heap
void pop() {
  heap = merge(heap->left, heap->right);
}

// Return top element of heap
int top() {
  // Max/min element of empty heap is 0
  if (!heap) return 0;

  return heap->val;
}

// In-order traversal of heap binary tree
void print(Tree *d) {
  if (d == NULL) return;
  print(d->left);
  cout << d->val << " ";
  print(d->right);
}

int main()
{
  vector<int> arr {10000, 20, 30, 40, 15, 25, 2, 3, 200, 150};

  for (int i : arr) {
    push(i);
    cout << top() << "\n";
  }

  cout << "======\nItems in heap:\n";
  print(heap);
  cout << "\n======\n";

  for (int i : arr) {
    pop();
    cout << top() << "\n";
  }

  return 0;
}
