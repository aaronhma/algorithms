#include <bits/stdc++.h>

using namespace std;

// O(n)
// Returns the index of the last element (arr[high]) after moving all the elements smaller than arr[high] to the front and all the elements bigger than arr[high] to the back
int partitionIndex(vector<int> &arr, int low, int high) {
  // pivotIndex: pivot value index
  int pivotIndex = low;

  // arr[high] is the pivot

  for (int i = low; i < high; i++) {
    // Put elements smaller than or equal to the pivot on the left and greater elements on the right of the pivot.
    if (arr[i] < arr[high]) {
      // swap elements
      swap(arr[i], arr[pivotIndex]);
      pivotIndex++;
    }
  }

  // final swap
  swap(arr[pivotIndex], arr[high]);

  // Return the pivot value index
  return pivotIndex;
}

// O(n log n)
void sort(vector<int> &arr, int low, int high) {
  // Base case: If left >= right, we cannot sort the array, as the pivot index would be incorrect.
  if (low >= high) return;

  // Get the pivot index and put all elements <= pivot on the left side of the pivot and all the element > pivot on the right side of the pivot.
  int pivotIndex = partitionIndex(arr, low, high);

  // Sort all the elements on the left of the pivot in the range[low:pivotIndex - 1]
  sort(arr, low, pivotIndex - 1);

  // NOTE: Don't sort the element at arr[pivot] (because it's the pivot and it's already sorted)

  // Sort all the elements on the right of the pivot in the range[pivotIndex + 1:high]
  sort(arr, pivotIndex + 1, high);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {10, 7, 8, 9, 1, 5};

  sort(arr, 0, arr.size() - 1);

  for (int i : arr) cout << i << " ";

  cout << "\n";

  return 0;
}
