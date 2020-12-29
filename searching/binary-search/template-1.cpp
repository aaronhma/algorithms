#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> arr, int target)
{
  int low = 0, high = arr.size() - 1;

  while (low <= high)
  {
    long long mid = low + (high - low) / 2;
    long long guess = arr[mid];

    if (guess == target)
    {
      return mid;
    }
    else if (guess < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  return -1;
}
