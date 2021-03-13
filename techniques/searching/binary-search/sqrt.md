# Check if $x$ is a Perfect Square

## The Problem

```python
> sqrt(16)
True
> sqrt(20)
False
```

## Approach 1: Binary Search

At first glance, this may not seem like binary search can solve this problem. Well, think again.

> _Binary search only works properly on a dataset when it's monotonic._

**"Monotonic".** The range we need to check is $1...x$ **and it's monotonic**. We can use Binary Search!

This problem uses the standard Binary Search template. The only difference is inside `while (low <= high)`:

```cpp
bool sqrt(int x) {
  // we only need to check positive values, as (-[number here])^2 will always be positive
  // we only check from 1...x
  int low = 1, high = x;

  // Use standard binary search.
  while (low <= high) {
    // Get the element that might be sqrt(x)
    int mid = low + (high - low) / 2;

    // guess is the result after squaring
    int guess = mid * mid;

    // Yes...it is a perfect square.
    if (guess == x) return true;

    // If the result after squaring is < x, then all elements < low will be < x after squaring, so we'll skip elements to the left of mid.
    else if (guess < x) low = mid + 1;

    // If the result after squaring is > x, then all elements > high will be > x after squaring, so we'll skip elements to the right of mid.
    else high = mid - 1;
  }

  // Nope...it isn't a perfect square.
  return false;
}
```
