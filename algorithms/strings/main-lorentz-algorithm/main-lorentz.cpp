#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> repetitions;

// Exact match to the `z` implementation
vector<int> z(string const &s)
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

int getZValue(vector<int> const &z, int i) {
  // if highest possible index is in range, return its value
  if (0 <= i && i < (int)z.size()) return z[i];
  else return 0;
}

// `O(n log n)` using divide-and-conquer algorithm
// shift: index position of the current process string
void find_repetitions(string s, int shift = 0) {
  int n = s.size();

  if (n == 1)
    return;

  int leftLen = n / 2;
  int rightLen = n - leftLen;

  string leftStr = s.substr(0, leftLen);
  string leftStrReverted(leftStr.rbegin(), leftStr.rend());

  string rightStr = s.substr(leftLen);
  string rightStrReverted(rightStr.rbegin(), rightStr.rend());

  // divide-and-conquer algorithm - recursively divided into half
  // cout << "shift: " << shift << " - " << shift + leftLen << " : " << leftStr << " + " << rightStr << "\n\n";
  find_repetitions(leftStr, shift);
  find_repetitions(rightStr, shift + leftLen);

  // rossing repetitions ( O(n) ): Finds all repetitions starting in the first half and ending in the second half
  vector<int> left1 = z(leftStrReverted);
  vector<int> left2 = z(rightStr + '#' + leftStr);

  vector<int> right1 = z(leftStrReverted + '#' + rightStrReverted);
  vector<int> right2 = z(rightStr);

  // for (int i = 0; i < (int)right2.size(); i++)
  //   cout << right2[i] << " ";
  // cout << "zzz\n\n";

  cout << "Current String: " << s << " - size: " << n << " - leftLen: " << leftLen << "\n";
  for (int i = 0; i < n; i++) {
    // i  - fixate a specific position *cntr*
    // l  - possible the length of the repetitions (2l). Look for all repetitions at this position
    //      leftStr: `l = leftLen − cntr`,  rightStr: `l = cntr - leftLen + 1;`
    // k1 - the largest number in left part of the string
    // k2 - the largest number in right part of the string
    int l, k1, k2;
    bool isLeft = i < leftLen;

    // Once we know how to find these repetitions, iterate over all possible values for cntr from 0 to *leftLen|rightLen − 1*, and find all left crossover repetitions of length *l = leftLen|rightLen, leftLen|rightLen − 1, …, 1*

    // O(n log n) algorithm contains info to solve problem below
    // Case 1: Find the number of repetitions in a string,
    // Case 2: Find the longest repetition in a string
    if (isLeft) {
      l = leftLen - i; // in decreasing order
      k1 = getZValue(left1, l);
      // rightLen + 1 + i: leftStr's index z fn value (in increasing order)
      k2 = getZValue(left2, rightLen + 1 + i);
    } else {
      l = i - leftLen + 1; // in increasing order
      // 1 + i + rightLen: rightStr's index z fn value (in decreasing order)
      k1 = getZValue(right1, leftLen + n - i);
      k2 = getZValue(right2, l);
    }

    cout << "    l: " << l  << ", k1 + k2: " << k1 + k2 << ", k1: " << k1 << ", k2: " << k2 << "\n\n";

    // O (n ^ 2) store all found repetition in a vector of pairs of start and end indices.
    // Case 3: Only run code below if you want to find Start/End position of each repetition
    if (k1 + k2 >= l) {
      cout << " ^^^^^^ " << "\n";
      for (int l1 = max(1, l - k2); l1 <= min(l, k1); l1++) {
        if (isLeft && l1 == l)
          break;

        int pos = shift + (isLeft ? i - l1 : i - l - l1 + 1);

        repetitions.emplace_back(pos, pos + 2 * l - 1);
      }
    }
  }
}

int main()
{
  string S = "abcc"; // [{2, 3}]
  // string S = "abcabc"; // [{0, 5}]
  // string S = "abaaba"; // [{2, 3}, {0, 5}]
  // string S = "acababaee"; // [{7, 8}, {3, 6}, {2, 5}]

  find_repetitions(S);

  for (int i = 0; i < (int)repetitions.size(); i++)
  {
    cout << "start: " << repetitions[i].first << "\n";
    cout << "end: " << repetitions[i].second << "\n";
  }

  return 0;
}
