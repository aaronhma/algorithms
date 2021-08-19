# String

| ☆   | String Algorithms                           | C++                                  | Problems | Resources                                                            |
| --- | ------------------------------------------- | ------------------------------------ | -------- | -------------------------------------------------------------------- |
|     | [Knuth-Morris-Pratt (KMP)](./kmp/README.md) | [C++](./kmp/kmp.cpp)                 |          | [cp-algo](https://cp-algorithms.web.app/string/prefix-function.html) |
|     | [Rabin Karp](./rabin-karp/README.md)        | [C++](./rabin-karp/rabin-karp.cpp)   |          | [cp-algo](https://cp-algorithms.web.app/string/rabin-karp.html)      |
|     | [Spy String](./spy-string/README.md)        | [C++](./spy-string/spy-string.cpp)   |          |                                                                      |
|     | [Z Algorithm](./z-algorithm/README.md)      | [C++](./z-algorithm/z-algorithm.cpp) |          | [cp-algo](https://cp-algorithms.web.app/string/z-function.html)      |

## Content

<details>

<summary>What's a String</summary>

A string contains characters.

</details>

<details>

<summary>Comparing Strings</summary>

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

</details>

<details>

<summary>Resizing Strings</summary>

## `str.resize(k)`

This operations resizes the string to $k$ characters (basically $str = str.substr(0, k)$).

If $n$ is smaller than the current string length, the current value is shortened to its first $n$ character, removing the characters beyond the $n$-th.

If $n$ is greater than the current string length, a character $m$ must be specified (eg. $str.resize(max\_length + 2, '+')$). Otherwise, an `length_error` exception is thrown.

</details>

<details>
<summary>Converting Between Lowercase and Uppercase</summary>

Change a string to uppercase:

```cpp
for (char &i : str) {
  i -= 32;
}
```

Change a string to lowercase:

```cpp
for (char &i : str) {
  i += 32;
}
```

</details>
