# Working with Numbers

## `Long Long` Data Type

The most commonly used integer type in Competitive Programming is `int`, though sometimes it is not large enough. If the $32$-bit type `int` is not large enough, the $64$-bit `long long` can be used. The following code defines a `long long` variable:

```cpp
typedef long long ll; // For code simplification

ll x = 123456789123456789LL;
```

The suffix $LL$ means that the type of the number is `long long`.

### Common `Long Long` Mistakes

A common mistake when using `long long` is when the type `int` is still used somewhere in the code. For example, this code contains an error:

```cpp
int a = 123456789;
long long b = a * a;
cout << b << "\n";
```

The error behind this is because a is an integer. When computing $a*a$, $a*a$ is first multiplied (into an integer), then converted into the `long long` data type. Obviously, this will lead to overflow (in some cases).

## Floating Point Numbers

### Types of Floating Point Numbers

-   `float`: C++'s default 32-bit data type (7 decimal digits of precision)
-   `double`: C++'s 64-bit data type (15 decimal digits of precision)
-   `long double`: C++'s 80-bit data type (15 - 33 digits of precision)

### Printing Floating Integers with Precision

```cpp
double x;

printf("%.9f\n", x); // Print x with 9 digits of precision
```

**NOTE:** _"A difficulty when using floating point numbers is that some numbers cannot be represented accurately. See below for an example:" - Guide to Competitive Programming (by Antti Laaksonen)_

```cpp
double x = 0.3*3+0.1;
printf("%.20f\n", x);

// Expected output: 1.00
// Actual output: 0.99999999999999988898
```

### Checking for If Two Floating Point Numbers is Equivalent

Due to precision issues $a == b$ is not a good idea. A better way is to assume that $a$ and $b$ are equivalent if $|a - b|$ is less than $\epsilon$, where $\epsilon$ is very small. Assume that $\epsilon = 10^{-9}$:

```cpp
double a, b; // assume they are already defined

if (abs(a - b) < 1e-9) {
  // they are equal
} else {
  // they are not equal
}
```

## Modular Arithmetic

Sometimes an answer to a problem is too big for the OJ to check. Thus, we use modular arithemtic (which gives us a rough estimate of the answer). An example of this can be found of the $n! \ \% \ m$ problem:

```cpp
long long x = 1;

for (int i = 1; i <= n; i++) {
  x = (x * i) % m;
}

cout << x << "\n";
```

This works because of the follow equivalences in Number Theory:

-   $(a + b) \ \% \ m = (a \ \% \ m + b \ \% \ m) \ \% \ m$
-   $(a - b) \ \% \ m = (a \ \% \ m - b \ \% \ m) \ \% \ m$
-   $(a * b) \ \% \ m = (a \ \% \ m * b \ \% \ m) \ \% \ m$
