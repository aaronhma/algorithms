# When to Use DP?

We can use DP if a problem matches one of the following:

-   The problem is a DP problem.

If the problem closely resembles/is a DP problem, that problem definitely is a DP problem.

-   The problem has the Optimal Substructure Property.

A problem has the Optimal Substructure Property if an optimal solution of the given problem can be obtained by using optimal solutions of its subproblems.

-   The problem has the Overlapping Subproblems Property.

A problem has the Overlapping Subproblems Property is when we need to compute the same subproblems over and over again (eg. Fibonacci).

-   The problem is a optimization problem.

With optimization problems, you'll see terms like _shortest/longest_, _minimized/maximized_, _least/most_, _fewest/greatest_, _biggest/smallest_, etc.

When you have an optimization problem, first identify what you're optimizing for. Once you realize what you're optimizing for, you have to decide how easy it is to perform that optimization. Sometimes, the greedy approach is sufficient for an optimal solution. **If the problem seems pretty difficult and you would have trouble coming up with the answer on your own without a computer or calculus, then dynamic programming is probably a good candidate.**

-   The problem is a combinatorics problem.

Counting problems (eg. counting arrangements under a certain condition or certain probability problems) **usually** can be solved using DP (though combinatorics can be used in some problems).

- When Greedy doesn't work.

When solving a problem that Greedy fails, you **usually** turn to Dynamic Programming to solve the problem.

**<svg width="40px" height="40px" viewBox="0 0 80 80" class="LeftIcon__DoneCircle-sc-1cpzjum-3 iGryjH"><path d="M80 40c0 22.091-17.909 40-40 40s-40-17.909-40-40c0-22.091 17.909-40 40-40s40 17.909 40 40zM31.331 57.066c0.456 0.19 0.946 0.286 1.44 0.284 0.511-0.001 1.015-0.111 1.481-0.322 0.452-0.205 0.857-0.5 1.19-0.868l27.21-27.176c0.702-0.703 1.097-1.656 1.097-2.65 0-0.991-0.392-1.942-1.091-2.645-0.345-0.353-0.757-0.633-1.212-0.825-0.457-0.193-0.949-0.292-1.445-0.292s-0.987 0.099-1.445 0.292c-0.454 0.192-0.866 0.472-1.211 0.824l-24.58 24.548-10.146-10.083c-0.711-0.663-1.651-1.023-2.623-1.006s-1.898 0.411-2.585 1.098c-0.687 0.687-1.081 1.614-1.098 2.585s0.343 1.912 1.006 2.623l0.015 0.016 12.78 12.78c0.347 0.351 0.761 0.629 1.216 0.818z" fill="#08BD80" fill-rule="unset" clip-rule="unset" stroke-linecap="butt" stroke-linejoin="miter"></path></svg> If one of the conditions above is satisfied, then that problem is solvable using DP. :)**
