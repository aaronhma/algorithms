#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// See https://graphics.stanford.edu/~seander/bithacks.html#RoundUpPowerOf2
ll nextPowerOf2(ll n)
{
  n--;
  n |= n >> 1;
  n |= n >> 2;
  n |= n >> 4;
  n |= n >> 8;
  n |= n >> 16;
  n++;
  return n;
}

struct SegmentTree
{
  ll size; // Size of array
  vector<ll> segment_tree;

  // Create the segment tree
  void init(ll n)
  {
    // Increase size of array to the closest power of 2
    size = nextPowerOf2(n);

    // Resize the segment tree by 2 * size to avoid overflow
    segment_tree.resize(2 * size);
  }

  // lx, rx - Left and right boundaries of current segment at node x
  // x - Current node index
  // i - Index to be updated
  // val - Value of the data we want to update
  void set(ll i, ll val, ll x, ll lx, ll rx)
  {
    // If the size of the current segment is 1, then this is a leaf node, add/update the value.
    if (rx - lx == 1)
    {
      segment_tree[x] = val;
      return;
    }

    ll mid = lx + (rx - lx) / 2; // Find middle position of segment (no-overflow way)

    // If index to be updated is < mid, then x is on the left subtree.
    if (i < mid)
      set(i, val, 2 * x + 1, lx, mid); // Left child index in array-based tree representation is 2x + 1
    else                               // Otherwise, x is on the right subtree
      set(i, val, 2 * x + 2, mid, rx); // Right child index in array-based tree representation is 2x + 2

    segment_tree[x] = segment_tree[2 * x + 1] + segment_tree[2 * x + 2]; // Update current parent node's sum to the sum of it's children
  }

  // lx, rx - Left and right boundaries of current segment at node x
  // a, b - Left and right boundaries we want to sum
  // x - Current node index
  // Calculate the sum from [a, b)
  ll sum(ll a, ll b, ll x, ll lx, ll rx)
  {
    // Case 1: [lx, rx] is not in the target sum [a, b)
    if (lx >= b || a >= rx)
      return 0;

    // Case 2: [lx, rx] is inside the target sum [a, b)
    if (a <= lx && rx <= b)
      return segment_tree[x];

    // Case 3: Some parts of the segment [lx, rx] contains the target sum [a, b). Search this node's children to find the sum.
    ll mid = lx + (rx - lx) / 2;

    return sum(a, b, 2 * x + 1, lx, mid) + sum(a, b, 2 * x + 2, mid, rx);
  }

  // Helper functions:
  void set(ll i, ll val)
  {
    set(i, val, 0, 0, size);
  }

  ll sum(ll a, ll b)
  {
    return sum(a, b, 0, 0, size);
  }
};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, m, a, b, c;
  cin >> n >> m;

  SegmentTree tree;
  tree.init(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a;
    tree.set(i, a);
  }

  while (m--)
  {
    cin >> a >> b >> c;

    if (a == 1)
    {
      // update element
      tree.set(b, c);
    }
    else
    {
      // sum query
      // Note: For index c to be included in the sum, ++c must be done.
      cout << tree.sum(b, c) << "\n";
    }
  }

  return 0;
}
