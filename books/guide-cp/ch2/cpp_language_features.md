# C++ Language Features

## Print Floating Integers with Precision

```cpp
printf("%.9f\n", x); // Print x with 9 digits of precision
```

## Modular Arithemtic

Sometimes an answer to a problem is too big for the OJ to check. Thus, we use modular arithemtic. An example of this can be found of the $n! \ \% \ m$ problem:

```cpp
long long x = 1;

for (int i = 1; i <= n; i++) {
  x = (x * i) % m;
}

cout << x << "\n";
```

This works because of the follow equivalences:

* $(a + b) \ \% \ m = (a \ \% \ m + b \ \% \ m) \ \% \ m$
* $(a - b) \ \% \ m = (a \ \% \ m - b \ \% \ m) \ \% \ m$
* $(a * b) \ \% \ m = (a \ \% \ m * b \ \% \ m) \ \% \ m$

## Checking for If Two Floating Point Numbers is Equivalent

Due to precision issues $a == b$ is not a good idea. A better way is to assume that $a$ and $b$ are equivalent if $|a - b|$ is less than $\epsilon$, where $\epsilon$ is very small. Assume that $\epsilon = 10^{-9}$:

```cpp
double a, b; // assume they are already defined

if (abs(a - b) < 1e-9) {
  // they are equal
} else {
  // they are not equal
}
```
