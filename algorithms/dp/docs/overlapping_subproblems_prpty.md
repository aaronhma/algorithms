# Overlapping Subproblems Property in DP

## Overlapping Subproblems

### Overview

Dynamic programming combines solutions to sub-problems. DP is used when the same sub-problems needs to be calculated every time. Instead of re-calculating, DP stores that calculations in an array, then when a new data is passed in, it only recalculates the solution to the problem, without ever needing to calculating the sub-problem's solution every single time.

### Example

Let's say we were building a fibonacci function:

```cpp
int fibonacci(int N) {
  if (N <= 1) return N;

  return fibonacci(N - 1) + fibonacci(N - 2);
}
```

and we need to call it as follows:

```diff
+ fibonacci(4)
+ fibonacci(5)
+ fibonacci(6)
+ fibonacci(7)
```

**Can you spot the problem?**

It turns out, every single time we compute `fibonnaci(n)`, we are recomputing `fibonacci(0)` + `fibonacci(1)` + `fibonacci(2)` + ... + `fibonacci(n - 1)`.

This is where Dynamic Programming comes in and we can [write a better solution](tabulation_vs_memoization.md).
