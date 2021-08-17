#include <bits/stdc++.h>

using namespace std;

// O(n)
// Returns the index of the last element (arr[high]) after moving all the elements smaller than arr[high] to the front and all the elements bigger than arr[high] to the back
// Place elements in the order [elements <= pivot, pivot, elements > pivot]
int partitionIndex(vector<char> &arr, char pivot, int low, int high) {
  // pivotIndex: pivot value index
  int pivotIndex = low;

  // arr[high] is the pivot (choose the element at the end as the pivot)

  for (int i = low; i < high; i++) {
    // Put elements smaller than or equal to the pivot on the left and greater elements on the right of the pivot.
    if (arr[i] < pivot) {
      // swap elements
      swap(arr[i], arr[pivotIndex]);
      pivotIndex++;
    } else if (arr[i] == pivot) {
      swap(arr[i], arr[high]);
      i--;
    }
  }

  // final swap
  swap(arr[pivotIndex], arr[high]);

  // Return the pivot value index
  return pivotIndex;
}

void match(vector<char> &nuts, vector<char> &bolts, int low, int high) {
  // We cannot sort/match if low >= high. (see quick sort analysis for the explanation)
  if (low >= high) return;

  // Choose the last character of the bolts array to get the nuts partition index.
  int pivot = partitionIndex(nuts, bolts[high], low, high);

  // Using the partition of nuts, choose that for the bolts partition index.
  partitionIndex(bolts, nuts[pivot], low, high);

  // Sort the nults and bolts array from low ... pivot - 1.
  match(nuts, bolts, low, pivot - 1);

  // Don't sort the index at pivot.

  // Sort the nuts and bolts array from pivot + 1 ... high.
  match(nuts, bolts, pivot + 1, high);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<char> nuts = {'@', '#', '$', '%', '^', '&'};
  vector<char> bolts = {'$', '%', '&', '^', '@', '#'};

  match(nuts, bolts, 0, nuts.size() - 1);

  cout << "After matching, the matched nuts and bolts are:\n";

  for (char i : nuts) cout << i << " ";
  cout << "\n";

  for (char i : bolts) cout << i << " ";
  cout << "\n";

  for (char i : nuts) cout << i << " ";
  cout << "\n";

  for (char i : bolts) cout << i << " ";
  cout << "\n";

  return 0;
}
