# Implement `pow(x, n)` or $x^n$ (Binary Exponentiation)

## Example

```cpp
> x = 5
> n = 2
> pow(x, n) = 25
```

## Approach 1: Brute Force

```cpp
// to prevent overflow, we'll use long long
long long ans = 1;

for (int i = 1; i <= n; i++) {
  ans *= x;
}
```

## Approach 2: Fast Exponentiation

**ℹ️ C++ STL's implementation of `pow(x, n)` does not use fast exponentiation.**

We can divide the problem into $3$ cases:

$$x^n = \begin{cases}
1 &\text{if } n == 0 \\
\left(x^{\frac{n}{2}}\right)^2 &\text{if } n > 0 \text{ and } n \text{ even}\\
\left(x^{\frac{n - 1}{2}}\right)^2 \cdot x &\text{if } n > 0 \text{ and } n \text{ odd}\\
\end{cases}
$$

This works in $\theta(log \ n)$ time.

Then, all we have to do is implement this:

```cpp
long long pow(long long base, long long expo) {
  // Base case
  if (expo == 0) return 1;

  long long ans = pow(base, expo / 2);

  if (expo % 2)
      return ans * ans * base;
  else
      return ans * ans;
}
```

The second approach accomplishes the same task without recursion. It computes all the powers in a loop, and multiplies the ones with the corresponding set bit in $n$. Although the complexity of both approaches is identical, this approach will be faster in practice since we have the overhead of the recursive calls.

$$x^n = \begin{cases}
1 &\text{if } n == 0 \\
\left(x^{\frac{n}{2}}\right)^2 &\text{if } n > 0 \text{ and } n \text{ even}\\
\left(x^{\frac{n - 1}{2}}\right)^2 \cdot x &\text{if } n > 0 \text{ and } n \text{ odd}\\
\end{cases}
$$

```cpp
long long pow(long long base, long long expo) {
  long long ans = 1;

  while (expo) { // As long as the exponent isn't equal to 0,

    // If the exponent is odd, multiply our current answer with the base, then mutiply the base by itself.
    if (expo & 1)
      ans *= base;

    base *= base; // Base is multiplied with itself

    // Since we multiplied the base with itself, we divide the exponent by 2.
    expo >>= 1;
  }

  return ans;
}
```

## Special Cases

### $a^b \ \% \ m$

```cpp
long long pow(long long a, long long b, long long m) {
    a %= m;
    long long ans = 1;

    while (b > 0) {
      if (b & 1)
          ans = ans * a % m;

      a = a * a % m;
      b >>= 1;
    }

    return ans;
}
```

### Negative exponents & floating point base

```cpp
// Extended version that allows the pow function to work for negative y and float x.
float pow(float x, int y)
{
    float temp;
    if(y == 0)
        return 1;
    temp = pow(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
}
```
