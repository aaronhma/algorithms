# GCD & LCM

## Concept: GCD & LCM

The Greatest Common Divisor (GCD) is the biggest number that divides both $a$ and $b$ without a remainder.

The Least Common Multiple (LCM) is the smallest number that has $a$ and $b$ as the divisor.

## Fast GCD

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

## WARNING: The LCM That Prevents Overflow

The Least Common Multiple (LCM) of two numbers is defined as:

$$\frac{ab}{gcd(a,b)}$$

A possible implementation, that cleverly avoids integer overflows by first dividing $a$ with the GCD before multiplying it with $b$ is shown below:

```cpp
int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}
```
