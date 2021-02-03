#include <bits/stdc++.h>

using namespace std;

/**
 * Check if dist is valid.
*/
bool valid(vector<pair<int, int>> &arr, int dist)
{
  int n = arr.size(), p = -1, minY = 1000000, maxY = -1000000;

  for (int i = 0; i < n; i++)
  {
    while (p + 1 < i && arr[i].first - arr[p + 1].first >= dist)
    {
      p++;

      minY = min(minY, arr[p].second);
      maxY = max(maxY, arr[p].second);
    }

    if (p != -1)
    {
      if ((abs(minY - arr[i].second) >= dist) || (abs(maxY - arr[i].second) >= dist))
        return true;
    }
  }

  return false;
}

int distance(vector<pair<int, int>> &arr)
{
  // Assume that the max value possible is 1 million
  int low = 0, high = 1000000, ans = 0;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (valid(arr, mid))
    {
      ans = max(ans, mid);
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<pair<int, int>> arr = {{1, 3}, {2, 1}, {3, 2}, {5, 4}, {4, 0}};
  sort(arr.begin(), arr.end());

  cout << distance(arr) << "\n"; // 3

  return 0;
}
