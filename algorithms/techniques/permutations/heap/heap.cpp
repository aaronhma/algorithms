#include <bits/stdc++.h>

using namespace std;

// Prints the array
void printArr(int arr[], int n) {
	for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << "\n";
}

// Generating permutation using Heap Algorithm
void generatePermutation(int arr[], int size, int n)
{
  // vector<vector<int>> ans;
	// if size becomes 1 then prints the obtained permutation
	if (size == 1) {
		printArr(arr, n);
    // ans.push_back(n);
		// return ans;
    return;
	}

	for (int i = 0; i < size; i++) {
		generatePermutation(arr, size - 1, n);

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
	int arr[] = { 3, 2, 1 };
  int n = sizeof arr / sizeof arr[0];

	generatePermutation(arr, n, n);

	return 0;
}
