# String Hashing

## About

Hashing algorithms are helpful in solving a lot of problems.

We want to solve the problem of comparing strings efficiently. The brute force way of doing so is just to compare the letters of both strings, which has a time complexity of $\theta(min(n_1,n_2))$ if $n_1$ and $n_2$ are the sizes of the two strings. We want to do better. The idea behind strings is the following: we convert each string into an integer and compare those instead of the strings. Comparing two strings is then an $\theta(1)$ operation.

## Calculating Hashes

$$hash(s) = (s[0] + s[1] * p + s[2] * p^2 + ... + s[n - 1] * p^{n - 1}) \ \% \ m$$
$$ = \sum\_{i=0}^{n-1} \ (s[i] \* p^i) \ \% \ m$$

where $p$ and $m$ are some positive numbers. This is a **polynomial rolling hash function**.

**NOTE: To avoid most collisions, we try to make $m$ a large prime number.**

Here is an example of calculating the hash of a string s, which contains only lowercase letters. We convert each character of s to an integer. Here we use the conversion $a \rightarrow 1, b \rightarrow 2, ..., z \rightarrow 26
$. Converting $a \rightarrow 0
$ is not a good idea, because then the hashes of the strings $a, aa, aaa, ...$ all evaluate to $0$.

```cpp
long long compute_hash(string s) {
    const int p = 31;
    const int m = 1e9 + 9;
    long long hash_value = 0;
    long long p_pow = 1;

    // compute hash
    for (char c : s) {
        hash_value = (hash_value + (c - 'a' + 1) * p_pow) % m;
        p_pow = (p_pow * p) % m;
    }

    return hash_value;
}
```
