# Linked List Analysis

## What is a Linked List? [Reference: 0](references-0)
A linked list is a data structure where each element is a separate object. Unlike an array, a linked list is a collection of items grouped together by a specified format:
  * `[value, next element memory address]`

## Why Linked Lists?
Even though arrays are good for most cases, there are cases where you might want to use linked lists. Arrays have a fixed size upon initialization, so when you reach the maximum size, we create an new array of size m<sup>2</sup>, where m is the size of the old array. After creating the new array, we copy all of the contents from the old array to the new one, then perform the requested operation: add an element to the end of the array.  This operation also happens if the next slot in memory if used by another process. Clearly, this is a very slow method.

On the other hand, Linked Lists can be put anywhere in RAM, so if the next memory address if full (eg. another process if using it), then we use a unused memory space, then create a pointer to it with the memory address (eg. 0x7ffeed557bd0).

Basically in general, if we had a problem of seating friends at a theater, arrays put all of the friends together in **one long row**, while Linked Lists basically does, **"Let's split up and watch the movie"**. [Reference: 2](#reference-two)

## Pros and Cons of Linked Lists

**Pros:**

* Insertion and Deletion (on average) is constant time O(n)
* Takes advantage of using free memory space each time

**Cons:**

* Searching and accessing elements is O(n) in the worst case - because we don't have an particular order, so we might end up searching the entire linked list
* Not suitable for all problems

## How to represent a Linked List?

![image](https://s3-us-west-2.amazonaws.com/ib-assessment-tests/problem_images/singly-ll.png)

Source: ([InterviewBit](https://s3-us-west-2.amazonaws.com/ib-assessment-tests/problem_images/singly-ll.png))

## Speed of Linked List [Reference: 1](#references-1)
### Singly-Linked List (Average Speed)
| Access | Search | Insertion | Deletion |
| ------ | ------ | ------    | ------   |
| O(n)   | O(n)   | O(1)      | O(1)     |

### Doubly-Linked List (Average Speed)
| Access | Search | Insertion | Deletion |
| ------ | ------ | ------    | ------   |
| O(n)   | O(n)   | O(1)      | O(1)     |

## Linked List Implementation
In C++, this is very easy. To do this, we use `struct`:

### Singly-Linked List Implementation
```cpp
/* Implementation of Singly Linked List */
struct SinglyLinkedList
{
  int val;
  SinglyLinkedList *next;
};
```

### Doubly-Linked List Implementation
```cpp
/* Implementation of Doubly Linked List */
struct DoublyLinkedList
{
  int val;
  DoublyLinkedList *next;
  DoublyLinkedList *prev;
};
```

<a name="references" />

## References
<a name="references-0" />

* [0: InterviewBit](https://www.interviewbit.com/courses/programming/topics/linked-lists/#:~:text=A%20linked%20list%20is%20a,has%20a%20reference%20to%20null.)

<a name="references-1" />

* [1: Big O Cheatsheet](https://www.bigocheatsheet.com/)

<a name="references-two" />

* [2: Grokking Algorithms from Safari Books](https://www.oreilly.com/)

# Analysis by [Aaron Ma](https://aaronhma.com/)
