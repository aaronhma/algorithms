// Find the power set of a set using backtracking.
#include <bits/stdc++.h>

using namespace std;

void search(vector<int> &arr, vector<vector<int>> &ans, vector<int> &subset, int k, int n)
{
  // Push back the generated subset
  // NOTE: Empty subset will be pushed
  // into answer array too.
  ans.push_back(subset);

  // Start from k ... n
  for (int i = k; i < n; i++)
  {
    // Include this element in the subset
    subset.push_back(arr[i]);

    // Continue building the subset with this element
    search(arr, ans, subset, i + 1, n);

    // Don't include this element in the subset
    subset.pop_back();
  }
}

vector<vector<int>> powerSet(vector<int> &arr)
{
  // First possible subset: Empty set
  vector<int> subset;

  // 2D array - P(arr)
  vector<vector<int>> ans;

  // Size of set
  int n = arr.size();

  // Find P(arr) - 0 is the starting index
  search(arr, ans, subset, 0, n);

  // Return the answer
  return ans;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3};
  vector<vector<int>> power_set = powerSet(arr);

  for (vector<int> i : power_set)
  {
    if (i.empty())
      cout << "φ";

    for (int j : i)
    {
      cout << j << " ";
    }

    cout << "\n";
  }

  return 0;
}
