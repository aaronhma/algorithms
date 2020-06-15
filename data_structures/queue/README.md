# Queue

## Background

- [C++ std::queue](http://www.cplusplus.com/reference/queue/queue/)

![Stack Image](https://cdn.programiz.com/sites/tutorial2program/files/queue.png)
([Source](https://www.programiz.com/dsa/queue))

A queue is a collection of items following a First-In, First-Out (FIFO) order. Elements are inserted to the queue in the back with `push()`, and leaves from the front of the queue with `pop()`.

## Pros of Queue

- Pros:
  - Fast operations, as all operations takes O(1) time

## Speed of Queue

| Operation | Big O Notation |
| --------- | -------------- |
| Enqueue   | O(1)           |
| Dequeue   | O(1)           |
| Peek      | O(1)           |

## C++ Usage

- The C++ Standard Library (STL) provides a handy implementation which can be used as follows.

```cpp
// Assume all necessary libraries are included
#include <queue>

std::queue<int> q;

// Add elements to the queue
q.push(1);
q.push(2);
q.push(3);

// Queue operations
std::cout << q.size() << "\n"; // 3
std::cout << q.front() << "\n"; // 1
std::cout << q.back() << "\n"; // 3
q.pop(); // remove front element
std::cout << q.front() << "\n"; // 2

std::cout << q.empty() << "\n"; // Queue is not empty
```

## Queue Operations

**NOTE: The following operations are included in C++'s Standard Library.**

- `push` - Push an element to the back of the queue
- `empty` - Returns if the queue is empty or not
- `front` - First element in queue
- `back` - Last element in queue
- `size` - The size of the queue
- `pop` - Deletes the first element in queue

## Example of an Queue

A great example of a queue is where **n** cars are on a one-way only highway (see picture below).

![Queue example image](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_example.jpg)
4&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1

([Source](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.tutorialspoint.com%2Fdata_structures_algorithms%2Fdsa_queue.htm&psig=AOvVaw1Bzcw8eFVAMyq944xV0Vxo&ust=1592343766873000&source=images&cd=vfe&ved=0CA0QjhxqFwoTCOiKvvfkhOoCFQAAAAAdAAAAABAJ))

The first car that enters, in this case, Car #1, will exit out of the highway first, followed by the second car, etc. Based on this example, clearly, a queue uses a First-In, First-Out (FIFO), or Last-In, Last-Out (LILO) order.

**Challenge:** Can you implement this scenario in code?

**Bonus Challenge:** Write your own queue, along with a Car class!

## Real-World Use Cases

- Printers uses queues to manage printing jobs.
- Web servers uses queues to manage requests.
- CPUs uses queues to manage processes.

## References

- [Geeks For Geeks: Queue in C++'s Standard Library](https://www.geeksforgeeks.org/queue-cpp-stl/)
- [Interview Cake: Queue](https://www.interviewcake.com/concept/cpp/queue)
