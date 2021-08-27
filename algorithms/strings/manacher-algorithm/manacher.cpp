#include <bits/stdc++.h>

using namespace std;

int main()
{
  string S = "abb";
  int n = (int)S.size();

  vector<int> d1(n), d2(n);

  // Find th
  for (int i = 0, l = 0, r = -1; i < n; i++)
  {
    // Find the number of odd-length palindromes with index i as the center.
    int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);

    while (i - k >= 0 && i + k < n && S[i - k] == S[i + k])
      k++;

    d1[i] = k--;

    // Update boundaries
    if (i + k > r)
    {
      l = i - k;
      r = i + k;
    }
  }

  for (int i = 0, l = 0, r = -1; i < n; i++)
  {
    // Find the number of even-length palindromes with index i as the center.
    int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);

    while (i - k - 1 >= 0 && i + k < n && S[i - k - 1] == S[i + k])
      k++;

    d2[i] = k--;

    // Update boundaries
    if (i + k > r)
    {
      l = i - k - 1;
      r = i + k;
    }
  }

  int max_odd = d1[0], max_odd_i = 0, max_even = d2[0], max_even_i = 0;

  for (int i = 1; i < n; i++)
  {
    if (d1[i] > d1[max_odd_i])
    {
      max_odd = d1[i];
      max_odd_i = i;
    }

    if (d2[i] > d2[max_even_i])
    {
      max_even = d2[i];
      max_even_i = i;
    }
  }

  int max = ::max(max_even, max_odd);
  cout << max << ", " << max_even << " , " << max_odd << "\n";

  if (max == max_even)
  {
    int length = max_even * 2;
    int start = max_even_i - max_even, end = max_even_i + max_even - 1;
    cout << length << " " << S.substr(start, end + 1) << "\n";
  }
  else
  {
    int length = max_odd * 2 - 1;
    int start = max_odd_i - max_odd + 1, end = max_odd_i + max_odd - 1;
    cout << length << " " << S.substr(start, end + 1) << "\n";
  }

  return 0;
}
