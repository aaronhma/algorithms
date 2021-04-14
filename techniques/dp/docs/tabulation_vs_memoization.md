# Tabulation vs. Memoization

## Background

-   Tabulation: Bottom Up
-   Memoization: Top Down

Both tabulation and memoization are the same thing, except for the difference in the ways of doing the thing.

-   Tabulation - starting from the bottom to the top
-   Memoization - starting from the top to the bottom

Tabulation example:

```cpp
int dp[n + 1];
dp[0] = 1; // possibly 0, depends on problem
dp[1] = 1;

// start from the bottom (2) to the top (n)
for (int i = 2; i <= n; i++)
{
  dp[i] = i * dp[i - 1];
}

cout << "Factorial of " << n << ": " dp[n] << "\n";
```

![Image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Tabulation-vs-Memoization-1.png)

([Source](https://www.geeksforgeeks.org/tabulation-vs-memoization/))

Memoization example:

```cpp
int dp[n + 1];

int solver(int n) {
  if (n == 0) {
    return 1;
  }

  if (dp[n] != 0) {
    return dp[n];
  }

  dp[n] = n * solver(n - 1);

  return dp[n];
}
```

## References

[Geeks For Geeks: Tabulation vs. Memoization](https://www.geeksforgeeks.org/tabulation-vs-memoization/)
