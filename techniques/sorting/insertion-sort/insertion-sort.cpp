#include <bits/stdc++.h>

using namespace std;

void sort(vector<int> &arr) {
  int n = arr.size();

  for (int i = 1; i < n; i++) {
    // key: value to be inserted
    // j: starting value of where we will begin locating position of key in the sorted array
    int key = arr[i], j = i - 1;

    // Move elements that are greater than the key one position ahead of their current position.
    // Locate the position to insert key.
    while (j >= 0 && arr[j] > key) {
      // swap elements
      swap(arr[j + 1], arr[j]);

      // continue checking if we can place it further left
      j--;
    }

    // Insert key at the position j + 1.
    // Note: j + 1 because j-- decreases j by 1, so we need to increase it in order to get the correct index.
    arr[j + 1] = key;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {12, 11, 13, 5, 6};

  sort(arr);

  for (int i : arr) cout << i << " ";

  cout << "\n";

  return 0;
}
