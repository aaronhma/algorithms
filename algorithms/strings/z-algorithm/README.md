# Z-Algorithm

## About

The Z-Algorithm depends on the Z-function to solve the following problem:

Given a string $text$, print the starting indexes of the substring $pattern$ in $text$ in $\theta(n + m)$ time.

For example, if $text = "AABACAABA"$ and $pattern = "AABA"$, the answer would be $\{ 0, 5 \}$.

## Z-Function

### About

Suppose we are given a string $s$ of length $n$. The **Z-function** for this string is an array of length $n$ where the $i$-th element is equal to the greatest number of characters starting from the position $i$ that coincide with the first characters of $s$.

In other words, $z[i]$ is the length of the longest common prefix between $s$ and the suffix of $s$ starting at $i$.

**Note: For CP purposes, we assume $0$-based indexes and that the initial value of every index $i$ in $z[i]$ is $0$.**

### Examples

For example, here are the values of the Z-function computed for different strings:

-   $"aaaaa" - [0,4,3,2,1]$
-   $"aaabaab" - [0,2,1,0,2,1,0]$
-   $"abacaba" - [0,0,1,0,3,0,1]$

### Explanation

[Video Explanation up to $13:20$](https://www.youtube.com/watch?v=CpZh4eF8QBw)

## The Algorithm

If $s = "aaabaab"$ and $p = "aab"$, we compute the Z-function on the string $p +$ \$ $+ s = "aab$ \$ $aaabaabaaabaab"$. Then, we iterate through the Z-function result and if $z[i] = |p|$, add $i - |p| - 1$ to the starting indexes of $pattern$.
