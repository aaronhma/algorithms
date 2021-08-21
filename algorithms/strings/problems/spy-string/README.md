# Spy String [(C++)](./spy-string.cpp)

## The Problem

#### [CodeForces](https://codeforces.com/contest/1360/problem/F)

## Approach 1: Brute Force

We can solve this problem in $\theta(26 * m * n * m) \approx \theta(m^2)$ and still get an $AC$ because $t \leq 100$, $n \leq 10$ and $m \leq 10$.

In general, we let the answer initially be $arr[0]$. Next, we iterate through $0 ... m - 1$ and change the character at the position to be $a, b, c, ..., x, y, z$ for $\theta(26m) \approx \theta(m)$. Then, we check if the string is valid, which runs in $\theta(nm)$ time.
