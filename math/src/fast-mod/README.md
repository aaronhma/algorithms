# Modular Exponentiation

## The Problem

Given $x$, $n$, and $k$, print out $x^n \ \% \ k$, where $x \leq 10^9$, $n \leq 10^6$, and $k$ is a large prime number.

## Approach 1: Brute Force

The easiest way of solving this problem is through brute force, which runs in $\theta(n)$ time.

```cpp
int ans = 1;

// x * x * ... * x * x | n times
for (int i = 1; i <= n; i++) {
  // ans * x might overflow, `1LL` makes the integer literal of type `long long`.
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

* Case 3: $n = 0$

$$x^n = 1$$

We can simply use recursion to implement these $3$ cases:

```cpp
typedef long long ll;

ll modpow(ll x, ll n, ll m)
{
  // Case 1: n == 0
  // Formula: 1 % m
  if (n == 0)
    return 1 % m;

  // Case 2: n is odd
  // Formula: (x % m) * (x^{n - 1} % m) % m
  // This is the same as:
  // (x * x^{n - 1}) % m
  if (n % 2 == 1)
    return ((x % m) * (modpow(x, n - 1, m) % m)) % m;

  // Case 3: n is even
  // Formula: (x^{n / 2} * x^{n / 2}) % m
  ll ans = modpow(x, n / 2, m);
  return (ans * ans) % m;
}
```
