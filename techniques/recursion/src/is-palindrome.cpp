#include <bits/stdc++.h>

using namespace std;

/**
 * Returns true if the string from index start to index end is a palindrome.
*/
bool isPalindrome(string &str, int start, int end) {
  // If both pointers meet, then the string is a palindrome.
  // start == end for odd length string
  // start > end for even length string
  if (start >= end) return true;

  // If the character on the left doesn't match the character on the right, this string isn't a palindrome.
  if (str[start] != str[end]) return false;

  // Check if the next character (s) is also a palindrome.
  return isPalindrome(str, start + 1, end - 1);
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str = "dabad";
  bool ans = isPalindrome(str, 0, str.size() - 1);

  if (ans) cout << str << " is a palindrome!\n";
  else cout << str << " is not a palindrome!\n";

  return 0;
}
