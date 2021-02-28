# Dynamic Programming (DP)

## What is Dynamic Programming?

**Dynamic programming** (known as DP)  is a programming paradigm that stores the result of a problem after solving it.

![Image](https://miro.medium.com/max/970/1*7pbs4HCE_K6cH6jkcgxw_A.png)

## The Idea Behind Dynamic Programming

Imagine you are given two bags of coins and you are asked to count the # of coins in the first bag. (There are $51$ coins in the first bag.) Then, you are asked to compute the total # of coins in **both** bags ASAP. Would you count the # of coins in the first bag again? **No!** Since we already know the # of coins in the first bag, all we have to do is add the # of coins in the second bag to the # coins in the first bag (which is $51$). This is the idea behind DP.

![Image](images/coin_bag.png)

## The Approaches of Dynamic Programming

### 1. Top-Down Approach

Remember when we solved the Fibonnaci problem using recursion? That is the top-down approach. We start by solving the problem using recursion, and store the results of each subproblem.

![Image](https://www.codesdope.com/staticroot/images/algorithm/dynamic4.png)

In other words, we're basically adding a caching layer to recursion.

$DP = recursion + caching$

---
### **Tip: Memoization**

The Top-Down approach is also known as Memoization. Memoization is easy to code, but when a lot of recursive calls are required, memoization may call memory issues.

Generally, memoization is slower than [tabulation] (see **_Tabulation_**).

---

### 2. Bottom-Up Approach

Another way we can use to solve the Fibonacci problem was by starting from the bottom (calculating the $2$nd term, then the $3$rd term, etc.). Similarly, we can do the same in DP.

![Image](https://www.codesdope.com/staticroot/images/algorithm/dynamic6.png)

We create an array $dp$ where $dp[i]$ represents the answer for $fib(i)$. Then, we define our base cases:

$$f[1] = 1$$
$$f[2] = 1$$

Then, for $dp[i]$, we can do the following:

$$dp[i] = dp[i - 1] + dp[i - 2]$$

---

### **Tip: Tabulation**

Though tabulation is hard to code (we need to come up with a specific order when dealing with a lot of conditions), tabulation is _(generally)_ **faster** than memoization.

---

## The Formula to Solve Any DP Problem

# NEED TO UPDATE

1. Recognize if the problem can be solved with DP
2. Identify the problem variables
3. Express the recurrence relation
4. Identify the base cases
5. Decide if you want to implement it iteratively or recursively
6. Add memoization
7. Determine the time complexity

---

## **Tip: Majority of DP Problems Falls into 2 Categories!**

A majority of the Dynamic Programming problems can be categorized into two types:
1. Optimization problems
2. Combinatorial problems
3. 
An optimization problem is a problem of finding the best solution from all feasible solutions. And combinatorial problems expect you to figure out the number of ways to do something or the probability of some event happening.
