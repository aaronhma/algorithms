// Source: https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
#include <bits/stdc++.h>

using namespace std;

void permutation(vector<int> &arr, int left, int right)
{
  // Base case: Left and right index - we're done building our permutation
  if (left == right)
  {
    // Print the permutated array
    for (int i : arr)
    {
      cout << i << " ";
    }

    cout << "\n";

    return;
  }

  // Index i is the element where we want to change our permutation at
  for (int i = left; i <= right; i++)
  {
    // Use this element in our permutation
    swap(arr[left], arr[i]);

    // Create the rest of the permutation with this element
    permutation(arr, left + 1, right);

    // Don't use this element in our permutation
    swap(arr[left], arr[i]);
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3};

  int n = arr.size();

  permutation(arr, 0, n - 1);

  return 0;
}
