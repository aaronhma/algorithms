# Calculate $e^x$ Using Taylor Series

## About

Taylor Series states that

$$e^x = 1 + \frac{x}{1!} + \frac{x^2}{2!} + \frac{x^3}{3!} + ...$$

## Approach 1: $\theta(n^2)$

To find this value using recursion, we can use [static variables](../../cpp-stl/static_keyword.md).

```cpp
double e (int x, int n)
{
    static double p = 1, f = 1;
    double r;

    // x^0 = 1, so we return 1 if n = 0
    if (n == 0)
        return 1;

    // Get x^(n - 1) using Taylor Series
    r = e(x, n - 1);

    // Update the power of x
    p = p * x;

    // Update factorial
    f = f * n;

    // The final answer is the sum of the previous answers (r) + (x^n divided by n!)
    return (r + p / f);
}

int main()
{
    int x = 4, n = 15;
    cout << e(4, 15) << "\n"; // 54.597883

    return 0;
}
```

## Approach 2: $\theta(n)$

https://www.udemy.com/course/datastructurescncpp/learn/lecture/13123986#overview

We take the first 4 elements of a Taylor Series, simplify it, and end up with $1 + \frac{x * s}{n}$.

```cpp
double e(int x, int n)
{
  static double s;

  if(n == 0)
    return s;

  s = 1 + x * s / n;

  return e(x, n - 1);
}

int main()
{
  cout << e(2, 10) << "\n";

  return 0;
}
```
