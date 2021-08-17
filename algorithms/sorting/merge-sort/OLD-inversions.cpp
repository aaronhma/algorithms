#include <bits/stdc++.h>

using namespace std;

int temp_arr[200009]; // Temporary array to store sorted array

long long merge(vector<int> &arr, int low, int mid, int high) {
  int i = low, j = mid + 1, k = 0;
  long long inversions = 0;

  while (i <= mid && j <= high) {
    // i < j, so we don't need to check if i < j.
    // if arr[i] <= arr[j], then this is not an inversion.
    // An inversion is when arr[i] > arr[j], as we will need to swap those two elements when sorting.
    if (arr[i] <= arr[j]) {
      temp_arr[k] = arr[i++];
    }
    else {
      temp_arr[k] = arr[j++];

      // If arr[i] > arr[j], then all the numbers from arr[i] to arr[mid] are the first number of an inversion pair with arr[j] as the second number.
      // In other words, (mid - i + 1) is the # of numbers >= the current element.
      inversions += (mid - i + 1); // add 1 as we're including the ending points
    }

    // Go to next index
    k++;
  }

  // Copy the remaining elements of left subarray to the temp array
  while (i <= mid)
    temp_arr[k++] = arr[i++];

  // Copy the remaining elements of right subarray to the temp array
  while (j <= high)
    temp_arr[k++] = arr[j++];

  // Copy elements from the temp array to the array
  for (int m = low, p = 0; m <= high; m++, p++)
    arr[m] = temp_arr[p];

  // Return the # of inversions while merging the two arrays
  return inversions;
}

long long mergeSort(vector<int> &arr, int low, int high) {
  if (low >= high) return 0;

  // inversions: # of inversions in the array
  // mid: Middle of the array
  long long inversions = 0;
  int mid = low + (high - low) / 2;

  // Add the # of inversions on the left hand side of the array.
  inversions += mergeSort(arr, low, mid);

  // Add the # of inversions on the right hand side of the array.
  inversions += mergeSort(arr, mid + 1, high);

  // Add the # of inversions while merging the two sorted arrays.
  inversions += merge(arr, low, mid, high);

  // Return the # of inversions.
  return inversions;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  cin >> t;

  while (t--) {
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << mergeSort(arr, 0, n - 1) << "\n";
  }

  return 0;
}
