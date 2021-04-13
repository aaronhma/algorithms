# When to Use DP?

We can use DP if a problem matches one of the following:

* The problem is a DP problem.

If the problem closely resembles/is a DP problem, that problem definitely is a DP problem.

* The problem has the Optimal Substructure Property.

A problem has the Optimal Substructure Property if an optimal solution of the given problem can be obtained by using optimal solutions of its subproblems.

* The problem has the Overlapping Subproblems Property.

A problem has the Overlapping Subproblems Property is when we need to compute the same subproblems over and over again (eg. Fibonacci).

* The problem is a optimization problem.

With optimization problems, you'll see terms like _shortest/longest_, _minimized/maximized_, _least/most_, _fewest/greatest_, _biggest/smallest_, etc.

When you have an optimization problem, first identify what you're optimizing for. Once you realize what you're optimizing for, you have to decide how easy it is to perform that optimization. Sometimes, the greedy approach is sufficient for an optimal solution. **If the problem seems pretty difficult and you would have trouble coming up with the answer on your own without a computer or calculus, then dynamic programming is probably a good candidate.**

- The problem is a combinatorics problem.

Counting problems (eg. counting arrangements under a certain condition or certain probability problems) **usually** can be solved using DP (though combinatorics can be used in some problems).
