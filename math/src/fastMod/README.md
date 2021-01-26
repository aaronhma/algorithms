# Modular Exponentiation

## The Problem

Given $x$, $n$, and $k$, print out $x^n \ \% \ k$, where $x \leq 10^9$, $n \leq 10^6$, and $k$ is a large prime number.

## Approach 1: Brute Force

The easiest way of solving this problem is through brute force, which runs in $\theta(n)$ time.

```cpp
int ans = 1;

// x * x * ... * x * x | n times
for (int i = 1; i <= n; i++) {
  // ans * x might overflow so if it does, ans automatically becomes long long with 1LL
  ans = (1LL * ans * x) % k;
}
```

## Approach 2: Fast Modular Exponentiation

It turns out that we can solve this problem in $\theta(log \ n)$ time.

**ℹ️ Tip: This method can handle $n \leq 10^{18}$.**

We can divide $x^n$ into two cases:

* Case 1: $n$ is odd

$$x^n = x * x^{n - 1}$$

* Case 2: $n$ is even

$$x^n = (x^{\frac{n}{2}})^2$$
