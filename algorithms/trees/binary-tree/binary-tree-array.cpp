#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

#define INF_INT INT_MAX

vi tree(12, INF_INT);

void init(int val) {
  if (tree[0] == INF_INT)
    tree[0] = val;
  else
    cout << "ERROR: The Binary Tree is already initialized!\n";
}

void add_left(int parent, int val) {
  tree[(2 * parent) + 1] = val;
}

void add_right(int parent, int val) {
  tree[(2 * parent) + 2] = val;
}

void print() {
  for (int i : tree) {
    if (i != INF_INT)
      cout << i << " ";
  }

  cout << "\n";
}

int main()
{
  init(1);
  add_left(0, 2);
  add_right(0, 3);
  add_right(1, 5);
  add_left(0, 2);
  add_left(2, 4);
  add_right(2, 7);
  add_left(5, 9);
  print();

  return 0;
}
