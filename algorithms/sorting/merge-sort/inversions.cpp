// Solve this problem: https://www.codechef.com/UASS001/problems/CINV
// https://pastebin.com/WLmtL5a3
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;

#define FORE(i, a, b) for (int i = a; i < b; i++)
#define FORI(i, a, b) for (int i = a; i <= b; i++)

// INPUT
template <class T>
void read(T &x) { cin >> x; }

template <class T>
void read(vector<T> &a)
{
  FORE(i, 0, (int)a.size())
  read(a[i]);
}

// Returns the # of inversions from arr[low] to arr[high]
ll inversions(vi &arr, int low, int mid, int high)
{
  // inversions: Total # of inversions
  // p1: Current index of element in the first subarray
  // p2: Current index of element in the second subarray
  ll inversions = 0, p1 = low, p2 = mid + 1;

  //
  while (p1 <= mid)
  {
    // Find the last element that is strictly less than arr[p1]
    while (arr[p2] < arr[p1] && p2 <= high)
    {
      p2++;
    }

    // Once we exited previous while loop
    p2--;

    inversions += (p2 - mid);

    if (p2 < mid + 1)
      p2 = mid + 1;

    // Go to next iteration
    p1++;
  }

  return inversions;
}

// Merges two sorted arrays
// See https://github.com/aaronhma/algorithms-notes/blob/master/techniques/sorting/merge-sort/merge-sort.cpp#L5
// for an explanation
void merge(vi &arr, int low, int mid, int high)
{
  // s1: Size of first array from low...mid: mid - low + 1
  // s2: Size of second array from mid + 1...high: high - (mid + 1) + 1 = high - mid - 1 + 1 = high - mid
  int s1 = mid - low + 1, s2 = high - mid, p1 = 0, p2 = 0, k = low;

  // Copy data from the original array to the subarrays
  vi arr1(s1), arr2(s2);

  FORE(i, 0, s1)
    arr1[i] = arr[low + i];

  FORE(i, 0, s2)
    arr2[i] = arr[mid + i + 1];

  while (p1 < s1 && p2 < s2)
  {
    // Why merge sort is stable: arr1[p1] <= arr2[p2]
    //                                     ^
    // If we have arr1[p1] == arr2[p2], we first take the element from the first array (further to the left in the original array).

    // The next element in the sorted array is the minimum element.
    if (arr1[p1] <= arr2[p2])
      arr[k] = arr1[p1++];
    else
      arr[k] = arr2[p2++];

    k++;
  }

  // NOTE: Only one of the while loops will run (as we had to exit the previous while loop because one array was empty).

  // Copy all remaining elements from the first array to the second array
  while (p1 < s1)
    arr[k++] = arr1[p1++];

  // Copy all remaining elements from the first array to the second array
  while (p2 < s2)
    arr[k++] = arr2[p2++];
}

ll mergeSort(vi &arr, int low, int high)
{
  if (low >= high)
    return 0;

  ll inversions = 0;
  int mid = low + (high - low) / 2;

  inversions += mergeSort(arr, low, mid);
  inversions += mergeSort(arr, mid + 1, high);
  inversions += ::inversions(arr, low, mid, high);

  // Merge the two sorted subarrays low...mid and mid + 1...high
  merge(arr, low, mid, high);

  return inversions;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n;
  read(t);

  while (t--)
  {
    read(n);

    vi arr(n);
    read(arr);

    cout << mergeSort(arr, 0, n - 1) << "\n";
  }

  return 0;
}
