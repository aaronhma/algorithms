# Dynamic Programming

*Dynamic Programming** is a method for solving a complex problem by breaking it down into a collection of simpler subproblems, solving each of those subproblems just once, and storing their solutions - ideally, using a memory-based data structure. The next time the same subproblem occurs, instead of recomputing its solution, one simply looks up the previously computed solution, thereby saving computation time at the expense of a (hopefully) modest expenditure in storage space. (Each of the subproblem solutions is indexed in some way, typically based on the values of its input parameters, so as to facilitate its lookup.) The technique of storing solutions to subproblems instead of recomputing them is called "memoization".

Dynamic programming algorithms are used for optimization (for example, finding the shortest path between two points, or the fastest way to multiply many matrices). A dynamic programming algorithm will examine the previously solved subproblems and will combine their solutions to give the best solution for the given problem.

## About

Dynamic programming (DP) helps to eliminate the unnecessarily repeating the same result over and over again. Instead, it saves the result of every subproblem and reuses it multiple times to avoid extra computation. The idea behind it is to store the results of subproblems, so we don't have to re-compute them later.

## When to Use Dynamic Programming?

1. Counting something (eg. number of ways)
2. Minimize/Maximize value
3. Yes/No problems

## Iteration vs. Recursion in DP

| Iteration         | Recursion            |
| ----------------- | -------------------- |
| Speed             | Easier to apply      |
| Easier complexity | Fewer states         |
| Shorter code      | Order doesn't matter |
| Harder techniques | -                    |
