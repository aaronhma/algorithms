## Logarithm

As the value inside log doubles (2x), the log value increases only by 1 (+1) and hence. This feature makes it so effective and hence uses very less time in algorithms. Binary Search has a time complexity of `log(n)` as it divides it by 2 each time or by cutting a binary tree by half each time. If you are cutting down the number of operations by a half each time, then you are using log(n) time.

`log.b(x) = y` is same as `b^y = x`. In math, by default `b = 10`. In CS, be default `b = 2`
`log(N) = y` is same as `2^y = N`

```c++
log(1) // 0
log(2) // 1
log(4) // 2
log(8) // 3
log(16) // 4
log(20) // 1M
log(30) // 1B
```

## Arrays

**C++ Arrays** have 2 types; Static and Dynamic.

**Dynamic Array**, `Vector`, is an array that can change in size. It allows us to have faster insertions at the end of the array.

**Note to Aaron: can be removed completely**

O(1) T Get an element from array
O(1) S Set/Replace an element of array

O(n) S Initialzing an array of size n
O(n) T Initialzing an array of size n

O(1) S Traversing an array of size n
O(n) T Traversing an array of size n

When we map, filter or reduce an array then it is O(n) time.

O(n) S Copying an array of size n
O(n) T Copying an array of size n
O(1) S Inserting a new element in an array of size n STATIC
O(n) T Inserting a new element in an array of size n STATIC
O(1) S Inserting a new element in an array of size n DYNAMIC
O(1) T Inserting a new element in an array of size n DYNAMIC (Avg Time)
O(n) T Inserting a new element in an array of size n DYNAMIC (Worst Time Case)


## Linked List(LL)

similar to an array but it is stored/implemented in a different way than an array in memory.

Arrays are read from left to right and even singly Linked List is read from left to right. The array is stored in contiguous memory blocks but the Linked List can be stored anywhere in memory.

Linked List(LL) connects them using pointers by storing its address. Each node in a LL has a value and the pointer to the next node. Thus, LL takes 2x size as an array because of storing the pointers. The first node is called the Head and the last node is called the Tail.

LL are of different variations;
Singly LL
Doubly LL
Circular LL, etc.

**Note to Aaron: can be removed completely**

Space and Time Complexity
O(N) T Get an element value from LL (WORST CASE)
O(N) T Set/Replace an element of LL (WORST CASE)
O(n) S Initializing an LL of size n
O(n) T Initializing an LL of size n
O(1) S Traversing an LL of size n
O(n) T Traversing an LL of size n
O(n) S Copying an LL of size n
O(n) T Copying an LL of size n
O(1) S Inserting/Deleting a new element in an LL of size n at the beginning
O(1) T Inserting/Deleting a new element in an LL of size n at the beginning
O(x) S Inserting/Deleting a new element in an LL of size n at any position (x)
O(x) T Inserting/Deleting a new element in an LL of size n at any position (x)


## Hash Tables

Hash Table is a DS with key-value pair. We can access a value given a key but the vice versa is not possible. The keys can be strings, int, or even other data structures.

Under the hood, the hash table is built on top of the array. The key is transformed into an index by using a hash function. And this index helps us in storing the value in the array. And hence it allows us to have O(1) time complexity in insertion/deletion/searching


## Stacks & Queues

**Stack** is a list of elements that are in some sort of order and follow LIFO. ex: Stacks of books on a table.

A Stack is actually a dynamic array under the hood. ie, it can be implemented like a dynamic array. We don't care about adding elements in the middle or bottom of the stack. eg; max stack, min stack

Insert = Push
Delete = Pop

**Queue** is a list of elements that are in some sort of order and follow FIFO. ex: a queue of people at the cinema

The queue is basically the opposite of stacks. Dynamic array can NOT be used in a queue. We can not add an element in the beginning or middle as it is not constant time. A queue is typically implemented as a Linked List. eg; priority queue

Insert = Enqueue
Delete = Dequeue

## Strings

A string is stored in memory as an array of char where each char is matched to an integer by using eg; ASCII. In ASCII, a = 97, A = 65. Every char in a string is stored in a fixed amount of byte. Hence, it works like an array.

In C++, a string is mutable, and then adding a new value at the end of the string is O(1) but in Java, C, Python, etc strings are immutable, and adding a new value at the end creates a brand new string and hence, it is an O(n+m) ST complexity. Hence, it is recommended to split out this string in an actual array of characters in actual code. So that it can act like a mutable string and can perform operations faster.


## Graphs

A graph is a collection of nodes that may or may not be connected together. Every node is called a vertex and the connections are called an edge.

A graph is represented by an adjacency list in code and the edges of the graph are basically pointers in memory.

## Trees

A tree is a type of graph that is
1) rooted
2) every node has child nodes
3) the structure is directed
4) the structure will be acyclic
5) each node in the tree will only have one parent
6) the tree is not allowed to be disconnected.

eg; management chain, human beings family tree
There are a lot of different types of Trees;
1) Binary Tree
2) Ternary Tree
3) K-nary Tree
4) Binary Search Trees
5) Min/Max Heap
6) Tries


Red Black Trees and AVL Trees are examples of a balanced tree that maintains O(logN) always.
Key Terminologies in a tree;
1) Branch
2) Leaf
3) Level
4) Complete Tree
5) Full Tree
6) Perfect Tree
7) Depth/Height
