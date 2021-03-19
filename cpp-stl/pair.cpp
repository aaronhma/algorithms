#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  pair<int, int> p1 = {2, 3}; // pair is a DS that can store two different data types

  cout << "First element: " << p1.first << "\n";
  cout << "Second element: " << p1.second << "\n";

  pair<pair<int, int>, vector<pair<string, int>>> arr = {{1, 2}, {{"No 1", 2}, {"No 2", 3}, {"No 3", 4}}};

  cout << arr.first.first << " | " << arr.first.second << "\n";

  for (auto i : arr.second) {
    cout << i.first << " | " << i.second << "\n";
  }

  return 0;
}
