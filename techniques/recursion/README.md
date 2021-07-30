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

## Solving any Problem with Recursion

1. Understand the problem.
2. We start by looking to define the problem _recursively_. Solve $f(0), f(1), f(2), ...$ until a pattern can be identified and we can write the _recurrence relation_.
3. Implement!

## [Types of Recursion](https://www.geeksforgeeks.org/types-of-recursions/)

There are $6$ types of recursion:

### 1. Tail Recursion

Tail Recursion is a specialized type of recursion where there is a guarantee that nothing is left to execute in the function after a recursive call. In other words, the function returns the result of a recursive call.

Typically in recursion, you have a base-case which is what stops the recursive calls and begins popping the call stack. To use a classic example, the factorial function below illustrates tail recursion. The recursive call occurs after checking the base-case condition.

```cpp
#include<iostream>
using namespace std;

// A tail recursive function to calculate factorial
unsigned factTR(unsigned int n, unsigned int mul)
{
    if (n <= 1) return mul;

    return factTR(n - 1, mul * n);
}

// Driver program to test above function
int main()
{
    cout << factTR(5);
    return 0;
}
```

#### Why do we care?

The tail recursive functions considered better than non tail recursive functions as tail-recursion can be optimized by compiler. Compilers usually execute recursive procedures by using a stack. This stack consists of all the pertinent information, including the parameter values, for each recursive call. When a procedure is called, its information is pushed onto a stack, and when the function terminates the information is popped out of the stack. Thus for the non-tail-recursive functions, the stack depth (maximum amount of stack space used at any time during compilation) is more. The idea used by compilers to optimize tail-recursive functions is simple, since the recursive call is the last statement, there is nothing left to do in the current function, so saving the current function’s stack frame is of no use, so the stack space for $f(x)$ can be re-used for $f(x - 1), f(x - 2), ..., f(2), f(1)$, and the space complexity is brought down from $\theta(n)$ to $\theta(1)$.

#### Can a non-tail recursive function be written as tail-recursive to optimize it?

Consider the following function to calculate factorial of $n$. It is a non-tail-recursive function, though it looks like a tail recursive at first look. If we take a closer look, we can see that the value returned by $fact(n-1)$ is used in $fact(n)$, so the call to $fact(n-1)$ is not the last thing done by $fact(n)$, which **IS NOT** tail recursion.

```cpp
#include<iostream>
using namespace std;

// A NON-tail-recursive function.  The function is not tail
// recursive because the value returned by fact(n-1) is used in
// fact(n) and call to fact(n-1) is not the last thing done by fact(n)
unsigned int fact(unsigned int n)
{
    if (n == 0) return 1;

    return n*fact(n-1);
}

// Driver program to test above function
int main()
{
    cout << fact(5); // 120
    return 0;
}
```

### 2. Head Recursion

Head recursion is extremely similar to tail recursion, just that recursion happens first:

```cpp
void tail(int n)                |     void head(int n)
{                               |     {
    if(n == 1)                  |         if (n == 0)
        return;                 |             return;
    else                        |         else
        cout << n << "\n";      |             head(n-1);
    tail(n-1);                  |         cout << n << "\n";
}                               |     }
```

### 3. Linear Recursion

If a recursive function calling itself for one time, then it’s known as linear recursion.

```cpp
void fun(int n)
{
    // some code
    if (n == 0) return;

    if (n > 0)
    {
        fun(n-1); // Calling itself only once
    }
    // some code
}
```

### 4. Tree Recursion

Tree Recursion is the opposite of linear recursion - if a recursive function is calling itself more than once, it's known as tree recursion.

```cpp
void fun(int n)
{
    if (n > 0) {
        printf("%d ", n);

        // Calling once
        fun(n - 1);

        // Calling twice
        fun(n - 1);
    }
}
```

### 5. Indirect & Direct Recursion

If a function calls itself, it’s known as direct recursion. This results in a one-step recursive call: the function makes a recursive call inside its own function body.

```cpp
// Direct recursion:
int fun(int x)
{
  // base case
  if (x == 0)
  {
    return 1;
  }

  return fun(x - 1);
}
```

If the function $f_1$ calls another function $f_2$ and $f_2$ calls $f_1$ then it is indirect recursion (or mutual recursion).

This is a two-step recursive call: the function calls another function to make a recursive call.

```cpp
// Indirect recursion:
void a(int x); // We define the "template" of function a here so function b knows that function a exists

void b(int x) {
  if (x == 1)
    return;

  a(x - 1);
}

void a(int x) {
  if (x == 0)
    return;

  b(x - 1);
}
```

### 6. Nested Recursion

In this recursion, a recursive function will pass the parameter as a recursive call. That means **"recursion inside recursion"**.

```cpp
#include <bits/stdc++.h>

int fun(int n)
{
	if (n > 100)
		return n - 10;

	// A recursive function passing parameter
	// as a recursive call or recursion
	// inside the recursion
  	printf("fun(fun(n = %d + 11)) = %d\n", n, fun(fun(n + 11)));
	return fun(fun(n + 11));
}

int main()
{
	printf("%d\n", fun(95)); // 91
	return 0;
}
```
