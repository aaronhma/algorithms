#include <bits/stdc++.h>

using namespace std;

int findC(vector<int> &arr, int k)
{
  // low = max(arr), high = sum(arr)
  int low = arr[0], high = 0;

  for (int i : arr)
  {
    low = max(low, i);
    high += i;
  }

  // As long as there is a smaller c...
  while (low < high)
  {
    // mid: Current c
    // weight: Curren weight
    // Used: # of trucks/boats used
    int mid = low + (high - low) / 2, weight = 0, used = 1;

    // Simulate loading the weight
    for (int i : arr)
    {
      // Add weight into current weight
      weight += i;

      // If the weight exceeds the max capacity, we need to use a new truck/boat
      if (weight > mid)
      {
        weight = i;
        used++;
      }
    }

    // Used > k trucks/boats - this c is impossible
    if (used > k)
    {
      low = mid + 1;
    }

    // Used < k trucks/boats - this c is possible
    else
    {
      high = mid;
    }
  }

  // At this point, low = high, so we can return either of them
  return low;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {7, 3, 2, 3, 1, 4};

  cout << findC(arr, 3) << "\n"; // 8

  return 0;
}
