#include <bits/stdc++.h>

using namespace std;

/**
 * Merge two arrays
 * See the following for an explanation for what this function does:
 * https://www.geeksforgeeks.org/merge-two-sorted-arrays/
*/
// O(n)
void merge(vector<int> &arr, int left, int mid, int right)
{
  // n1: Size of array #1
  // n2: Size of array #2
  int n1 = mid - left + 1, n2 = right - mid;

  // Create the arrays
  vector<int> arr1(n1), arr2(n2);

  // Fill in the arrays
  for (int i = 0; i < n1; i++)
    arr1[i] = arr[left + i]; // left + i to get correct index (because arr1 contains elements less than the mid index)
  for (int i = 0; i < n2; i++)
    // NOTE: We use + 1 as if i = 0, then arr2[0] would be arr[mid], which is incorrect, as arr[mid] is already in arr1.
    arr2[i] = arr[mid + i + 1]; // mid + i + 1 to get correct index (because arr2 contains elements more than the mid index)

  // i: current index in array 1
  // j: current index in array 2
  // k: Index where we start putting data into the array
  int i = 0, j = 0, k = left;

  // Put data into the array
  while (i < n1 && j < n2)
  {
    // Stable sorting algorithm as elements on the left side are in arr1 and elements on the right are in arr2 and we always take elements on the left in case of both elements are the same.
    if (arr1[i] <= arr2[j])
      arr[k] = arr1[i++];
    else
      arr[k] = arr2[j++];

    // Go to next index
    k++;
  }

  // NOTE: Only one array contains elements we need to copy into the array.

  // Copy remaining elements from arr1 to array
  while (i < n1)
    arr[k++] = arr1[i++];

  // Copy remaining elements from arr2 to array
  while (j < n2)
    arr[k++] = arr2[j++];
}

/**
 * Merge sort
*/
// O(n log n)
void sort(vector<int> &arr, int left, int right)
{
  // Base case: If left >= right, we cannot sort the array, as the middle index would be incorrect.
  if (left >= right)
    return;

  // Calculate middle index
  int mid = left + (right - left) / 2;

  // Array 1: Merge elements from arr[left:mid]
  sort(arr, left, mid);

  // Array 2: Merge elements from arr[mid + 1:right]
  sort(arr, mid + 1, right);

  // Merge the two arrays together
  merge(arr, left, mid, right);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {12, 11, 13, 5, 6, 7};
  sort(arr, 0, arr.size() - 1);

  // 5 6 7 11 12 13
  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << "\n";

  return 0;
}
