# Modular Arithemtic

## Basic Properties

* $(A + B) \ \% \ C = (A \ \% \ C + B \ \% \ C) \ \% \ C$
* $(A - B) \ \% \ C = (A \ \% \ C - B \ \% \ C) \ \% \ C$
* $(A * B) \ \% \ C = (A \ \% \ C * B \ \% \ C) \ \% \ C$
* Division is **NOT** distributive in Modular Arithemtic! In other words, $(\frac{A}{B}) \ \% \ C \neq (\frac{A \ \% \ C}{B \ \% \ C}) \ \% \ C$.

## ℹ️ Tips

1. There is 1 in a billionth chance that $a \ \% \ b$ are the same for two different numbers $a$ and $b$.

## Why $ans \ \% \ (10^9 + 7)$ in some CP problems?

$$10^9 + 7 = 1000000007$$

Also, $1000000007$ is a large prime number.

The reason we print $ans \ \% \ (10^9 + 7)$ in some CP problems, is to prevent integer overflow. The largest integer data type in C++ is `unsigned long long` which can handle integers from $0$ to $2^{64} - 1$. But in some problems where the growth rate of output is very high, this range may be insufficient.
