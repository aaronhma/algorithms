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

![Image](ex.png)

This works in $\theta(log \ n)$ time.

Then, all we have to do is implement this:

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

The second approach accomplishes the same task without recursion. It computes all the powers in a loop, and multiplies the ones with the corresponding set bit in $n$. Although the complexity of both approaches is identical, this approach will be faster in practice since we have the overhead of the recursive calls.

![Image](ex.png)

```cpp
long long pow(long long base, long long expo) {
  long long ans = 1;

  while (expo) { // As long as the exponent isn't equal to 0,
    if (expo & 1) // Check if the exponent is odd
      ans *= base; // If the exponent is odd, we must multiply the answer with base.
    base *= base; // Even: Compute x^(n / 2) * x^(n / 2)
    expo >>= 1; // Divide by 2
  }

  return ans;
}
```
