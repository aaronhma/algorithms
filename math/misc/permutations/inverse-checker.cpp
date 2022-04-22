// Check if the inverse of a random permutation is correct
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

// -- https://pastebin.com/YAD59aZE --

// https://codeforces.com/blog/entry/61587
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// -- https://pastebin.com/X7dRCpgQ --
// compose AB
vi compose(vi a, vi b) {
  int n = (int)a.size();
  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[i] = a[b[i] - 1];

  return ans;
}

// https://pastebin.com/DrgrAsJL
// Returns `true` if `arr` is an identity permutation, `false` otherwise.
bool isIdentity(vi arr) {
  int n = (int)arr.size();

  for (int i = 1; i <= n; i++)
    if (arr[i - 1] != i) return 0;

  return 1;
}

// Returns `true` if `a` and `b` are "inverses" of each other, `false` otherwise.
bool isInverse(vi a, vi b) {
  // If a is the inverse of b, then b is the inverse of a.
  return isIdentity(compose(a, b));
}
// -- https://pastebin.com/DrgrAsJL --

// -- https://pastebin.com/X7dRCpgQ --
vi generate(vector<int> arr)
{
  int n = (int)arr.size(), nxt = 0;
  vi ans(n);

  while (n)
  {
    int i = rng() % n; // Generate a random value

    ans[nxt++] = arr[i];

    // Move this element to the end so we can delete it in O(1)
    swap(arr[i], arr[n - 1]);
    arr.pop_back(); // O(1)

    n--; // We deleted a element
  }

  return ans;
}
// -- https://pastebin.com/X7dRCpgQ --

vi inverse(vi arr) {
  int n = (int)arr.size();

  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[arr[i] - 1] = i + 1;

  return ans;
}
// -- https://pastebin.com/YAD59aZE --

void test() {
  vi arr{1, 2, 3, 4};

  for (int i = 1; i <= 1e6; i++) {
    vi tmp = generate(arr);

    assert(isInverse(tmp, inverse(tmp)));
  }

  cout << "All checks passed! :)\n";
}

int main()
{
  test();

  return 0;
}
