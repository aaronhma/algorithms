#include <bits/stdc++.h>

using namespace std;

/**
 * Checks if the string ans is valid.
*/
bool valid(vector<string> &arr, string &ans, int n, int m)
{
  // Go through the entire string
  for (int i = 0; i < n; i++)
  {
    int errors = 0; // # of errors

    // Check the # of errors
    for (int j = 0; j < m; j++)
    {
      if (arr[i][j] != ans[j])
        errors++;
    }

    // # of errors should be <= 1
    if (errors > 1)
    {
      // String is invalid
      return false;
    }
  }

  // String is valid
  return true;
}

/**
 * Randomly update values of the first element of the array. Then, check if the updated string is valid.
*/
string solve(vector<string> &arr, int n, int m)
{
  // Answer string
  string ans = arr[0];

  // Iterate through the size of the string
  for (int i = 0; i < m; i++)
  {
    // Temporary character to store original data in the answer string
    char save = ans[i];

    // All the characters to check for
    for (char j = 'a'; j <= 'z'; j++)
    {
      // Update answer
      ans[i] = j;

      // Check if string is valid
      if (valid(arr, ans, n, m))
      {
        // Valid, return answer
        return ans;
      }
      else
      {
        // Invalid, reset ans[i] to original state
        ans[i] = save;
      }
    }
  }

  // Impossible
  return "-1";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t, n, m;
  cin >> t;

  while (t--)
  {
    cin >> n >> m;

    vector<string> arr(n);

    for (int i = 0; i < n; i++)
      cin >> arr[i];

    cout << solve(arr, n, m) << "\n";
  }

  return 0;
}
