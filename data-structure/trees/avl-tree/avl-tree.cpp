// TODO: https://www.geeksforgeeks.org/avl-tree-set-1-insertion/ & https://www.youtube.com/watch?v=q4fnJZr8ztY
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<str> vstr;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;

#define f first
#define s second
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x), rend(x)
#define PB push_back
#define sz(x) (int)x.size()
#define rtn return
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define LB lower_bound
#define UB upper_bound
#define BINS binary_search
#define IT(x) for (auto it = begin(x); it != end(x); it++)
#define RIT(x) for (auto it = rbegin(x); it != rend(x); it++)
#define FORE(i, a, b) for (int i = a; i < b; i++)
#define FORI(i, a, b) for (int i = a; i <= b; i++)
#define each(i, x) for (auto &i : x)

struct Node
{
  int val, height;
  Node *left, *right;

  Node() : height(0) {}
  Node(int V) : val(V), height(1) {}
  Node(int V, Node *L, Node *R) : val(V), left(L), right(R) {}
};

int height(Node *root)
{
  if (!root)
    return 0;

  return root->height;
}

Node *newNode(int x)
{
  Node *node = new Node(x);

  return node;
}

Node *rightRotate(Node *root)
{
  Node *tmp = root->left;
  Node *rr = tmp->right;

  tmp->right = root;
  root->left = rr;

  root->height = 1 + max(height(root->left), height(root->right));
  tmp->height = 1 + max(height(tmp->left), height(tmp->right));

  return tmp;
}

Node *leftRotate(Node *root)
{
  Node *tmp = root->left;
  Node *rl = tmp->right;

  tmp->right = root;
  root->left = rl;

  root->height = 1 + max(height(root->left), height(root->right));
  tmp->height = 1 + max(height(tmp->left), height(tmp->right));

  return tmp;
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

  root->height = 1 + max(height(root->left), height(root->right));

  int balance = root->left->height - root->right->height;

  if (balance > 1 && x < root->left->val) return rightRotate(root);
  // if (balance < -1 && x > root->right->val) return leftRotate(root);

  // if (balance > 1 && x > root->left->val) {
  //   root->left = leftRotate(root->left);
  //   return rightRotate(root);
  // }

  // if (balance < -1 && x < root->right->val) {
  //   root->right = rightRotate(root->right);
  //   return leftRotate(root);
  // }

  return root;
}

void preOrder(Node *root)
{
  if (!root)
    return;
  cout << root->val << " ";
  preOrder(root->left);
  preOrder(root->right);
}

int main()
{
  Node *root = new Node;

  /* Constructing tree given in
    the above figure */
  root = insert(root, 10);
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
  cout << "Preorder traversal of the "
          "constructed AVL tree is \n";
  preOrder(root);
  cout << "\n";

  return 0;
}
