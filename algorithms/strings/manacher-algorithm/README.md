# Manacher's Algorithm [C++](./manacher.cpp)

## About

Given string $s$ with length $n$. Find all the pairs $(i,j)$ such that substring $s[i...j]$ is a palindrome. String $t$ is a palindrome when $t=t_rev$ ($t_rev$ is a reversed string for $t$).

## Idea

We describe the algorithm to find all the sub-palindromes with odd length, i. e. to calculate $d_1[]$. The solution for all the sub-palindromes with even length (i.e. calculating the array $d_2[]$) will be a minor modification for this one.

For fast calculation we'll maintain the borders $(l,r)$ of the rightmost found sub-palindrome (i. e. the palindrome with maximal $r$). Initially we set $l=0$,$r=−1$.

So, we want to calculate $d_1[i]$ for the next $i$, and all the previous values in $d_1[]$ have been already calculated. We do the following:

* If $i$ is outside the current sub-palindrome, i. e. $i>r$, we'll just launch the trivial algorithm.

So we'll increase $d_1[i]$ consecutively and check each time if the current rightmost substring $[i - d_1[i] \ ... \ i + d_1[i]]$ is a palindrome. When we find the first mismatch or meet the boundaries of $s$, we'll stop. In this case we've finally calculated $d_1[i]$. After this, we must not forget to update $(l,r)$. $r$ should be updated in such a way that it represents the last index of the current rightmost sub-palindrome.

* Now consider the case when $i \leq r$. We'll try to extract some information from the already calculated values in $d_1[]$. So, let's find the "mirror" position of $i$ in the sub-palindrome $(l,r)$, i.e. we'll get the position $j=l+(r−i)$, and we check the value of $d_1[j]$. Because $j$ is the position symmetrical to $i$, we'll almost always can assign $d_1[i] = d_1[j]$.

Again, we should not forget to update the values $(l,r)$ after calculating each $d_1[i]$.

Also, we'll repeat that the algorithm was described to calculate the array for odd palindromes $d_1[]$, the algorithm is similar for the array of even palindromes $d_2[]$. The required modifications can be seen in the code.

## Time Complexity

At the first glance it's not obvious that this algorithm has linear time complexity, because we often run the naive algorithm while searching the answer for a particular position.

However, a more careful analysis shows that the algorithm is linear. In fact, the $Z$-function building algorithm, which looks similar to this algorithm, also works in linear time.

We can notice that every iteration of trivial algorithm increases $r$ by one. Also $r$ cannot be decreased during the algorithm. So, trivial algorithm will make $\theta(n)$ iterations in total.

Also, other parts of Manacher's algorithm work obviously in linear time. Thus, we get $\theta(n)$ time complexity.
