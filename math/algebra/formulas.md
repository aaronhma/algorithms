# Formulas to Know

1. Arithmetic Mean

$$AM = \frac{\text{sum of all values}}{\text{number of values}}$$

2. Geometric Mean

$$GM = \sqrt{ab}$$

3. Harmonic Mean

$$HM = \frac{(GM)^2}{a + b} = \frac{2ab}{a + b}$$

4. Probability

$$Probability = \frac{\text{favorable target outcomes}}{\text{total outcomes}}$$

5. Quadratic Formula

$$x = \frac{-b \pm \sqrt{b^2-4ac}}{2a}$$

when $ax^2 + bx + c = 0$.

**The discriminant of a quadratic equation is $\Delta = b^2 - 4ac$. If $\Delta > 0$, there are $2$ real solutions ($2$ real $x$). If $\Delta = 0$, then there is $1$ real solution. If $D < 0$, there are $2$ imaginary solutions.**

6. Distance Formula Between $(x_1, y_1)$ and $(x_2, y_2)$

$$d = \sqrt{(x_1 - x_2)^2 + (y_1 - y_2)^2}$$

7. Slope Between $(x_1, y_1)$ and $(x_2, y_2)$

$$\Delta = \frac{y_2-y_1}{x_2-x_1}$$

This is essentially the $m$ value in $y = mx + b$.

8. Midpoint Formula

The midpoint of the points $(x_1, y_1)$ and $(x_2, y_2)$ is:

$$(\frac{x_1 + x_2}{2}, \frac{y_1 + y_2}{2})$$


9. Circle Formulas

### $\pi$ Approximation: $\pi \approx \frac{22}{7}$

$$\text{diameter of a circle } = 2r$$
$$\text{radius of a circle } = \frac{d}{2}$$
$$\text{circumference of a circle } = 2 \pi r = \pi d$$
$$\text{area of a circle } = \pi r^2$$

10. Distance Formulas

Assuming that $d$ is the distance, $r$ is the rate, and $t$ is the time, the following formulas will always hold true:

* $d = rt$
* $r = \frac{d}{t}$
* $t = \frac{d}{r}$

11. Average Distance
5
**Problem: You rode your bike up a hill for $4$ mph and rode your bike down a hill for $12$ mph. What is the average speed?**

**Solution 1:**

The problem is that we don't know the distance of the hill. If we did know the distance of the hill, we can compute the average speed as $\frac{\text{total distance traveled}}{\text{total time taken}}$.

But, we can let $d$ be the one-way distance of the hill in miles, and compute the toal time taken in terms of $d$. The total time taken for travelling up the hill is $\frac{\text{distance}}{\text{rate}} = \frac{d}{4}$ hours. The total time taken for travelling down the hill is $\frac{\text{distance}}{\text{rate}} = \frac{d}{12}$ hours.

Now, we can compute the average speed through the formula $\frac{\text{total distance traveled in miles}}{\text{total time taken in hours}} = \frac{2d \text{ (d for travelling up, another d for travelling down)}}{\frac{d}{4} + \frac{d}{12}} = \frac{2d}{\frac{4d}{12}} = 2d * \frac{12}{4d} = \frac{12}{2} = 6$ mph on average for the entire bike ride.

**Tip: In some problems (like this one), we can set the length of the hill to a fixed length, say $2$ miles long, and still get $6$.**

**Solution 2:**

We can use the Harmonic Mean formula with speed $a = 4$ and speed $b = 12$:

$$\frac{1}{\frac{\frac{1}{a} + \frac{1}{b}}{2}} = \frac{2ab}{a + b} = \frac{2 * 4 * 12}{16} = \frac{4 * 12}{8} = \frac{12}{2} = 6$$

**WARNING: This formula only works when the distance traveled is the same for both rates.**

12. Guass Formula

Carl Friedrich Guass, at 5, noticed a trick to add $n + (n + 1) + (n + 2) + ... + (n + k - 2) + (n + k - 1) + (n + k)$, where $n, k \in \mathbb{Z}$.

**Example:**

$$1 + 2 + 3 + ... + 100 + 101 + 102 = ?$$

Guass noticed that we can pair $1$ with $102$ to get $103$, $2$ and $101$ to get $103$. Then, $1 + 2 + 3 + ... + 100 + 101 + 102 = \frac{(102 - 1 + 1) \ * \ 103}{2} = 51 * 103 = 5253$.
