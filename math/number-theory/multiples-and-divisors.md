# Chapter 3 - _Multiples and Divisors_

## Definitions

-   **Relatively prime**: Integers $m$ and $n$ are relatively prime if $gcd(m, n) = 1$.
-   **Common multiples**: A multiple of every integer in a group is a common multiple of those integers - The number (s) that exists in the multiples of numbers $a$ and $b$.

---

## Greatest Common Divisor (GCD)

**ℹ️ Note that the GCD is sometimes called the Greatest Common Factor (GCF) and/or the Highest Common Factor (HCF).**

The greatest common divisor (GCD) between two numbers $a$ and $b$ refers to the greatest divisor that appears in the divisors of both numbers. For example, the GCD of $12$ and $18$ is $6$. The notation of this is $gcd(m, n) = gcd(12, 18) = 6$ for $m = 12$ and $n = 18$.

---

## Least Common Multiple (LCM)

The Least Common Multiple (LCM) between two numbers $a$ and $b$ returns the smallest number that is divisible by both $a$ and $b$. The notation for this is $lcm[a, b]$. For example, $lcm[12, 18] = 36$.

---

## ℹ️ Important Things to Know 🧠

-   The **Division Theorem** states that for any integer $a$ and positive integer $b$, there exists exactly **one** pair of integers $q$ and $r$ such that:

$$a = b * q + r$$

where $0 \leq r < b$. We call $a$ the dividend, $b$ the divisor, $q$ the quotient, and $r$ the remainder.

-   The **Euclidean algorithm** states:

$$gcd(m, n) = gcd(m - n, n) = gcd(m - 2 * n, n) = ... = gcd(r, n)$$

-   The **extended Euclidean algorithm** speeds up the process by using the variable $r$ where $r = m \ \% \ n$.

$$gcd(m, n) = gcd(r, n)$$
