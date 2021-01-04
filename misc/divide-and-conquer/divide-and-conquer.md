# Divide & Conquer

([Source](udacity.com))

Source: Udacity's Data Structures & Algorithm Nanodegree

## About

Divide and Conquer approach is suitable to solve a big (scale) problem by breaking it into smaller sub-problems, where each sub-problem looks exactly similar to the original problem. In general, there are three phases:

- Divide - Break the given problem into smaller sub-problems
- Conquer - Solve each sub-problem using recursion. The smallest sub-problem (base case) would have a simple straightforward solution.
- Combine - This phase will automatically execute as a part of the recursion call stack, which combines the solution of smaller sub-problems to generate the final solution.

- [x] [Divide & Conquer algorithms](https://www.techiedelight.com/Category/divide-conquer/)

A **divide and conquer** algorithm works by recursively breaking down a problem into two or more sub-problems of the same (or related) type (divide), until these become simple enough to be solved directly (conquer). The solutions to the sub-problems are then combined to give a solution to the original problem.

Divide and conquer algorithms are recursive algorithms. To solve a problem using D&C, there are two steps:

1. Figure out the base case. This should be the simplest possible case.
2. Divide or decrease your problem until it becomes the base case.

**Divide and conquer works by breaking a problem down into smaller and smaller pieces. If you’re using D&C on a list, the base case is probably an empty array or an array with one element.**

## Tips

When you’re writing a recursive function involving an array, the base case is often an empty array or an array with one element. If you’re stuck, try that first.

- functional programming

“Why would I do this recursively if I can do it easily with a loop?” Well, this is a sneak peek into functional programming! Functional programming languages like Haskell don’t have loops, so you have to use recursion to write functions like this. If you have a good understanding of recursion, functional languages will be easier to learn.
