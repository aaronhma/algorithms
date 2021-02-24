# Checking if a String is a Palindrome (using Recursion)

## The Problem

You are given a string $str$. Return $true$ if the string is a palindrome, and $false$ otherwise. **You are only allowed to use recursion to solve this problem.**

**Example 1:**

```python
> str = "dabad"
=> isPalindrome(str) = true
```

## Analysis

This problem requires us to create two pointers $start$ (start of palindrome) and $end$ (end of palindrome). Then, at each step, $start++$ and $end--$ and check for the following cases:

* $start \geq end$

String is a palindrome!

* $str[start] \neq str[end]$

String isn't a palindrome!

* $return \ isPalindrome(str, start + 1, end - 1)$

Then, all we have to do is to implement this.

## Code

```cpp
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
```
