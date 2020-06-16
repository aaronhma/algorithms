# Algorithms

![Algorithms Image](https://i.ytimg.com/vi/kM9ASKAni_s/maxresdefault.jpg)

([Source](https://www.youtube.com/watch?v=kM9ASKAni_s))

## !! ALERT !!

**Notification #1: Data structures V2 is coming out soon! We have already made the arrays & stack implemenation live with the analysis, but more is coming! Stay tuned!**

**Notification #2: The algorithms section is live! More is coming! Stay tuned!**

## Data Structure

A data structure is a container that stores data in a specific layout or an organized form. This “layout” allows a data structure to be efficient in some operations and inefficient in others.

**Useful resources**

- [Geeks for Geeks](https://www.geeksforgeeks.org/data_structuress/)
- [CodeChef](https://www.codechef.com/certification/data-structures-and-algorithms/prepare#foundation)

### Primitive Data Structures

**Integer**, **float**, **character**, **pointers**.

### Non-primitive Data Structures

#### Linear Data Structures

- [x] 1. [**Array**](data_structures/arrays/README.md)

- [x] 2. [**Linked List**](data_structures/linked_list/README.md) simple, double, circular, skip. [source](data_structures/linked_list.cpp) [Analysis](analysis/linked_list.md)

- [x] 3. [**Stack**](data_structures/stack/README.md) [source](data_structures/stack.cpp) [Analysis](analysis/stack.md)

- [x] 4. [**Queue**](data_structures/queue/README.md) [source](data_structures/queue/include/queue.h)

- [x] [Priority Queue](data_structures/priority_queue.cpp)

#### Non-Linear Data Structures

- [ ] 5. [**Tree**](data_structures/tree/README.md)

- [ ] 6. [**Binary Tree**](data_structures/binary-tree/readme.md)

- [ ] 7. [**Binary Search Tree**](data_structures/binary-search-tree/readme.md)

- [ ] 8. [**B-Tree**](data_structures/b-tree/readme.md)

- [ ] 9. [**AVL-Tree**](data_structures/avl-tree/readme.md)

- [ ] 10. [**Heap**](data_structures/heap/readme.md)

- [ ] 11. [**Hashing**](data_structures/hashing/readme.md) [source](data_structures/hash_table.cpp)

- [ ] 12. [**Dictionary**](data_structures/dictionary/readme.md)

- [ ] 13. [**Map**](data_structures/map/readme.md)

- [ ] 14. [**Set**](data_structures/set/readme.md) Disjoint Set,

- [ ] 15. [**Tuple**](data_structures/tuple/readme.md)

- [ ] 16. [**Graph**](data_structures/graph/readme.md)

- [x] 17. [**Trie**](data_structures/trie/README.md) [source](data_structures/trie.cpp)

- [ ] 18. [**Matrix**](data_structures/matrix/readme.md)

- [ ] 19. [**Segment Tree**](data_structures/segment-tree/readme.md)

- [ ] 20. [**Suffix Tree**](data_structures/suffix-tree/readme.md)

- [x] 21. [**LRU Cache**](data_structures/lru-cache/README.md) [Source](data_structures/lru_cache.cpp)

## Algorithms

### [Sort](https://github.com/TheAlgorithms/C-Plus-Plus/tree/master/sorting)

- [ ] [**Selection Sort**](algorithms/sort/selection-sort/readme.md)

- [ ] [**Bubble Sort**](algorithms/sort/bubble-sort/readme.md)

- [ ] [**Insertion Sort**](algorithms/sort/insertion-sort/readme.md)

- [ ] [**Merge Sort**](algorithms/sort/merge-sort/readme.md)

- [ ] [**Quick Sort**](algorithms/sort/quick-sort/readme.md)

- [ ] [**Heap Sort**](algorithms/sort/heap-sort/readme.md)

- [ ] [**Tree Sort**](algorithms/sort/tree-sort/readme.md)

- [ ] [**Shell Sort**](algorithms/sort/shell-sort/readme.md)

- [ ] [**Counting Sort**](algorithms/sort/counting-sort/readme.md)

- [ ] [**Redux Sort**](algorithms/sort/redix-sort/readme.md)

- [ ] [**Bucket Sort**](algorithms/sort/bucket-sort/readme.md)

### [Search](https://github.com/TheAlgorithms/C-Plus-Plus/tree/master/search)

- [ ] [**Linear search**](algorithms/search/linear-search/readme.md)

- [ ] [**Binary search**](algorithms/search/binary-search/readme.md) ([Source](algorithms/search/binary_search.cpp))

- [ ] [**Hash search**](algorithms/search/hash-search/readme.md)

- [ ] [**A star search**](algorithms/search/a-star-search/readme.md)

#### [Graph Search](https://github.com/TheAlgorithms/C-Plus-Plus/tree/master/graph)

- [ ] [**Breadth First Search**](algorithms/search/breadth-first-search/readme.md)

- [ ] [**Depth First Search**](algorithms/search/depth-first-search/readme.md)

- [ ] [**Shortest path algorithms**]

- [ ] [**all pairs shortest path**]

### Others

- [ ] [**Dijkstra's Algorithm**] (shortest path)

- [ ] [**Matrix multiplication**]

- [ ] [**Tree Traversals**] Inorder, Preorder, Postorder

- [ ] [**Factorial**]

- [ ] [**Number theory algorithms**] GCD, inverse of the number using extended euler's algorithm, fast power, prime number, Modular Exponentiation, Sieve of Eratosthenes, Fermat’s theorem, Miller Rabin

- [ ] [**Probabilistic Methods**]

- [ ] [**Approximation Algorithms**]

- [ ] [**Knuth-Morris-Pratt Algorithm (KMP)**]

- [ ] [**Rabin-Karp Algorithm**]

- [ ] [**Z algorithm**]

- [ ] [**Euclid's Extended Algorithm**]

- [ ] [**Minimum Spanning Tree**]

- [ ] [**Knapsack**]

- [ ] [**Bellman Ford algorithm**]

- [ ] [**Mo's Algorithm**]

- [ ] [**Max-flow min cut theorem: Ford-fulkerson OR Edmond-Karp**]

### Strategies Or Paradigms

- [ ] [**Divide and Conquer algorithms**]

A **divide and conquer** algorithm works by recursively breaking down a problem into two or more sub-problems of the same (or related) type (divide), until these become simple enough to be solved directly (conquer). The solutions to the sub-problems are then combined to give a solution to the original problem.

- [ ] [**Dynamic Programming algorithms**]

**Dynamic Programming** is a method for solving a complex problem by breaking it down into a collection of simpler subproblems, solving each of those subproblems just once, and storing their solutions - ideally, using a memory-based data structure. The next time the same subproblem occurs, instead of recomputing its solution, one simply looks up the previously computed solution, thereby saving computation time at the expense of a (hopefully) modest expenditure in storage space. (Each of the subproblem solutions is indexed in some way, typically based on the values of its input parameters, so as to facilitate its lookup.) The technique of storing solutions to subproblems instead of recomputing them is called "memoization".

Dynamic programming algorithms are used for optimization (for example, finding the shortest path between two points, or the fastest way to multiply many matrices). A dynamic programming algorithm will examine the previously solved subproblems and will combine their solutions to give the best solution for the given problem.

- [ ] [**Graph Algorithms**]

**Graphs Algorithms** can be used to model many types of relations and processes in physical, biological, social and information systems. Graphs are used to represent networks of communication, data organization, computational devices, the flow of computation, etc.

- [ ] [**Greedy Algorithm**]

**Greedy Algorithm** is an algorithm that follows the problem solving heuristic of making the locally optimal choice at each stage with the hope of finding a global optimum. In many problems, a greedy strategy does not in general produce an optimal solution, but nonetheless a greedy heuristic may yield locally optimal solutions that approximate a global optimal solution in a reasonable time.

- [ ] [**Backtracking Algorithm**]

**Backtracking Algorithm** is a general algorithm for finding all (or some) solutions to some computational problems, notably constraint satisfaction problems, that incrementally builds candidates to the solutions, and abandons each partial candidate c ("backtracks") as soon as it determines that c cannot possibly be completed to a valid solution.

Backtracking can be applied only for problems which admit the concept of a "partial candidate solution" and a relatively quick test of whether it can possibly be completed to a valid solution. It is useless, for example, for locating a given value in an unordered table. When it is applicable, however, backtracking is often much faster than brute force enumeration of all complete candidates, since it can eliminate a large number of candidates with a single test.

- [ ] [**Statistical Method**]

- [ ] [**Geometry**]

### Problem Statements

- Inserting/deleting a node in linked lists
- Hashing algorithms
- Backtracking
- All tree operations
- Dynamic programming
- All graph operations
- Finding largest/smallest in an array/linked lists/tree
- Reversing a linked lists/array
- Check if prime, finding all primes in a range.
