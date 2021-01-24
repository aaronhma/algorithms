# DP

https://medium.com/@adam.dejans/using-dynamic-programming-for-problem-solving-b54be2e47747

Dynamic programming is excellent for solving complex problems that have the property of overlapping sub-problems and optimal substructures

here is DP’s secret: think globally optimal, not just locally.

It is most often the case that Dynamic programming is considered when we are trying to solve an optimization problem (e.g., maximizing, minimizing, or finding the total number of possible ways to do something) and the optimal solution for larger parameters relies on optimal solutions of the same problem structure with smaller parameters.

We can determine if a problem is suitable for Dynamic programming by answering the follow questions:
* Can we divide the problem into sub-problems of the same structure?
* Do the sub-problems overlap?
* Is this an optimization problem?
Typically we only need to answer “yes” to the first two questions to have a high chance that Dynamic programming will get the job done.


 You have to break the problem into simpler subproblems, solving each of them just once, and building the solution combining these solved subproblems. The opposite of DP is a greedy algorithm because the latter picks the locally optimal choice at each step. And locally optimal choices may result in a bad global solution.


KnapSack

https://www.youtube.com/watch?v=xCbYmUPvc2Q
https://www.youtube.com/watch?v=8LusJS5-AGo


https://www.facebook.com/codingcompetitions


# Articles

[dynamic-programming-explained](https://medium.com/swlh/dynamic-programming-explained-45fc57639eca)

[All You Need to Know About Dynamic Programming](https://medium.com/swlh/all-you-need-to-know-about-dynamic-programming-1242c299b330)

[Understanding recursion, memoization, and dynamic programming: 3 sides of the same coin](https://medium.com/swlh/understanding-recursion-memoization-and-dynamic-programming-3-sides-of-the-same-coin-8c1f57ee5604)
