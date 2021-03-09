#include <bits/stdc++.h>

using namespace std;

void countingSort(vector<int> &arr)
{
  // Find the maximum element
  int max = 0;

  for (int i : arr)
    max = ::max(max, i);

  vector<int> freq(max + 1), sorted_array(arr.size());

  // Populate frequency array
  for (int i : arr)
    freq[i]++;

  // Make the array a prefix sum array
  for (int i = 1; i <= max; i++)
    freq[i] += freq[i - 1];

  // Shift all elements to the right
  // Delete rightmost element
  for (int i = max; i >= 1; i--)
    freq[i] = freq[i - 1];

  // First element in frequency array is element 0, that will always be at the front of the sorted array
  freq[0] = 0;

  // NOTE: freq[i] represents where we'll place element i in the sorted array

  // Start copying elements to the sorted array
  for (int i : arr)
    sorted_array[freq[i]++] = i;

  // Copy sorted array to our array
  arr = sorted_array;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 0, 3, 1, 3, 1};
  countingSort(arr);

  for (int i : arr)
    cout << i << " ";
  cout << "\n";

  return 0;
}
