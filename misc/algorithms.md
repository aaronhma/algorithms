# Algorithms

An algorithm, its running time. Generally you want to choose the most efficient algorithm, whether you’re trying to optimize for time or space.

## Big O notation

> Big O notation is special notation that tells you how fast an algorithm is. Or Run time of algorithms is expressed in Big O notation.

Big O notation tells you the number of operations an algorithm will make. It’s called Big O notation because you put a "big O" in front of the number of operations (it sounds like a joke, but it’s true!).

Algorithm speed isn’t measured in seconds, but in growth of the number of operations or  growth of an algorithm. Or Instead, we talk about how quickly the run time of an algorithm increases as the size of the input increases.

Big O notation is the language we use for talking about how long an algorithm takes to run. It's how we compare the efficiency of different approaches to a problem.

- For example, suppose you have a list of size *n*.

Simple search needs to check each element, so it will take *n* operations. The run time in Big O notation is **O(n)**. Where are the seconds? There are none—Big O doesn’t tell you the speed in seconds. Big O notation lets you compare the number of operations. It tells you how fast the algorithm grows.

Big O ignores constants, but **sometimes the constants matter**. If we have a script that takes 5 hours to run, an optimization that divides the runtime by 5 might not affect big O, but it still saves you 4 hours of waiting.

### Popular Big O runtimes sorted from faster to slowest

Big O lets us compare algorithms performance based on input size. Intuition: If 1 operation takes 1s then here's how algorithms with different complexities would perform on input with size 100:

O(1) - 1s
O(log(n)) ~ 7s
O(n) ~ 1.5m
O(n log(n)) ~ 11m
O(n^2) ~ 2.7 hours

1. **O(log n)** log time. Ex: Binary search.

*Binary search*: If the list is 100 items long, it takes at most 7 guesses. If the list is 4 billion items, it takes at most 32 guesses.

2. **O(n)** linear time. ex: Simple search.

*linear time*: To check each number, one by one. If this is a list of 100 numbers, it takes up to 100 guesses. If it’s a list of 4 billion numbers, it takes up to 4 billion guesses. So the maximum number of guesses is the same as the size of the list.

3. **O(n * log n)**. ex: A fast sorting algorithm, like quicksort

4. **O(n2)** ex: A slow sorting algorithm, like selection sort

5. **O(n!)** factorial time ex: A really slow algorithm, like the traveling salesperson

## Running time

The most efficient algorithm is to optimize for time or space.

## Space complexity

Sometimes we want to optimize for using less memory instead of (or in addition to) using less time. Talking about memory cost (or "space complexity") is very similar to talking about time cost. We simply look at the total size (relative to the size of the input) of any new variables we're allocating.

Usually when we talk about space complexity, we're talking about additional space, so we don't include space taken up by the inputs.


## Definition

theorems: in mathematical writing, the most important technical statements.

Lemma: a technical statement that assists with the proof of a theorem.

corollary: a statement that follows immediately from an already proved result, such as a special case of a theorem.

proposition: for stand-alone technical statements that are not particularly important in their own right.

## Algorithms Definition

### Logarithms

For a positive integer `n`, `log2 n` means, type `n` into a calculator, and count the number of times you need to divide it by 2 before the result is 1 or less.

ex: takes **5 steps** divide-by-twos to bring 32 down to 1, so log2 32 = 5.
    takes **10 steps** divide-by-twos bring 1024 down to 1, so log2 1024 = 10.

### Algorithm

algorithm: is a set of well-defined rules for solving some computational problem.

fast algorithm: is an algorithm whose worst-case running time grows slowly with the input size.

### Three guiding principles for the analysis of algorithms

1. worst-case analysis, to promote general-purpose algorithms that work well with no assumptions about the input
2. big-picture analysis, which balances predictive power with mathematical tractability by ignoring constant factors and lower-order terms
3. asymptotic analysis, which is a bias toward large inputs, which are the inputs that require algorithmic ingenuity.
