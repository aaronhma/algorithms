#include <bits/stdc++.h>

using namespace std;

void permutate(vector<int> &arr, vector<int> &permutation, vector<bool> &used, int n)
{
  if (permutation.size() == n) {
    for (int i : permutation) cout << i << " ";

    cout << "\n";

    return;
  }

  for (int i = 0; i < n; i++) {
    if (!used[i]) {
      used[i] = true;
      permutation.push_back(arr[i]);
      permutate(arr, permutation, used, n);

      used[i] = false;
      permutation.pop_back();
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3}, permutation;
  int n = arr.size();
  vector<bool> used(n);

  permutate(arr, permutation, used, n);

  return 0;
}
