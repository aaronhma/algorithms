# Ternary Search

## About

Ternary search provides an efficient way to find the minimum value of a function that first decreases and then increases. Assume that we know that the value of $x$ that minimizes $f(x)$ is in a range $[x_L , x_R]$. The idea is to divide the range into $3$ equal-sized parts $[x_L, a]$, $[a, b]$, $[b, x_R]$ by choosing:

$$a = (2*x_L + x_R)/3$$
$$b = (x_L + 2*x_R)/3$$

Then, if $f(a) < f(b)$, we can conclude that the minimum value is in the range $[x_L, b]$, and otherwise it must be in the range $[a, x_R]$.
