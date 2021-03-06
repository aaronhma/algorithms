# Recursion

## About

Recursion, also known as overlapping subproblems, is where we solve the same subproblem of a problem multiple times.

## Example

For example, let's say we were solving the Fibonnaci problem. If our code was shown here to solve `fib(5)`, here's what our `fib(5)` graph would look like:

```cpp
// Source: Interview Cake
int fib(int n)
{
    if (n == 0 || n == 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}
```

![image](https://www.interviewcake.com/images/svgs/fibonacci__binary_tree_recursive.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/overlapping-subproblems?course=fc1&section=dynamic-programming-recursion))

There's a problem: `fib(2)` is re-calculated **three times**!. To solve this subproblem once, we can use [Dynamic Programming](../dp/README.md).

-   [x] 21. [**Recursion**](https://www.techiedelight.com/Tags/recursion/)
