# Primes & Factors

## Terminologies

-   Factor/Divisor: An integer $a$ is a factor/divisor of $b$ if $a$ divides $b$ with no remainder. (Also written as $a \ | \ b$);
-   Prime: A number $n$ is prime if $n \geq 1$ and the only divisors of the number is $1$ and itself.
-   Composite: Any number $n$ where $n \geq 1$ and $n$ is not prime.

## Fundamental Theorem of Arithmetic

The Fundamental Theorem of Arithmetic states "A number $n$ is either prime, or a composite number created by the multiplication of primes".

-   Case 1: $n$ is prime
-   Case 2: $n$ is composite

$$n = p_1^{a_1}*p_2^{a_2}*p_{n - 1}^{a_{n - 1}}*p_n^{a_n}$$

## Euclid's Algorithm

The greatest common divisor of integers $a$ and $b$ denoted $gcd(a, b)$ is the largest integer that divides $a$ and $b$. For example, $gcd(25, 5) = 5$. A related concept is the lowest common multiple, the smallest integer $k$ that is a multiple of both $a$ and $b$. The formula $lcm(a, b) = a * b / gcd(a, b)$ can be used to calculate the LCM.

One way to find $gcd(a, b)$ is to find the prime factors of both numbers, then find the largest prime factor that exists in both prime factors. A smarter way is using Euclid's algorithm:

$$gcd(a, b) = $$

-   Case 1: $b = 0$

$$gcd(a, b) = a$$

-   Case 2: $b \neq 0$

$$gcd(a, b) = gcd(b, a \ \% \ b)$$

## Euler's Theorem

Two integers $a$ and $b$ are coprime if $gcd(a, b) = 1$. Euler's totient function $\phi(n)$ gives the number of coprimes between $1...n$. The formula of Euler's Theorem is shown:

![Image](https://wikimedia.org/api/rest_v1/media/math/render/svg/bb6b6388ded7d1e160a3bd82b60c5b593947088a)

The formula states the product is over all the distinct prime numbers $p$ that divides $n$. The following formula is equivalent to:

![Image](https://wikimedia.org/api/rest_v1/media/math/render/svg/5d9f26e76c56e370f3fa45576688e8f12fb50a0e)
