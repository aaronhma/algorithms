// Given $n$, generate a random permutation of size $n$.
#include <bits/stdc++.h>

using namespace std;

// https://codeforces.com/blog/entry/61587
mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count());

void _generate(vector<int> arr)
{
  int n = (int)arr.size();

  while (n)
  {
    int i = rng() % n; // Generate a random value

    cout << arr[i] << " ";

    // Move this element to the end so we can delete it in O(1)
    swap(arr[i], arr[n - 1]);
    arr.pop_back(); // O(1)

    n--; // We deleted a element
  }

  cout << "\n";
}

void generate(int n) {
  vector<int> arr(n);
  iota(arr.begin(), arr.end(), 1);
  _generate(arr);
}

int main()
{
  generate(4);

  return 0;
}
