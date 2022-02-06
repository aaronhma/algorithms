# Bit-Parallel Algorithms

Bit-Parallel Algorithms are based on the fact that individual bits of numbers can be manipulated in parallel using bit operations.

## Hamming Distance

The Hamming Distance $hamming(a, b)$ between two strings $a$ and $b$ of equal length, returns the number of positions where the strings differ. For example:

$$hamming(01101, 11001) = 2$$

The easiest way to solve this problem is through a simple brute force solution that runs in $\theta(k)$ time. However, since the strings consist of bits, we can optimize the solution by storing the strings as integers and calculating the distances using bit operations. In particular if $k <= 32$, we can use C++'s built-in function to solve this problem:

```cpp
int hamming(int a, int b) {
  return __builtin_popcount(x ^ y);
}
```

### Why does it work?

It works because the $a \oplus b$ ($XOR$ of $a$ and $b$) returns $1$ if two bits aren't the same. With this in mind, we can use `__builtin_popcount` to count the # of ones there is.
