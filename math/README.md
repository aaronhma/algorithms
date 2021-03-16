# Math

| ☆   | Math Algorithms                                        | C++     | Problems |
| --- | ------------------------------------------------------ | ------- | -------- |
|     | [Combinatorics](./combinatorics/README.md)             | [C++]() |          |
|     | [Euclidean Algorithm](./euclidean-algorithm/README.md) | [C++]() |          |
|     | [Geometry](./geometry/README.md)                       | [C++]() |          |
|     | [Number Theory](./number-theory/README.md)             | [C++]() |          |

# CP Math Intro

### Primes

A prime number if a number is divisible by 1 and itself. In C++ and Python, the modulus operator (%) is used to checked for divisibility.

```cpp
// Source: https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/
//
// assume this is a function that returns a boolean
// input:
//  - n: input integer
if (n <= 1)
  return false; // not prime
else if (n == 2)
  return true; // prime

for (int i = 2; i < n; i++)
  if (n % i == 0)
    return false; // not prime

return true; // prime
```

### GCD

Greatest Common Divisor (GCD) is where the greatest number <span style="white-space: nowrap!important">n</span> can be divided evenly into both a and b.

```cpp
// Source: https://www.topcoder.com/community/competitive-programming/tutorials/mathematics-for-topcoders/
for (int i = min(a,b); i >= 1; i–-)
  if (a % i == 0 && b % i == 0)
    return i;
```

#### Euclidean Algorithm

##### About

([Source](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm))

-   If A = 0 then GCD(A,B)=B, since the GCD(0,B)=B, and we can stop.
-   If B = 0 then GCD(A,B)=A, since the GCD(A,0)=A, and we can stop.
-   Write A in quotient remainder form (A = B⋅Q + R)
-   Find GCD(B,R) using the Euclidean Algorithm since GCD(A,B) = GCD(B,R)

##### Worked Example

([Source](https://www.khanacademy.org/computing/computer-science/cryptography/modarithmetic/a/the-euclidean-algorithm))

-   GCD(A=270, B=192)

*   ✅A != 0
*   ✅B != 0
*   ✅Use long division to find that 270/192 = 1 with a remainder of 78. We can write this as: 270 = 192 \* 1 +78
*   ✅Find GCD(192,78), since GCD(270,192)=GCD(192,78)

##### Implementation

([Source](https://en.wikipedia.org/wiki/Euclidean_algorithm))

-   Division-based:

```python
def gcd(a, b):
    if a == 0:
      return b
    elif b == 0:
      return a

    while b != 0:
        t = b
        b = a % b
        a = t

    return a
```

-   Subtraction based:

```python
def gcd(a, b):
    while a != b:
        if a > b:
            a = a − b
        else:
            b = b − a
    return a
```

-   Recursion:

```python
# This is the best soluton:
def gcd(a, b):
    if b == 0:
        return a

    return gcd(b, a % b)

# Doing this, we can also find the LCM:
def lcm(a, b):
  return b * a / gcd(a, b)
```

# Addition

Example: [Arrange Coins](https://leetcode.com/problems/arranging-coins)
1 + 2 + 3 ... + k = (k \* (k + 1)) / 2
