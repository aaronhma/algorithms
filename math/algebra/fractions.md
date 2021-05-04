# Fractions

## About

A fraction is a rational number $\frac{a}{b}$ where $b \neq 0$. A fraction where the **denominator** (# on the bottom of the fraction) is equal to $0$ is $undefined$.

## Continued Fractions

### Part 1: Finite Continued Fractions

**Problem:**

Compute $1 + \frac{1}{2 + \frac{1}{2 + \frac{1}{2}}}$.

#### _**Solution:**_

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

**Problem:**

Given $\frac{a}{b}$ and $\frac{c}{d}$, is $\frac{a}{b} = \frac{c}{d}$, $\frac{a}{b} < \frac{c}{d}$, or $\frac{a}{b} > \frac{c}{d}$?

**Solution:**

We can convert the fractions into common denominators.

$$\frac{a}{b} = \frac{ad}{bd}$$
$$\frac{c}{d} = \frac{cb}{db}$$

Then, we compare $\frac{ad}{bd}$ with $\frac{cb}{db}$. **Note that we don't have to compute $bd$.**

## Interesting Facts About Comparing Fractions

-   $\frac{a}{b} < \frac{a + 1}{b + 1} < 1$ if $a < b$ (The fraction $\frac{a + 1}{b + 1}$ gets closer to $1$ as $\frac{4 + 1 million}{9 + 1 million} \approx \frac{1 million}{1 million} = 1$)
-   $+\infty > \frac{a}{b} > \frac{a + 1}{b + 1}$ if $a > b$.
-   If we have fractions $\frac{a}{b}$ and $\frac{c}{d}$, where $\frac{a}{b} < \frac{c}{d}$, then:

$$\frac{a}{b} < \frac{a + c}{b + d} < \frac{c}{d}$$

**Example:**

Which fraction is bigger?

$$\frac{22}{7}, \frac{33}{10}, \frac{11}{3}$$

We immediately know that $\frac{33}{10}$ is the middle number. Then, we only have to compare $\frac{33}{10}$ with one other fraction.

**If we compare $\frac{33}{10}$ with one of the other fractions, we have two cases:**

-   $\frac{33}{10} > \text{Some fraction}$: We're done.
-   $\frac{33}{10} < \text{Some fraction}$: The other fraction is bigger

Let's compare $\frac{33}{10}$ with $\frac{11}{3}$. We find that $\frac{11}{3}$ is the biggest of these three fractions.
