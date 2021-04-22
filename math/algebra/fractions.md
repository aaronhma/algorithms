# Fractions

## About

A fraction is a rational number $\frac{a}{b}$ where $b \neq 0$. A fraction where the **denominator** (# on the bottom of the fraction) is equal to $0$ is $undefined$.

## Continued Fractions

### Part 1: Finite Continued Fractions

**Problem:**

Compute $1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{2}}}$.

#### _**Solution 1:**_

We can work from the bottom, taking reciprocals as we go (eg. $\frac{a}{\frac{b}{c}} = a * \frac{c}{b}$), and we find that the answer is $\frac{17}{12}$.

### Part 2: Infinite Continued Fractions

**Problem:**

Compute $1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{...}}}$.

**Hint 1: This is the same problem as before, but we have a twist: the fraction never ends.**
**Hint 2: Think how we can use algebra to solve this problem.**

We let $1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{...}}} = x$. Then, we realize that $x + 1 = 2 + \frac{1}{2 + \frac{1}{2 + \frac{1}{...}}}$. So, the fraction on the bottom of the first $1$ is $x + 1$, and we can simplify our expression as shown:

$$1 + \frac{1}{x + 1} = x$$

Using $1 + \frac{a}{b} = \frac{a + b}{b}$, we can further simplify our equation:

$$\frac{x + 2}{x + 1} = x$$

We then solve the equation for $x$.

$$x + 2 = x(x + 1)$$
$$x + 2 = x^2 + x$$
$$2 = x^2$$
$$x = \pm\sqrt{2}$$

Since, all our numbers are positive, having $x = -\sqrt{2}$ is impossible. Thus, $1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{...}}} = \sqrt{2} \approx \frac{17}{12}$.

## Comparing Fractions
