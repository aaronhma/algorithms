# Prime Number Test [(C++)](./is-prime.cpp)

> Is $n$ prime?

A prime number is

- a natural number
- greater than 1
- a prime ($n$) itself
- not a product of two smaller natural numbers

## The Problem

Given a number $n$, return `true` if the number is prime and `false` if the number is not.

## Approach 1: Brute Force

Simply loop over each number starting from $2$ to $n - 1$ and check that the number $n$ is not divisibe by any of these numbers for a time complexity of $\theta(n)$.

```cpp
// 2 ... n - 1
for (int i = 2; i <= n - 1; i++) {
  // not prime
  if (n % i == 0) return false;
}

// prime
return true;
```

## Approach 2: Reducing the Search Space

It turns out that this problem can actually be solved in $\theta(\sqrt{n})$ time. We know that $n = ab$ for some number $a$ where $a \in \{ i \ | \ 2 \leq i \leq n - 1 \}$. If we know $a$, then $b = \frac{n}{a}$. In this case, assume that $a \leq b$. Because $a \leq b$, then $ab \geq a^2$. This is the same as $n \geq a^2$ and solving this inequality gives us $a \leq \sqrt{n}$. This means that we can just find all the numbers $a$ where $a \leq \sqrt{n}$:

```cpp
// 2 ... sqrt(n)
for (int i = 2; i <= sqrt(n); i++) {
  // not prime
  if (n % i == 0) return false;
}

// prime
return true;
```
