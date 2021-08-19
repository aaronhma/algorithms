# Data Structure

A data structure is a container that stores data in a specific layout or an organized form. This “layout” allows a data structure to be efficient in some operations and inefficient in others.

## Data Structure Time/Space Complexity

| Data Structure     | Time (Access) | (Search) | (Insert) | (Remove) | Space Complexity |
| ------------------ | ------------- | -------- | -------- | -------- | ---------------- |
| Stack              | O(n)          | O(n)     | O(1)     | O(1)     | O(n)             |
| Queue              | O(n)          | O(n)     | O(1)     | O(1)     | O(n)             |
| Singly-Linked List | O(n)          | O(n)     | O(1)     | O(1)     | O(n)             |
| Doubly-Linked List | O(n)          | O(n)     | O(1)     | O(1)     | O(n)             |
| Skip List          | O(log n)      | O(log n) | O(log n) | O(log n) | O(n log(n))      |
| Binary Search Tree | O(log n)      | O(log n) | O(log n) | O(log n) | O(n)             |
| B-Tree             | O(log n)      | O(log n) | O(log n) | O(log n) | O(n)             |
| Red-Black Tree     | O(log n)      | O(log n) | O(log n) | O(log n) | O(n)             |
| AVL Tree           | O(log n)      | O(log n) | O(log n) | O(log n) | O(n)             |
| KD Tree            | O(log n)      | O(log n) | O(log n) | O(log n) | O(n)             |
| Array              | O(1)          | O(n)     | O(n)     | O(n)     | O(n)             |
| Hash Table         | N/A           | O(1)     | O(1)     | O(1)     | O(n)             |
| Cartesian Tree     | N/A           | O(log n) | O(log n) | O(log n) | O(n)             |
| Splay Tree         | N/A           | O(log n) | O(log n) | O(log n) | O(n)             |

## Memory Management in C++

### Two Types of Memory

#### 1. Stack Memory

A stack is a special area of the computer's memory which stores temporary variables created by functions (local variables). The stack is also used to hold parameters passed to functions.

#### 2. Heap Memory

Heap memory is the memory where objects allocated using [`new`](https://www.cplusplus.com/reference/new/operator%20new/) or [`malloc`](https://www.cplusplus.com/reference/cstdlib/malloc/) is stored.

**WARNING: Heap memory needs to be manually freed, though a smart pointer will automatically do so.**

**ℹ️ Tip: Running out of heap memory will result in [`std::bad_alloc`](https://en.cppreference.com/w/cpp/memory/new/bad_alloc).**

### Stack Memory vs. Heap Memory

#### Don't Return an Object in a Function

**Bad:**

```cpp
// assume we have a linked list class
class LinkedList {};

LinkedList LinkedList::create() {
  LinkedList a;
  return a;
}
```

This is bad, as we're using stack memory and we have to copy the linked list $a$ multiple times, which increases our memory usage. To prevent copying $a$ many times, we can store $a$ in the heap memory.

**Good:**

```cpp
LinkedList LinkedList::create() {
  LinkedList a;
  return a;
}
```
