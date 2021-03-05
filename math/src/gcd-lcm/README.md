# GCD & LCM

## Concept: GCD & LCM

Check previous articles and [this](https://cp-algorithms.com/algebra/euclid-algorithm.html).

## WARNING: The LCM That Prevents Overflow

The Least Common Multiple (LCM) of two numbers is defined as:

$$\frac{ab}{gcd(a,b)}$$

A possible implementation, that cleverly avoid integer overflows by first dividing $a$ with the GCD before multiplying it with $b$ is shown below:

```cpp
int lcm(int a, int b) {
  return a / gcd(a, b) * b;
}
```
