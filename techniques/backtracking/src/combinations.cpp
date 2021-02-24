#include <bits/stdc++.h>

using namespace std;

void combination(vector<int> &arr, vector<int> &choose, int k, int start) {
  int n = arr.size();

  if (choose.size() == k) {
    for (int i : choose) cout << i << " ";

    cout << "\n";

    return;
  }

  if (start == n) return;

  for (int i = start; i < n; i++) {
    choose.push_back(arr[i]);
    combination(arr, choose, k, i + 1);
    choose.pop_back();
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {3, 2, 5, 8}, choose;
  int k = 3;

  combination(arr, choose, k, 0);

  return 0;
}
