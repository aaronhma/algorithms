// Find + print all cycles of a permutation
// Checker: cycles-checker.cpp
#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef vector<bool> vb;

// similar to the DFS connected components
void dfs(vi arr, vb &visited, vi &curr, int i) {
  if (visited[i]) return;

  curr.push_back(arr[i]);
  visited[i] = 1;

  dfs(arr, visited, curr, arr[i] - 1);
}

void cycles(vi arr) {
  int n = (int)arr.size(), count = 1;

  vi curr;
  vb visited(n);

  for (int i = 0; i < n; i++) {
    if (visited[i]) continue;

    curr.clear();
    dfs(arr, visited, curr, i);

    cout << "Cycle #" << count++ << ": ";
    for (int k : curr) cout << k << " ";
    cout << "(" << (int)curr.size() << " elements)\n";
  }
}

int main()
{
  cycles({2, 1, 3, 5, 4});

  // Cycle #1: 2 1 (2 elements)
  // Cycle #2: 3 (1 elements)
  // Cycle #3: 5 4 (2 elements)

  return 0;
}
