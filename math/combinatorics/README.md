# Combinatorics

## About

This section contains content from [The Daily Challenge with Po-Shen Loh - Module 3: Combinatorics](https://daily.poshenloh.com/courses/3-combinatorics), [the Art of Problem Solving: Introduction to Counting & Probability](https://artofproblemsolving.com/store/item/intro-counting), and [the Art of Problem Solving: Intermediate Counting & Probability](https://artofproblemsolving.com/store/item/intermediate-counting).

## # of Subsets

The # of subsets that a array with $n$ elements is $2^n$ (with $\emptyset$) or $2^n - 1$(without $\emptyset$).

## Binomial Coefficients

The binomial coefficient ${n\choose k}$ gives the number of ways we can choose a subset of $k$ elements from a set of $n$ elements. For example, if the set is $\{1, 2, 3, 4, 5\}$, then $n = 5$. If $k = 3$, then ${n\choose k} = {5\choose 3} = 10$. The subsets are:

$$\{ 1, 2, 3 \}, \{ 1, 2, 4 \}, \{ 1, 2, 5 \}, \{ 1, 3, 4 \}, \{ 1, 3, 5 \}, \{ 1, 4, 5 \}, \{ 2, 3, 4 \}, \{ 2, 3, 5 \}, \{ 2, 4, 5 \}, \{ 3, 4, 5 \}$$.

## Calculating Binomial Coefficients

Binomial coefficients can be calculated through the following recurisve formula:

${n\choose k} = {n - 1\choose k - 1} + {n - 1\choose k}$

With the following base cases:

${n\choose 0} = {n\choose n} = 1$

Another way to calculate a binomial coefficient is through the following formula:

${n\choose k} = \dfrac{n!}{k!(n - k)!}$

For binomial coefficients,

$${n\choose k} = {n\choose n - k}$$

The sum of binomial coefficients is:

$${n\choose 0} + {n\choose 1} + ... + {n\choose n} = 2^n$$

## ℹ️ ⚠️ BONUS! ⚠ ℹ️

Pascal's triangle (shown below) can be used to find ${n\choose k}$.

![Image](https://wikimedia.org/api/rest_v1/media/math/render/svg/23050fcb53d6083d9e42043bebf2863fa9746043)

$n\choose k$ is at row $n - 1$ and the column is at $k - 1$.

## Inclusion-Exclusion

Inclusion-Exclusion is a technique that can be used for counting the size of a union of sets when the sizes of the intersections are known, and vice versa. A simple example of this technique is the formula:

$$|A \cup B| = |A| + |B| - |A \cap B|$$

The same idea can be applied to $3$ sets:

$$|A \cup B \cup C| = |A| + |B| + |C| - |A \cap B| - |A \cap C| - |B \cap C| + |A \cap B \cap C|$$

## Cayley's Formula

Cayley's Formula states that there are a total of $n^{n - 2}$ distinct labeled trees of $n$ nodes.
