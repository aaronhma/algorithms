#include <bits/stdc++.h>

using namespace std;

// Generating permutation using Heap Algorithm
void generatePermutation(vector<vector<int>> &ans, vector<int> &arr, int size, int n)
{
	// if size becomes 1 then prints the obtained permutation
	if (size == 1) {
		ans.push_back(arr);
    return;
	}

	for (int i = 0; i < size; i++) {
		generatePermutation(ans, arr, size - 1, n);

		// if size is odd, swap 0th (first) and (size-1)(last) element
		if (size % 2 == 1)
			swap(arr[0], arr[size - 1]);
		// If size is even, swap ith and (size-1)(last) element
		else
			swap(arr[i], arr[size - 1]);
	}
}

int main()
{
	vector<int> arr = { 3, 2, 1 };
  int n = (int)arr.size();
  vector<vector<int>> ans;

	generatePermutation(ans, arr, n, n);

  for (vector<int> i : ans) {
    for (int j : i) cout << j << " ";
    cout << "\n";
  }

	return 0;
}
