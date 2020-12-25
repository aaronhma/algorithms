#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3};

  // for permutation ordering
  sort(arr.begin(), arr.end());

  do
  {
    for (int i : arr)
    {
      cout << i << " ";
    }

    cout << "\n";
  } while (next_permutation(arr.begin(), arr.end()));

  return 0;
}
