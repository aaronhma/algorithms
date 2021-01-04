#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<vector<int>> test = {{3, 3, 4, 4, 4, 2}, {3, 1, 3, 2, 1, 4}, {7, 3, 1, 6, 4, 1}};

  vector<int> indexes(1000, -1);

  int curr_node = 0;

  for (auto i : test)
  {
    for (int j : i)
    {
      if (indexes[j] == -1)
      {
        // 0-based indexing
        indexes[j] = curr_node++;

        // 1-based indexing
        // indexes[j] = ++curr_node;
      }
    }
  }

  for (auto i : test)
  {
    for (int j : i)
    {
      cout << indexes[j] << " ";
    }

    cout << "\n";
  }

  return 0;
}
