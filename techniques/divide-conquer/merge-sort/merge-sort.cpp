#include <bits/stdc++.h>

using namespace std;

/**
 * Merge two arrays
 * See the following for an explanation for what this function does:
 * https://www.geeksforgeeks.org/merge-two-sorted-arrays/
*/
void merge(vector<int> &arr, int left, int mid, int right)
{
  int n1 = mid - left + 1, n2 = right - mid;

  vector<int> arr1(n1), arr2(n2);

  for (int i = 0; i < n1; i++)
    arr1[i] = arr[left + i];
  for (int i = 0; i < n2; i++)
    arr2[i] = arr[mid + i + 1];

  int i = 0, j = 0, k = left;

  while (i < n1 && j < n2)
  {
    if (arr1[i] <= arr2[j])
      arr[k] = arr1[i++];
    else
      arr[k] = arr2[j++];

    k++;
  }

  while (i < n1)
    arr[k++] = arr1[i++];

  while (j < n2)
    arr[k++] = arr2[j++];
}

/**
 * Merge sort
*/
void sort(vector<int> &arr, int left, int right)
{
  // Base case: If left >= right, we cannot sort the array
  if (left >= right)
    return;

  // Calculate middle index
  int mid = left + (right - left) / 2;

  // Array 1:
  sort(arr, left, mid);

  // Array 2:
  sort(arr, mid + 1, right);

  // "Merge" the two arrays together
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
