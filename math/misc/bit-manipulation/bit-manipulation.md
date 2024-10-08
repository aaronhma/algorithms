# Bit Manipulation

## Binary Numbers

In programming, an $n$-bit integer is stored as a binary number that consists of $n$ bits. For example C++'s built-in `int` data type is $32$-bits. If we were to represent $43$ in binary the $(truncated)$ version is $101011$.

**NOTE: We don't care about the 0s before the first 1 in binary.**

## Signed & Unsigned

Bit representations of a number is either signed or unsigned. A signed number is a number that can be positive and negative. On the other hand, an unsigned number cannot be negative. An example of this with `int`:

-   `int`: $-2^{31}$ - $2^{31} - 1$
-   `unsigned int`: $0$ - $2^{32} - 1$

## Overflow

If an number is larger than upper bound of the bit representation, the number will overflow. In a signed representation, the next number after $2^{n - 1} - 1$ is $-2^{n - 1}$.

## Bit Operations

### AND Operation (Masking)

The & operation between $x$ & $y$ returns 1 for every two bits between $x$ and $y$ that are both 1 at index $i$.

![AND Operation](./images/and.png)

### OR Operation (Merging)

The | operation between $x$ | $y$ returns 1 if the bit at position $i$ in $x$ or $y$ is 1.

![OR Operation](./images/or.png)

### XOR Operation

The ^ operation between $x$ ^ $y$ returns 1 if the bit at position $i$ in $x$ is 1 and the bit at position $i$ in $y$ is 0 (or vice versa).

![XOR Operation](./images/xor.png)

### NOT Operation

The ~ operation returns $1$ if the position $i$ at $x$ is $0$ or $0$ if the position $i$ at $x$ is $1$.

![AND Operation](./images/not.png)

> The following code's output is `-1`:
> ```cpp
> int x = 0;
> cout << ~x << "\n"; // -1
> ```

## Bit Shifts

### Left Shift << (Fast Multiplication)

The left shift operation $x << k$ can be used to add $k$ zero bits to $x$ (multiplying the number by $10^k$).

**Usage:**

```cpp
x << 2; // adds 2 0s to the end of x
```

### Right Shift >> (Fast Division)

The right shift operation $x >> k$ removes $k$ bits $x$ (dividing the number by $10^k$).

**Usage:**

```cpp
x >> 2; // removes 2 bits from the end of x
```

## Bit Masks

# TODO: https://stackoverflow.com/questions/10493411/what-is-bit-masking

A mask defines which bits you want to keep, and which bits you want to clear.

Masking is the act of applying a mask to a value. This is accomplished by doing:

- Bitwise $\text{AND}$ing in order to extract a subset of the bits in the value
- Bitwise $\text{OR}$ing in order to set a subset of the bits in the value
- Bitwise $\text{XOR}$ing in order to toggle a subset of the bits in the value

A bit mask is of the form $1 << k$. We impose a "mask" over bits. An example of a bit mask using **AND**:

```
     1 1 1 0 1 1 0 1   [input]
(&)  0 0 1 1 1 1 0 0    [mask]
------------------------------
     0 0 1 0 1 1 0 0  [output]
```

[Source (Stack Overflow)](https://stackoverflow.com/a/53722721)

## Additional Useful Functions

-   `__builtin_clz(x)`: the number of zeros at the beginning of the bit representation
-   `__builtin_ctz(x)`: the number of zeros at the end of the bit representation
-   `__builtin_popcount(x)`: the number of ones in the bit representation
-   `__builtin_parity(x)`: the parity (even or odd) of the number of ones in the
    bit representation.

An example of these functions:

![Functions Example](./images/functions_example.png)

**⚠️ Warning: The functions mentioned above only works for integers. For `long long` functions, append the `ll` suffix.**

## Representing Sets [Example](set-using-int.cpp)

A example of the binary operations can be used to model the set $S = \{1, 3, 4, 8\}$ with an integer.

![Sets C++](./images/sets.png)

## Set Operations

Note that the standard set operations can be modeled with binary operators:

![Set Operations](./images/set_operations.png)

## [Storing Floating Point Numbers](https://www.bbc.co.uk/bitesize/guides/zsnbr82/revision/4)

Real numbers are numbers that include fractions/values after the decimal point.

For example, $123.75$ is a real number. This type of number is also known as a **floating point number**.

All floating point numbers are stored by a computer system using a **mantissa** and a **exponent**.

The following example is used to illustrate the role of the mantissa and the exponent. It does not fully reflect the computer's method for storing real numbers but gives the general idea.

The number $123.75$ can be represented using mathematical scientific notation as:

$$1.2375 \times 10^2 = 123.75$$

Multiplying by ten to the power of two ($10^2$) moves the values up two places (or the decimal point down two places) so that the number $123$ is before the decimal point, while the number $75$ now comes immediately after the decimal point. In this example the mantissa is $1.2375$ and the exponent is $2$. Generally you can think of this as:

$$M \times 10^E$$

To represent the same value in binary, apply the following rules:

Represent the number $123.75$ as:

![Image](float_ex.png)

The number created in binary is the mantissa:

$$111101111$$

To understand the exponent, place the decimal point after the most significant bit of the mantissa. The most significant bit is the left most bit.

![Image](float_ex2.png)
