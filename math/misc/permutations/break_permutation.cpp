// Break permutation down into a series of swaps
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;

#define n 6 // <-- update

// WARNING: Showing the steps will use a LOT of computer memory.
// #define DEBUG_ // <-- uncomment to see steps

// https://codeforces.com/blog/entry/61587
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

vi generate(vector<int> arr)
{
  int _n = (int)arr.size(), nxt = 0;
  vi ans(_n);

  while (_n)
  {
    int i = rng() % _n; // Generate a random value

    ans[nxt++] = arr[i];

    // Move this element to the end so we can delete it in O(1)
    swap(arr[i], arr[_n - 1]);
    arr.pop_back(); // O(1)

    _n--; // We deleted a element
  }

  return ans;
}

vector<pii> printSwap(vi arr)
{
  // reverse bubble sort
  vector<pii> steps;

  for (int i = 0; i <= n - 2; i++)
  {
    for (int j = 0; j <= n - i - 2; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
        steps.push_back({j, j + 1});
      }
    }
  }

  reverse(steps.begin(), steps.end());

#ifdef DEBUG_
  for (pii i : steps)
  {
    cout << "swap: arr[" << i.first << "], arr[" << i.second << "]\n";
  }
#endif // DEBUG_

  return steps;
}

void check(vector<pii> steps, vi &arr)
{
  vi ans(n);
  iota(ans.begin(), ans.end(), 1);

  for (pii i : steps)
    swap(ans[i.first], ans[i.second]);

  assert(ans == arr);
}

int main()
{
  vi arr(n);
  iota(arr.begin(), arr.end(), 1);

  for (int i = 1; i <= 1e6; i++)
  {
    vi tmp = generate(arr);
    check(printSwap(tmp), tmp);
  }

  cout << "All tests passed! :)\n";

  return 0;
}
