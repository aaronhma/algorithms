#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> &arr) {
  int n = arr.size();

  // Go through the index where we will place the next min element into the sorted array
  // n - 1, as the last element is guaranteed to be the last element
  for (int i = 0; i < n - 1; i++) {
    // Find the minimum element in the unsorted array
    int min_index = i;

    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[min_index])
        min_index = j;
    }

    // Swap the found minimum element with the element at position (the place where we'll put the minimum element)
    swap(arr[min_index], arr[i]);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {64, 25, 12, 22, 11};

  sort(arr);

  for (int i : arr) cout << i << " ";

  cout << "\n";

  return 0;
}
