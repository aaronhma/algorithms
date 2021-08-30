#include <bits/stdc++.h>

using namespace std;

void generatePermutation(vector<vector<int>> &ans, vector<int> &arr, int size, int n)
{
  // If the size = 1, we have already generated a permutation, add the array to all the possible permutations array.
  if (size == 1)
  {
    ans.push_back(arr);
    return;
  }

  generatePermutation(ans, arr, size - 1, n); // !! Frequent misimplementation: First generate permutations with arr[size - 1] unchanged

  for (int i = 0; i < size - 1; i++) // !! Frequent misimplementation: Use size - 1 instead of size
  {
    // Swap elements depending on even/odd of array
    if (size & 1)
      swap(arr[0], arr[size - 1]); // Odd

    else
      swap(arr[i], arr[size - 1]); // Even

    generatePermutation(ans, arr, size - 1, n); // !! Frequent misimplementation: Generate permutations of the rest of the array (arr[0], arr[1], ... arr[size - 2], arr[size - 1])
  }
}

int main()
{
  vector<int> arr = {3, 2, 1};
  int n = (int)arr.size();
  vector<vector<int>> ans; // Stores all possible permutations

  // If you want all permutations of the array in sorted order, you need to sort the array:
  // sort(arr.begin(), arr.end());

  generatePermutation(ans, arr, n, n);

  for (vector<int> i : ans) {
    for (int j : i) cout << j << " ";
    cout << "\n";
  }

  return 0;
}
