# For-Loops

## Normal Way

```cpp
for (int i = 0; i < n; i++) {}
```

## Sliding Window with Window of Size $m$

```cpp
for (int i = 0; i + m - 1 < n; i++) {}
```


Example:

Given a string $S = "abcdef"$, print the sliding window of size $3$ ($"abc"$, $"bcd"$, $"cde"$, $"def"$).
