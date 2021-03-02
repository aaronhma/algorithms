#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> &arr)
{
  int n = arr.size();

  // n operations in the worst cast
  for (int i = 0; i < n; i++)
  {
    // Optimization trick: Each step moves the "current being sorted" maximum element to the correct position in the back. Because of this, we only need to check up to n - i - 1.
    for (int j = 0; j < n - i - 1; j++)
    {
      // If elements are in wrong order, swap them.
      if (arr[j] > arr[j + 1])
        swap(arr[j], arr[j + 1]);
    }
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
