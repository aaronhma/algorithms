# String

## About

A string contains characters.

## `str.compare()` in C++

### Syntax 1

`s1.compare(s2)` returns:

-   $0$: Both strings are equal
-   $<0$: $s1$ is shorter or first character that doesn't match is smaller than $s2$
-   $>0$: $s1$ is longer or first character that doesn't match is greater than $s2$

where $s1$ is the first string and $s2$ is the second string.

---

### Syntax 2

`s1.compare(start, len, s2)` returns:

-   $0$: $s1.substr(start, len) = s2$
-   anything else: $s1.substr(start, len) \neq s2$

where $s1$ is the first string, $s2$ is the second string, $start$ is the first index where we compare $s1$ with $s2$ and $len$ is the # of characters to compare.

---

### More Syntaxes

#### **[View GeeksForGeeks Article](https://www.geeksforgeeks.org/stdstringcompare-in-c/)**

## `str.resize(k)`

This operations resizes the string to $k$ characters (basically $str = str.substr(0, k)$).

If $n$ is smaller than the current string length, the current value is shortened to its first $n$ character, removing the characters beyond the $n$-th.

If $n$ is greater than the current string length, a character $m$ must be specified (eg. $str.resize(max\_length + 2, '+')$). Otherwise, an `length_error` exception is thrown.