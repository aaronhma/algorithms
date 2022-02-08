# GCD & LCM

## Concept: GCD & LCM

$\gcd(a, b) = \begin{cases}a,&\text{if }b = 0 \\ \gcd(b, a \ \% \ b),&\text{otherwise.}\end{cases}$

The Greatest Common Divisor (GCD) is the biggest number that divides both $a$ and $b$ without a remainder.

$\text{lcm}(a, b) = \frac{a \cdot b}{\gcd(a, b)}$

The Least Common Multiple (LCM) is the smallest number that has $a$ and $b$ as the divisor.

## Fast GCD (Euclidean Algorithm)

We can write the recursive GCD:

```cpp
int gcd (int a, int b) {
  return b ? gcd (b, a % b) : a;
}
```

We notice that we can write it iteratively:

```cpp
int gcd(int a, int b)
{
  // Fast GCD:
  while (b) // As long as b != 0
  {
    // Compute "return gcd(b, a % b);"
    a %= b; // a % b
    swap(a, b); // Swap a and b
  }
  return a; // If b == 0 return a
}
```

The Euclidean Algorithms works in $\theta(\log \min(a, b))$.

## WARNING: The LCM Code That Prevents Overflow

The Least Common Multiple (LCM) of two numbers is defined as:

$$\frac{ab}{gcd(a,b)}$$

A possible implementation, that cleverly avoids integer overflows by first dividing $a$ with the GCD before multiplying it with $b$ is shown below:

```cpp
int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}
```

LCM happens in $\theta(\log \min(a, b))$ time, as we're calling $gcd(a, b)$.

## Binary GCD

The Binary GCD algorithm is an optimization to the normal Eulidean algorithm.

The slow part of the normal algorithm are the modulo operations. Modulo operations, although we see them as $\theta(1)$, are a lot slower than simpler operations like addition, subtraction or bitwise operations. So it would be better to avoid those.

It turns out, that you can design a fast GCD algorithm that avoids modulo operations. It's based on a few properties:

* If both numbers are even, then we can factor out a two of both and compute the GCD of the remaining numbers: $gcd(2a, 2b) = 2 gcd(a, b)$

* If one of the numbers is even and the other one is odd, then we can remove the factor 2 from the even one: $gcd(2a, b) = gcd(a, b)$ if $b$ is odd

* If both numbers are odd, then subtracting one number of the other one will not change the GCD: $gcd(a, b) = gcd(b, a - b)$

Using only these properties, and some fast bitwise functions from GCC, we can implement a fast version:

```cpp
int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}
```
