# Calculating Fibonacci Numbers in $\theta(log \ n)$

## Fibonacci Number Properties

Fibonacci numbers have the following identities:

-   Cassini's identity:

$$F_{n - 1}F_{n + 1} - F_n^2 = (-1)^n$$

-   The "addition" rule:

$$F_{n+k} = F_k F_{n+1} + F_{k-1} F_n$$

-   With $k = n$ in the previous equation:

$$F_{2n} = F_n (F_{n+1} + F_{n-1})$$

## Implementation

Using the "addition" rule, we can solve the Fionacci problem in $\theta(log \ n)$. We return a pair $\{F_n, F_{n + 1}\}$. We let $F_n = F_{2k}$ so we can simplify this:

$$
\begin{array}{rll}
                        F_{2k} &= F_k \left( 2F_{k+1} - F_{k} \right). \\
                        F_{2k+1} &= F_{k+1}^2 + F_{k}^2.
\end{array}
$$

```cpp
#define P pair<ll, ll>
const ll mod = 1e9 + 7;

P fib(ll n) {
  if (n == 0)
    return {0, 1};

  P prev = fib(n >> 1);
  ll c = (prev.f * (2 * prev.s - prev.f)) % mod;
  ll d = (prev.f * prev.f + prev.s * prev.s) % mod;

  if (n & 1) return {d, c + d};

  return {c, d};
}
```
