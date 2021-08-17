#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> &arr)
{
  int n = arr.size();

  // n - 1 operations in the worst case
  // Because a swap requires at least 2 elements, if we have n elements, we only have n - 1 consecutive pairs.
  for (int i = 0; i < n - 1; i++)
  {
    // Optimization trick: If no elements were swapped in this iteration, all future iterations will not swap anything in the array.
    bool swapped = false;

    // Optimization trick: Each step moves the "current being sorted" maximum element to the correct position in the back. Because of this, we only need to check up to n - i - 1.
    for (int j = 0; j < n - i - 1; j++)
    {
      // If elements are in wrong order, swap them.
      if (arr[j] > arr[j + 1]) {
        // Swap elements
        swap(arr[j], arr[j + 1]);

        // We had to swap something
        swapped = true;
      }
    }

    // If we didn't swap anything, then all future loops are useless. Exit to save time.
    if (!swapped) break;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {7, 4, 3, 2, 1};

  sort(arr);

  for (int i : arr)
    cout << i << " ";

  cout << "\n";

  return 0;
}
