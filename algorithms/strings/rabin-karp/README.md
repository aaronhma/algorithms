# Rabin-Karp Algorithm [(C++)](./rabin-karp.cpp)

## About

Given a string $text$, print the starting indexes of the substring $pattern$ in $text$ in $\theta(n + m)$ time.

For example, if $text = "AABACAABA"$ and $pattern = "AABA"$, the answer would be $\{ 0, 5 \}$.

## Algorithm

We use the idea of hashing in the Rabin-Karp algorithm.

We start by computing the hash for the $pattern$, and the hash value for each character in the text.

Next, we compare each substring of length $|pattern|$ using a sliding-window idea and comparing the hashes. If the hashes are the same, then we have found a match and add the starting index to our answer array.
