#include <bits/stdc++.h>

using namespace std;

int maxGroups(vector<int> &arr, int k)
{
  // low = 0
  // high = sum(arr)
  int low = 0, high = 0, ans = 0;

  for (int i : arr)
    high += i;

  // As long as we haven't exhausted the search space, continue...
  while (low <= high)
  {
    int mid = low + (high - low) / 2, c = 0;

    // validate
    for (int i : arr)
      c += min(mid, i);

    // Check if mid is valid
    if (c >= mid * k)
    {
      // Update answer
      ans = max(ans, mid);
      low = mid + 1;
    }
    else
    {
      // mid cannot be valid, update high
      high = mid - 1;
    }
  }

  // Return answer
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3, 4, 5, 6, 7};

  cout << maxGroups(arr, 5) << "\n"; // 5

  return 0;
}
