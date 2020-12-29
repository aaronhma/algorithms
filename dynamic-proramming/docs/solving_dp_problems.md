# How to solve Dynamic Programming problems?

This writeup was compiled from [Geeks for Geeks: Solving DP Problems](https://www.geeksforgeeks.org/solve-dynamic-programming-problem/) and all credit go there.

## Contents

1. Identify if the problem can be solved with DP
2. Decide a expression with the base parameters
3. Formulate a state relationship
4. Tabulation (or memoization)

## 1. Identify if the problem can be solved with DP

The most common Dynamic Programming problems require you to:

- maximize/minimize a certain quantity
- counting problems (eg. counting arrangements under a certain condition or certain probability problems)

All DP problems satisfy the overlapping subproblems property and most classic problems also satisfy the optimal substructure property.

## 2. Decide a expression with the base parameters

All DP problems are about their state and transition.

**Terminology:**

- State: Set of parameters that can identify a certain position or standing in the given problem
  **NOTE: These base parameters should be as small as possible to reduce the state space.**

For example, in the famous [Knapsack problem](../classic_problems/knapsack_problem.md), the state is defined by 2 parameters: the index and the weight at the specified index.

## 3. Formulating a State Relationship

This part is quite hard, and requires intuition, observation, and practice. For example,

```
Given 3 numbers {1, 3, 5}, we need to tell
the total number of ways we can form a number 'N'
using the sum of the given three numbers.
(allowing repetitions and different arrangements).

Total number of ways to form 6 is: 8
1+1+1+1+1+1
1+1+1+3
1+1+3+1
1+3+1+1
3+1+1+1
3+3
1+5
5+1
```

**[Geeks for Geeks: Explanation](https://www.geeksforgeeks.org/solve-dynamic-programming-problem/)**

So, first of all, we decide a state for the given problem. We will take a parameter n to decide state as it can uniquely identify any subproblem. So, our state dp will look like state(n). Here, state(n) means the total number of arrangements to form n by using {1, 3, 5} as elements.

Now, we need to compute state(n).

How to do it?
So here the intuition comes into action. As we can only use 1, 3 or 5 to form a given number. Let us assume that we know the result for n = 1,2,3,4,5,6 ; being termilogistic let us say we know the result for the
state (n = 1), state (n = 2), state (n = 3) ……… state (n = 6)

Now, we wish to know the result of the state (n = 7). See, we can only add 1, 3 and 5. Now we can get a sum total of 7 by the following 3 ways:

1. Adding 1 to all possible combinations of state (n = 6)
   Eg : [ (1+1+1+1+1+1) + 1][ (1+1+1+3) + 1]
   [ (1+1+3+1) + 1][ (1+3+1+1) + 1]
   [ (3+1+1+1) + 1][ (3+3) + 1]
   [ (1+5) + 1][ (5+1) + 1]

2) Adding 3 to all possible combinations of state (n = 4);

Eg : [(1+1+1+1) + 3][(1+3) + 3]
[(3+1) + 3]

3. Adding 5 to all possible combinations of state(n = 2)
   Eg : [ (1+1) + 5]

Now, think carefully and satisfy yourself that the above three cases are covering all possible ways to form a sum total of 7;

Therefore, we can say that result for
state(7) = state (6) + state (4) + state (2)
or
state(7) = state (7-1) + state (7-3) + state (7-5)

In general,
state(n) = state(n-1) + state(n-3) + state(n-5)

## Code:

## Sources Used

- [Geeks for Geeks: Solving DP Problems](https://www.geeksforgeeks.org/solve-dynamic-programming-problem/)
