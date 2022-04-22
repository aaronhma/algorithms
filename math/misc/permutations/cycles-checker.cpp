// Order of a permutation vs order of a cycle checker
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;
typedef long long ll;

// https://codeforces.com/blog/entry/61587
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

// -- https://pastebin.com/g3umstfv --
vi compose(vi a, vi b)
{
  int n = (int)a.size();
  vi ans(n);

  for (int i = 0; i < n; i++)
    ans[i] = a[b[i] - 1];

  return ans;
}

bool isIdentity(vi arr)
{
  int n = (int)arr.size();

  for (int i = 1; i <= n; i++)
    if (arr[i - 1] != i)
      return 0;

  return 1;
}

ll pow(vi a)
{
  if (isIdentity(a))
    return 1;

  vi prev = a;

  for (ll i = 1; i <= LLONG_MAX; i++)
  {
    prev = compose(prev, a);
    if (isIdentity(prev))
      return i + 1;
  }

  return -1; // dummy value - we're guaranteed a result
}
// -- https://pastebin.com/g3umstfv --

vi _generate(vector<int> arr)
{
  vi ans;
  int n = (int)arr.size();

  while (n)
  {
    int i = rng() % n; // Generate a random value

    ans.push_back(arr[i]);

    // Move this element to the end so we can delete it in O(1)
    swap(arr[i], arr[n - 1]);
    arr.pop_back(); // O(1)

    n--; // We deleted a element
  }

  return ans;
}

vi generate(int n)
{
  vi arr(n);
  iota(arr.begin(), arr.end(), 1);
  return _generate(arr);
}

// similar to the DFS connected components
void dfs(vi arr, vb &visited, vi &curr, int i)
{
  if (visited[i])
    return;

  curr.push_back(arr[i]);
  visited[i] = 1;

  dfs(arr, visited, curr, arr[i] - 1);
}

ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;

  return gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
  return (a / gcd(a, b)) * b; // evil trick
}

ll cycles(vi arr)
{
  int n = (int)arr.size();
  ll ans = 1;

  vi curr;
  vb visited(n);

  for (int i = 0; i < n; i++)
  {
    if (visited[i])
      continue;

    curr.clear();
    dfs(arr, visited, curr, i);

    ans = lcm(ans, 1LL * (int)curr.size());
  }

  return ans;
}

int main()
{
  for (int i = 1; i <= 1e6; i++)
  {
    vi a = generate(7);
    assert(cycles(a) == pow(a));
  }

  cout << "All checks passed! :)\n";

  return 0;
}
