# Prime Factorization of a number $n$

## The Problem

Given a number $n$, can you find the prime factorizations of $n$ _efficiently_?

## Concept: Prime Factorization of $n$

In number theory, prime factorization refers to _breaking a number into a product of [multiple] **primes**_. In essence:

$$n = p_1^{k_1} * p_2^{k_2} * ... * p_{n - 1}^{k_{n - 1}} * p_n^{k_n}$$

## Approach 1: Brute Force

As long as our number $n$ is not equal to $1$, we keep going. This works in $\theta(n)$ time. See the comments for more insight:

```cpp
void primeFact(int n, vector<int> &base, vector<int> &exponent, int &distinctPrimeCount)
{
  // first number that will be checked if n is divisible by d
  // Note that composite numbers don't matter, we've already handled that case!
  int d = 2;

  while (n > 1)
  {
    int k = 0; // Number of times we've divided n by d

    // As long as we can still divide n by d, keep going.
    while (n % d == 0)
    {
      n /= d;
      k++;
    }

    // As long as we did do something...
    if (k != 0)
    {
      // one more distinct prime number that leads to our prime factorization
      distinctPrimeCount++;

      // set the base of the current distinct prime number
      base[distinctPrimeCount] = d;

      // set the exponent of the current distinct prime number
      exponent[distinctPrimeCount] = k;
    }

    // Go to the next number
    d++;
  }
}
```

## Approach 2: Reducing the Search Space

A slick way of solving this problem in $\theta(\sqrt{n})$ time is by making sure that $d \leq \sqrt{n}$. One caveat is that at the end of the `while` loop, we have two possible cases to look out for:

* $n = 1$: we've already calculated the prime factorization for $n$
* $n > 1$: $n$ is prime, add that to our prime factorization

```cpp
void primeFact(int n, vector<int> &base, vector<int> &exponent, int &distinctPrimeCount)
{
  // first number that will be checked if n is divisible by d
  // Note that composite numbers don't matter
  int d = 2, max = sqrt(n);

  // We only check d all the way to the square root of n
  while (n > 1 && d <= max)
  {
    int k = 0; // Number of times we've divided n by d

    // As long as we can still divide n by d, keep going.
    while (n % d == 0)
    {
      n /= d;
      k++;
    }

    // As long as we did do something...
    if (k != 0)
    {
      // one more distinct prime number that leads to our prime factorization
      distinctPrimeCount++;

      // set the base of the current distinct prime number
      base[distinctPrimeCount] = d;

      // set the exponent of the current distinct prime number
      exponent[distinctPrimeCount] = k;
    }

    // Go to the next number
    d++;
  }

  // After exiting the while loop, we have two cases:
  // * n == 1: we've already calculated the prime factorization for n
  // * n > 1: n is prime, add that to our prime factorization
  if (n > 1)
  {
    // one more distinct prime number that leads to our prime factorization
    distinctPrimeCount++;

    // set the base of the current distinct prime number
    base[distinctPrimeCount] = n;

    // set the exponent of the current distinct prime number
    exponent[distinctPrimeCount] = 1;
  }
}
```
