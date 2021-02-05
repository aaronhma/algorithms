# Stack

## Background

![Stack Image](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Stacks%20and%20Queues/pix/stack.bmp)
([Source](https://www.cs.cmu.edu/~adamchik/15-121/lectures/Stacks%20and%20Queues/Stacks%20and%20Queues.html))

A stack is a collection of items following a Last-In, First-Out (LIFO) order that supports the following core operations:

## Stack Operations

- `create` - creates an empty stack
- `push` - push data to the top of the stack
- `pop` - removes data from the top of the stack
- `empty` - checks if the stack is empty

## Pros & Cons of Stack

- Pros:
  - All operations takes O(1) time
- Cons:

  - Uses O(n) space
  - Getting something from the middle is impossible without `top()` and `pop()`

## Implementations

- Array-based queue
- Linked List-based queue

## Stack Time Complexity

| Operation | Array Implementation | Singly Linked List Implementation |
| --------- | -------------------- | --------------------------------- |
| Create    | O(1)                 | O(1)                              |
| Push      | O(1)                 | O(1)                              |
| Pop       | O(1)                 | O(1)                              |
| Empty     | O(1)                 | O(1)                              |

- Space complexity: O(n)

## C++ Usage

```cpp
// Assume the standard library has been included
#include <stack>

std::stack<int> s;
s.push(1);
s.push(2);
s.push(3);

std::cout << s.top() << "\n"; // 3
s.pop();
std::cout << s.top() << "\n"; // 2
s.pop();
std::cout << s.top() << "\n"; // 1
```

## Example of an Stack

An example of stack is dinner plates. You place all the dinner plates in a pile and the last plate that you put in the pile is what you take out (LIFO or Last In - First Out) to wash.

## References

- [C++ std::stack](http://www.cplusplus.com/reference/stack/stack/)
