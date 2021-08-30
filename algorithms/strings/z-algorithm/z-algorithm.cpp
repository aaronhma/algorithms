#include <bits/stdc++.h>

using namespace std;

vector<int> z_function(string text) {
  int n = (int)text.size(), l = 0, r = 0;

  vector<int> z(n);

  for (int i = 1; i < n; i++) {
    // If i <= r, the current position is inside the current segment [l,r], update z[i].
    if (i <= r)
      z[i] = min(r - i + 1, z[i - l]);

    // z[i]++ if the two characters match
    while (i + z[i] < n && text[z[i]] == text[i + z[i]])
      z[i]++;

    // If there is a better search range, update the search range.
    if (i + z[i] - 1 > r) {
      l = i;
      r = i + z[i] - 1;
    }
  }

  return z;
}

vector<int> z_algorithm(string text, string pattern) {
  text = pattern + "$" + text;
  vector<int> arr = z_function(text), ans;
  int n = (int)arr.size(), m = (int)pattern.size();

  for (int i = m + 1; i < n; i++) {
    if (arr[i] == m)
      ans.push_back(i - m - 1);
  }

  return ans;
}

int main()
{
  vector<int> ans = z_algorithm("AABACAABA", "AABA");

  // {0, 5}
  for (int i : ans) cout << i << " ";
  cout << "\n";

  return 0;
}
