# Solving a Problem

### **_The secret sauce of of how people like `tourist` and `Benq` solves problems._**

##### **_"If you can't solve a problem, then there is an easier problem you can't solve: find it." - George Polya_**

## Steps to Solve a Problem

---

## 1. **_You have to understand the problem._**

#### **Goal: Understand the problem**

Read the question a **few** times and answer the questions:

- What is the unknown?
- What are the data?
- What is the condition?
- Is it possible to satisfy the condition?
- Is the condition sufficient to determine the unknown?

Draw a figure. Introduce suitable notation.

### ⚠️ Important ⚠️

While reading the problem, **DO NOT** get be confused by the narrative. **Competitive programming problem statements are often written with a lot of extraneous details to make them sound more realistic. This can make it difficult to extract what the problems is asking. One technique is to read the problem in reverse: look at the sample input/output, then the output description, then the input description, then the last part of the problem description. At this point you'll probably have a good enough idea of what the problem is asking that you can just skim through the details at the beginning of the problem.**

## 2. _**Find the connection between the data and the unknown.**_

#### **Goal: Formulate a plan to solve the problem**

- Do you know a related problem? Do you know a theorem that might be useful?
- Look at the unknown and think of a familiar problem having the same or a similar unknown.

Can you restate the problem? Could you restate it differently? Can you restate the problem into a problem you've solved before? Can you solve a part of the problem? Can you derive something useful from the data?

- Did you use all the data?
- Did you use the whole condition?
- Have you taken into account all essential notions involved in the problem?

### ⚠️ Important ⚠️

A major advantage people like `tourist` have is the ability to quickly identify problem types. It can be broken down as shown:

In all programming contests, there are only three types of problems:

1. I haven’t seen this one before.
2. I have seen this type before, but haven’t or can’t solve it.
3. I have solved this type before.

The goal is to maximize the number of problems in category $3$ and minimize the number of problems in categories $1$ and $2$.

In programming contests, you will be dealing with a set of problems, rather than a single problem. The ability to quickly identify problems into the above mentioned context classifications (haven’t seen, have seen, have solved) will be one of key factor to do well in programming contests. The majority of problems can be classified into the given categories:

1. Mathematics: Prime Number, Big Integer, Permutation, Number Theory, Factorial, Fibonacci, Sequences, Modulus
2. Dynamic Programming: Longest Common Subsequence,Longest Increasing Subsequence, Edit Distance, 0/1 Knapsack, Coin Change, Matrix Chain Multiplication, Max Interval Sum
3. Graph Traversal: Flood Fill,Floyd Warshal, MST, Max Bipartite Matching, Network Flow, Articulation Point
4. Sorting: Bubble Sort, Quick Sort, Merge Sort, Selection Sort, Radix Sort, Bucket Sort
5. Searching: Complete Search, Brute Force, Binary Search
6. String Processing: String Matching, Pattern Matching
7. Ad Hoc Problems: Problems that cannot be group into any category $-$ these problems are usually the hardest as there is no technique to solve them

## 3. _**Carry out your plan.**_

#### **Goal: Solve the problem**

Carrying out your plan of the solution, check each step.

- Can you see clearly that the step is correct?
- Can you prove that it is correct?

## 4. _**Examine the solution obtained.**_

#### **Goal: Check if you've solved the problem**

- Can you check the result?
- Can you check the argument?
- Can you derive the result differently?
- Can you see it at a glance?
- Can you use the result, or the method, for some other problem.

Re-read the problem and check if you've accomplished the task the problem has asked for.
