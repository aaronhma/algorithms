# Extended Euclidean Algorithm

## About

While the [Euclidean algorithm](README.md) calculates only the GCD of two numbers, the extended version also finds $(x, y)$ such that:

$$ax + by = gcd(a, b)$$

> It's been proven that we can always find $(x, y)$.


## Algorithm

# TODO: Not done yet

The iterative way:

```cpp
int gcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
```

In this implementation, $a1$ and $b1$ are the values that are being used to compute the GCD.

Or with recursion:

```cpp
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
```
