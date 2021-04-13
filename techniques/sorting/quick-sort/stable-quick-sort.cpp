#include <bits/stdc++.h>

using namespace std;

struct Tag
{
  int val, idx;
};

// typedef vector<int> vi;
typedef vector<Tag> vi;

#define sz(x) x.size()

// Stable quick-sort implementation
vi quickSort(vi &arr)
{
  // Get size of the array
  int n = sz(arr);

  // If the array is empty or of size 1, we have nothing to sort.
  if (n <= 1)
    return arr;

  // pivot:
  // val:
  int pivot = arr[n / 2].idx, val = arr[n / 2].val;
  cout << "PIVOT : " << pivot << " | " << val << "\n";

  // low: All the elements < pivot value.
  // high: All the elements > pivot value.
  // If we have an element == pivot value,
  vi low, high;

  for (int i = 0; i < n; i++)
  {
    if (i == (n / 2)) continue;

    if (arr[i].val < val)
    {
      low.push_back(arr[i]);
    }
    else if (arr[i].val > val)
    {
      high.push_back(arr[i]);
    }
    else
    {
      if (i < pivot)
        low.push_back(arr[i]);
      else
        high.push_back(arr[i]);
    }
  }

  vi start = quickSort(low), end = quickSort(high);

  start.push_back({val, pivot});

  for (auto i : end)
    start.push_back(i);

  return start;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vi arr {{10, 1}, {7, 1}, {8, 1}, {9, 2}, {1, 1}, {5, 1}, {9, 1}};
  arr = quickSort(arr);

  // {9, 2} will come before {9, 1} (stable quick sort)
  for (Tag i : arr)
    cout << i.val << " | " << i.idx << "\n";
  cout << "\n";

  return 0;
}
