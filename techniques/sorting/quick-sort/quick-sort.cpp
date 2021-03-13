// https://www.geeksforgeeks.org/quick-sort/
#include <bits/stdc++.h>

using namespace std;

// O(n) Linear Time
// @description: Move pivot value at its correct position(index) in sorted array and put all smaller
//      elements (< pivot) before pivot, and put all greater elements (> pivot) after pivot
// - 1. Picking last element as pivot
// - 2. Moving any element SMALLER than (< pivot) to its LEFT
// - 3. Moving any element GREATER than (> pivot) to its RIGHT
// - 4. places the pivot element at its correct position in sorted array
// - @return the Pivot Index
int partitionIndex(vector<int> &arr, int low, int high)
{
  // Index of smaller element and indicates the right position of pivot found so far
  int pivotIndex = low;
  // Picking last element as pivot
  int pivot = arr[high];

  // cout << "low | " << low << " ::: high | " << high << " ::: pivot | " << pivot << "\n";
  // {10, 7, 1, 5}

  for (int i = low; i < high; i++)
  {
    // If current element is smaller than the pivot
    if (arr[i] < pivot)
    {
      if (i != low) swap(arr[pivotIndex], arr[i]);
      // cout << "arr[i] | " << arr[i] << " ::: arr[pivotIndex] | " << arr[pivotIndex] << "\n";
      pivotIndex++;
      // 1st: {10, 7, 1, 5} => {1, 7, 10, 5}  pivotIndex: 1

      // 2nd never called: {1, 5, 10, 7} => {1, 5, 10, 7}  pivotIndex: 2
    }
  }

  // cout << "PIVOT | " << pivotIndex << "\n";
  // Moving the pivot element to the correct pivotIndex position
  // pivot element's left & right part has been sorted
  swap(arr[pivotIndex], arr[high]);
  // 1st: {1, 5, 10, 7}  pivotIndex: 1
  // 2nd: {1, 5, 10, 7} => {1, 5, 7, 10}  pivotIndex: 2

  // Return the pivot value index
  return pivotIndex;
}

// O(n log n)
void sort(vector<int> &arr, int low, int high)
{
  // Base case: If left >= right, we cannot sort the array, as the pivot index would be incorrect.
  if (low >= high)
    return;

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

  // vector<int> arr = {10, 7, 8, 9, 1, 5};
  // vector<int> arr = {10, 7, 1, 5};

  // need to use `pivotIndex - 1` trick to avoid the extra call
  int n;
  cin >> n;

  vector<int> arr(n);
  // vector<int> arr = {2, 4, 3};
  for (int i = 0; i < n; i++) cin >> arr[i];
  // vector<int> arr = {2, 1, 3};

  sort(arr, 0, arr.size() - 1);

  for (int i : arr)
    cout << i << "\n";

  return 0;
}
