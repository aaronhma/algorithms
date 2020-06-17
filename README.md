# Algorithms [![C/C++ CI](https://github.com/aaronhma/algorithms/workflows/C/C++%20CI/badge.svg?branch=master)](https://github.com/aaronhma/algorithms/actions)

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

- [x] 2. [**Linked List**](data_structures/linked_list/README.md)

- [x] 3. [**Stack**](data_structures/stack/README.md)

- [x] 4. [**Queue**](data_structures/queue/README.md)

- [x] 5. [**Priority Queue**](data_structures/priority_queue.cpp)

#### Non-Linear Data Structures

- [ ] 6. [**Tree**](data_structures/tree/README.md)

- [ ] 7. [**Binary Tree**](data_structures/binary-tree/README.md)

- [ ] 8. [**Binary Search Tree**](data_structures/binary-search-tree/README.md)

- [ ] 9. [**B-Tree**](data_structures/b-tree/README.md)

- [ ] 10. [**AVL-Tree**](data_structures/avl-tree/README.md)

- [ ] 11. [**Heap**](data_structures/heap/README.md)

- [x] 12. [**Hash Map**](data_structures/map/README.md)

- [x] 13. [**Set**](data_structures/set/README.md) Disjoint Set,

- [x] 14. [**Tuple**](data_structures/tuple/README.md)

- [ ] 15. [**Graph**](data_structures/graph/README.md)

- [x] 16. [**Trie**](data_structures/trie/README.md)

- [ ] 17. [**Matrix**](data_structures/matrix/README.md)

- [ ] 18. [**Segment Tree**](data_structures/segment-tree/README.md)

- [ ] 19. [**Suffix Tree**](data_structures/suffix-tree/README.md)

- [x] 20. [**LRU Cache**](data_structures/lru_cache/README.md)

- [ ] 21. [**N-ary Tree**](data_structures/n-ary_tree/README.md)

## Algorithms

- [ ] [**Recursion**](algorithms/recursion/README.md)

### [Sort](https://github.com/TheAlgorithms/C-Plus-Plus/tree/master/sorting)

- [ ] [**Selection Sort**](algorithms/sort/selection-sort/README.md)

- [ ] [**Bubble Sort**](algorithms/sort/bubble-sort/README.md)

- [ ] [**Insertion Sort**](algorithms/sort/insertion-sort/README.md)

- [ ] [**Merge Sort**](algorithms/sort/merge-sort/README.md)

- [ ] [**Quick Sort**](algorithms/sort/quick-sort/README.md)

- [ ] [**Heap Sort**](algorithms/sort/heap-sort/README.md)

- [ ] [**Tree Sort**](algorithms/sort/tree-sort/README.md)

- [ ] [**Shell Sort**](algorithms/sort/shell-sort/README.md)

- [ ] [**Counting Sort**](algorithms/sort/counting-sort/README.md)

- [ ] [**Redux Sort**](algorithms/sort/redix-sort/README.md)

- [ ] [**Bucket Sort**](algorithms/sort/bucket-sort/README.md)

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


## Data Structure Time/Space Complexity

| Data Structure     | Time (Access) | (Search)  | (Insert)  | (Remove)  | Space Complexity |
|--------------------|---------------|-----------|-----------|-----------|------------------|
| Array              | O(1)          | O(n)      | O(n)      | O(n)      | O(n)             |
| Stack              | O(n)          | O(n)      | O(1)      | O(1)      | O(n)             |
| Queue              | O(n)          | O(n)      | O(1)      | O(1)      | O(n)             |
| Singly-Linked List | O(n)          | O(n)      | O(1)      | O(1)      | O(n)             |
| Doubly-Linked List | O(n)          | O(n)      | O(1)      | O(1)      | O(n)             |
| Skip List          | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n log(n))      |
| Hash Table         | N/A           | O(1)      | O(1)      | O(1)      | O(n)             |
| Binary Search Tree | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| Cartesian Tree     | N/A           | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| B-Tree             | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| Red-Black Tree     | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| Splay Tree         | N/A           | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| AVL Tree           | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |
| KD Tree            | O(log(n))     | O(log(n)) | O(log(n)) | O(log(n)) | O(n)             |

## Sorting Algorithms Time/Space Complexity

| Algorithm      | Time Complexity (Best) |     (Average)           |          (Worst)      | Space Complexity |
| -------        | -------         | -------        | ------         | ------           |
| Quicksort      | O(n log(n))     | O(n log(n))    | O(n^2)         | O(log(n))        |
| Mergesort      | O(n log(n))     | O(n log(n))    | O(n log(n))    | O(n)             |
| Timsort        | O(n)            | O(n log(n))    | O(n log(n))    | O(n)             |
| Heapsort       | O(n log(n))     | O(n log(n))    | O(n log(n))    | O(1)             |
| Bubble Sort    | O(n)            | O(n^2)         | O(n^2)         | O(1)             |
| Insertion Sort | O(n)            | O(n^2)         | O(n^2)         | O(1)             |
| Selection Sort | O(n^2)          | O(n^2)         | O(n^2)         | O(1)             |
| Tree Sort      | O(n log(n))     | O(n log(n))    | O(n^2)         | O(n)             |
| Shell Sort     | O(n log(n))     | O(n(log(n))^2) | O(n(log(n))^2) | O(1)             |
| Bucket Sort    | O(n+k)          | O(n+k)         | O(n^2)         | O(n)             |
| Radix Sort     | O(nk)           | O(nk)          | O(nk)          | O(n+k)           |
| Counting Sort  | O(n+k)          | O(n+k)         | O(n+k)         | O(k)             |
| Cubesort       | O(n)            | O(n log(n))    | O(n log(n))    | O(n)             |
