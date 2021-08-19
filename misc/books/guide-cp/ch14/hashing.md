# Polynomial Hashing

## About

A usual way to implement string hashing is using polynomial hashing, which means that the hash value of a string $s$ of length $n$ is:

$$(s[0]A^{n - 1} + s[1]A^{n - 2} + ... + s[n - 1]A^0) \ \% B$$

where $s[0], s[1], ..., s[n - 1]$ are interpreted as character codes and $A$ and $B$ are prechosen constants.

For example, the hash value of the string $s = "ABACB"$ and $A = 3$ and $B = 97$. Thus, the hash value is:

$$(65 * 3^4 + 66 * 3^3 + 65 * 3^2 + 66 * 3^1 + 67 * 3^0) \ \% \ 97 = 40$$

## Implementation

When polynomial hashing is used, we can calculate the hash value of any substring of a string s in $\theta(1)$ time after an $\theta(n)$ time preprocessing. The idea is to construct an array $h$ such that $h[k]$ contains the hash value of the prefix $s[0 ... k]$. The array values can be recursively calculated as follows:

$$h[0] = s[0]$$
$$h[k] = (h[k - 1]A + s[k]) \ \% \ B$$

In addition, we construct an array $p$ where $p[k] = A^k \ \% \ B$:

$$p[0] = 1$$
$$p[k] = (p[k - 1]A) \ \% \ B$$

Constructing the above arrays takes $\theta(n)$ time. After this, the hash value of any substring $s[a ... b]$ can be calculated in $\theta(1)$ time using the formula

$$(h[b] - h[a - 1]p[b - a + 1]) \ \% \ B$$

assuming that $a > 0$. If $a = 0$, the hash value is simply $h[b]$.

## Collisions

An evident risk when comparing hash values is a collision - two strings have different values but that hash values are the same.

Collisions are always possible because the number of different strings is larger than the number of different hash values. However, the probability of a collision is small if the constants $A$ and $B$ are carefully chosen. A usual way is to choose random constants near $10^9$, for example, as follows:

$$A = 911382323$$
$$B = 972663749$$

We can make the probability of a collision smaller by calculating multiple hash values using different parameters. It is highly unlikely that a collision would occur in all hash values at the same time.
