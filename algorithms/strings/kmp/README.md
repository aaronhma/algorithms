# Knuth-Morris-Pratt Algorithm

## About

Given a string $text$, print the starting indexes of the substring $pattern$ in $text$.

For example, if $text = "AABACAABA"$ and $pattern = "AABA"$, the answer would be $\{ 0, 5 \}$.

## Prefix Function

The prefix function returns an array $arr$ of length $n$ where $arr[i]$ is the length of the longest proper prefix of the substring $s[0 ... i]$ which is also a suffix of this substring.

```cpp
vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> arr(n);

    // arr[0] is always 0

    for (int i = 1; i < n; i++) {
        int j = arr[i - 1];

        while (j != 0 && s[i] != s[j]) j = arr[j-1];

        if (s[i] == s[j])
            j++;

        arr[i] = j;
    }

    return arr;
}
```

[Video Explanation From $00:00$ to $10:18$](https://www.youtube.com/watch?v=GTJr8OvyEVQ)

## KMP Algorithm

The KMP Algorithm is simple:

1. Compute the prefix array
2. We iterate from indexes 0 to n - m (inclusive):
  - Find the last character in the text equal to the pattern
  - If no characters match, $i = i + 1$
  - If all characters match, add the current index $i$ to the answer
  - If some characters match, update $i$ and $j$ for the next possible position

Notice that we only scan the $text$ string once, resulting in $\theta(n + k)$, where $n$ is the size of the $text$ string and $k$ is the size of the pattern (the pattern string is used for the prefix function and also finding the last character in the text equal to the pattern).

```cpp
vector<int> kmp(str &text, str &pattern) {
  // 1. Compute prefix array
  int n = sz(text), m = sz(pattern), i = 0, j = 0;
  vector<int> ans, pref = prefix(pattern);

  // 2. While loop: We only go to the indexes 0 to n - m (inclusive)
  while (i <= n - m) {
    // Find the last character in the text equal to the pattern
    while (j < m) {
      if (pattern[j] != text[i + j]) break;
      j++;
    }

    // If no characters match, i = i + 1
    if (j == 0) {
      i++;
    } else {
      // If all characters match, add the current index i to the answer
      if (j == m) ans.PB(i);

      // If some characters match, update i and j for the next possible position
      i += j - pref[j - 1];
      j = pref[j - 1];
    }
  }

  return ans;
}
```
