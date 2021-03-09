#include <bits/stdc++.h>

using namespace std;

// O(n)
// Returns the index of the last element (arr[high]) after moving all the elements smaller than arr[high] to the front and all the elements bigger than arr[high] to the back
int partitionIndex(vector<char> &arr, char pivot, int low, int high) {
  // pivotIndex: pivot value index
  int pivotIndex = low;

  // arr[high] is the pivot

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
  if (low >= high) return;

  int pivot = partitionIndex(nuts, bolts[high], low, high);
  partitionIndex(bolts, nuts[pivot], low, high);

  match(nuts, bolts, low, pivot - 1);
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
