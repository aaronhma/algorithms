// Minimum Query
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {13, 79, 81, 23, 1, 9, 0, 23};

  int n = arr.size(), a = 0, b = 4;

  // preprocess array - get the minimum number's index between the range [i, j]
  vector<vector<int>> preprocess(n + 1, vector<int>(n + 1, 0));

  for (int i = 0; i <= n; i++)
    preprocess[i][i] = i;

  for (int i = 0; i <= n; i++)
  {
    for (int j = i + 1; j <= n; j++)
    {
      if (arr[preprocess[i][j - 1]] < arr[j])
        preprocess[i][j] = preprocess[i][j - 1];
      else
        preprocess[i][j] = j;
    }
  }

  // O(1) query time
  cout << arr[preprocess[a][b]] << "\n"; // 1

  return 0;
}
