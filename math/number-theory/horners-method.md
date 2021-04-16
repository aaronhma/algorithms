# Horner's Method for Polynomial Evaluation [C++](horners-method.cpp)

## Problem Statement

Given a polynomial of the form $y = c_1x^{n} + c_2x^{n - 1} + .... + c_{n - 2}x^{1} + c_{n - 1}$, find $y$ given $x$.

[OJ - CodeChef](https://www.codechef.com/CDUO2021/problems/EZEY)

## Approach 1: Brute Force

Using the method [here](https://www.includehelp.com/cpp-tutorial/polynomial-evaluation-using-structure-with-cpp-program.aspx), we compute $c_1x^{n} + c_2x^{n - 1} + .... + c_{n - 2}x^{1} + c_{n - 1}$ in $\theta(n^2)$ time. This can be improved to $\theta(n \ log \ n)$ using [Fast Exponentiation](https://github.com/aaronhma/algorithms/tree/master/math/src/fast-pow) or [Fast Modular Exponentiation](https://github.com/aaronhma/algorithms/tree/master/math/src/fast-mod-expo), both of which run in $\theta(log \ n)$ time, compared to $\theta(n)$ `pow(x, n)`.

Memory Efficient Program: Instead of storing the data as a pair ${\text{coefficient}, \text{power}}$, we realize that $power$ is the set $\{i | i \in \{0,1,2,3,...,n\}\}$, so we only store the coefficients.

## Approach 2: Horner's Method for Polynomial Evaluation

Horner's Method Pre-requisite: Instead of storing the data as a pair ${\text{coefficient}, \text{power}}$, we realize that $power$ is the set $\{i | i \in \{0,1,2,3,...,n\}\}$, so we only store the coefficients.

Horner's method can be used to evaluate a polynomial in $\theta(n)$ time. Horner's method evaluates $2x^3 - 6x^2 + 2x - 1$ as $((2x - 6)x + 2)x - 1$ (we get this by factoring out $x$ at each step until we have $2x - 6$, where we can't factor $x$).

### **[C++ Code](horners-method.cpp) <-- May not work for all problems**
