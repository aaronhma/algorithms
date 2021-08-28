#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> repetitions;

// Exact match to the `z_function` implementation
vector<int> z_function(string const &s)
{
  int n = s.size(), l = 0, r = 0;

  vector<int> z(n);

  for (int i = 1; i < n; i++)
  {
    if (i <= r)
      z[i] = min(r - i + 1, z[i - l]);

    while (i + z[i] < n && s[z[i]] == s[i + z[i]])
      z[i]++;

    if (i + z[i] - 1 > r) {
      l = i;
      r = i + z[i] - 1;
    }
  }

  return z;
}

int get_z(vector<int> const &z, int i)
{
  if (0 <= i && i < (int)z.size())
    return z[i];
  else
    return 0;
}

void convert_to_repetitions(int shift, bool left, int i, int l, int k1, int k2)
{
  for (int l1 = max(1, l - k2); l1 <= min(l, k1); l1++)
  {
    if (left && l1 == l)
      break;

    int l2 = l - l1;
    int pos = shift + (left ? i - l1 : i - l - l1 + 1);

    repetitions.emplace_back(pos, pos + 2 * l - 1);
  }
}

void find_repetitions(string s, int shift = 0)
{
  int n = s.size();
  if (n == 1)
    return;

  int leftLen = n / 2;
  int rightLen = n - leftLen;

  string leftStr = s.substr(0, leftLen);
  string rightStr = s.substr(leftLen);
  string leftStrReverted(leftStr.rbegin(), leftStr.rend());
  string rightStrReverted(rightStr.rbegin(), rightStr.rend());

  find_repetitions(leftStr, shift);
  find_repetitions(rightStr, shift + leftLen);

  vector<int> z1 = z_function(leftStrReverted);
  vector<int> z2 = z_function(rightStr + '#' + leftStr);
  vector<int> z3 = z_function(leftStrReverted + '#' + rightStrReverted);
  vector<int> z4 = z_function(rightStr);

  // cout << "z1: " << z1 << "\n";
  // cout << "z2: " << z2 << "\n";
  // cout << "z3: " << z3 << "\n";
  // cout << "z4: " << z4 << "\n";

  for (int i = 0; i < n; i++)
  {
    int l, k1, k2;

    if (i < leftLen)
    {
      l = leftLen - i;
      k1 = get_z(z1, leftLen - i);
      k2 = get_z(z2, rightLen + 1 + i);
    }
    else
    {
      l = i - leftLen + 1;
      k1 = get_z(z3, leftLen + 1 + rightLen - 1 - (i - leftLen));
      k2 = get_z(z4, (i - leftLen) + 1);
    }

    if (k1 + k2 >= l)
      convert_to_repetitions(shift, i < leftLen, i, l, k1, k2);

    // cout << "l: " << l << "\n";
    // cout << "k1: " << k1 << "\n";
    // cout << "k2: " << k2 << "\n";
  }
}

int main()
{
  string S = "abaaba"; // [{2, 3}, {0, 5}]
  // string S = "acababaee"; // [{7, 8}, {3, 6}, {2, 5}]

  find_repetitions(S);

  for (int i = 0; i < (int)repetitions.size(); i++)
  {
    cout << "start: " << repetitions[i].first << "\n";
    cout << "end: " << repetitions[i].second << "\n";
  }


  return 0;
}
