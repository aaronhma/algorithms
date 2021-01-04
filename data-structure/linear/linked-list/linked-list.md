# Linked List

Similar to the array, the linked list is also a *linear* data structure. Each element in the linked list is actually a separate object while all the objects are *linked together by the reference field* in each element.

There are two types of linked list: singly linked list and doubly linked list. Here are similar and different.

- similar in many operations:

1. Not able to *access the data at a random position* in constant time.
2. Able to *add a new node after given node or at the beginning of the list in O(1) time*.
3. Able to *delete the first node in O(1) time*.

- different to *delete a given node* (including the last node).

In a singly linked list, it is not able to get the previous node of a given node so we have to spend *O(n)* time to find out the previous node before deleting the given node.
In a doubly linked list, it will be much easier because we can get the previous node with the "prev" reference field. So we can delete a given node in `O(1)` time.

In conclusion, If you need to add or delete a node frequently, a linked list could be a good choice. If you need to access an element by index often, an array might be a better choice than a linked list.

- Pros

Linked lists are great if you’re going to read all the items one at a time: you can read one item, follow the address to the next item, and so on.

- Cons

if you’re going to keep jumping around, linked lists are terrible.

Suppose you want to read the last item in a linked list. You can’t just read it, because you don’t know what address it’s at. Instead, you have to go to item #1 to get the address for item #2. Then you have to go to item #2 to get the address for item #3. And so on, until you get to the last item.



## [Singly linked list](https://leetcode.com/explore/learn/card/linked-list/209/singly-linked-list/1290/)

Singly-linked list organizes all the nodes in a sequence. Each node contains the value and a reference field to link to the next node.

In most cases, we will use the *head* node (the first node) to represent the whole list.

```python
# `val` is the value of the current node
# `next` is a pointer/reference to the next node
class SinglyListNode():
  __init__(self, val, next = None):
    self.val = val
    sele.next = next
```

#### Operations

Unlike the array, we are not able to access a random element in a singly-linked list in constant time.

If we want to get the *i*th element, we have to traverse from the head node one by one (use the "next" field). It takes us *O(n)* time on average to *visit an element by index*, where *n* is the length of the linked list.

- Insertion

Unlike an array, we don’t need to move all elements past the inserted element. Therefore, you can insert a new node into a linked list in `O(1)` time complexity, which is very efficient.

Add a new node to head, end, or in the middle, is a similar process. In "current" node add "next" reference to "next" node if existed, and find "prev" node if existed add "next" value to "current" node for link reference.

1. Initialize a new node *current* with the given value
2. Link the "next" field of *current* to "prev"'s next node next
3. Link the "next" field in "prev" to *current*

- Deletion

Find "next" value using the reference field of *current*. However, we have to traverse the linked list from the head node to find out "prev" which will take `O(n)` time on average. The space complexity is `O(1)` because we only need constant space to store our pointers.

1. Find *current*'s previous node "prev" and its "next" node next
2. Link "prev" to cur's "next" node next


## Doubly linked list


## Two-Pointer technique in Linked List

Imagine there are two runners with different speed. If they are running on a straight path, the fast runner will first arrive at the destination. However, if they are running on a circular track, the fast runner will catch up with the slow runner if they keep running.

That's exactly what we will come across using two pointers with different speed in a linked list:

1. If there is no cycle, the fast pointer will stop at the end of the linked list.
2. If there is a cycle, the fast pointer will eventually meet with the slow pointer.

- Complexity Analysis

If you only use pointers without any other extra space, the space complexity will be `O(1)`

Need to analyze how many times we will run our loop to determine Running time. 1. If there is no cycle, the fast pointer takes *N/2* times to reach the end of the linked list, where *N* is the length of the linked list. If there is a cycle, the fast pointer needs *M* times to catch up the slower pointer, where *M* is the length of the cycle in the list.

Obviously, *M <= N*. So we will run the loop up to *N* times. And for each loop, we only need constant time. So, the time complexity of this algorithm is *O(n)* in total.

- What should be the proper speed for the two pointers?

It is a safe choice to move the slow pointer one step at a time while moving the fast pointer two steps at a time. For each iteration, the fast pointer will move one extra step. If the length of the cycle is *M*, after *M* iterations, the fast pointer will definitely move one more cycle and catch up with the slow pointer.

- Important to note

1. Always examine if the node is *null* before you call the next field.
2. Carefully define the end conditions of your loop. make sure your end conditions will not result in an endless loop


```java
// Initialize slow & fast pointers
ListNode slow = head;
ListNode fast = head;
/**
 * Change this condition to fit specific problem.
 * Attention: remember to avoid null-pointer error
 **/
while (slow != null && fast != null && fast.next != null) {
    slow = slow.next;           // move slow pointer one step each time
    fast = fast.next.next;      // move fast pointer two steps each time
    if (slow == fast) {         // change this condition to fit specific problem
        return true;
    }
}
return false;   // change return value to fit specific problem
```


## What is a Linked List? [Reference: 0](references-0)

A linked list is a data structure where each element is a separate object. Unlike an array, a linked list is a collection of items grouped together either by a [Singly Linked List](#sll-dll) or [Doubly Linked List](#sll-dll).

## Why Linked Lists?

Even though arrays are good for most cases, there are cases where you might want to use linked lists. Arrays have a fixed size upon initialization, so when you reach the maximum size, we create an new array of size m \* 2, where m is the size of the old array. After creating the new array, we copy all of the contents from the old array to the new one, then perform the requested operation: add an element to the end of the array. This operation also happens if the next slot in memory if used by another process. Clearly, this is a very slow method.

On the other hand, Linked Lists can be put anywhere in RAM, so if the next memory address if full (eg. another process if using it), then we use a unused memory space, then create a pointer to it with the memory address (eg. 0x7ffeed557bd0).

Basically in general, if we had a problem of seating friends at a theater, arrays put all of the friends together in **one long row**, while Linked Lists basically does, **"Let's split up and watch the movie"**. [Reference: 2](#reference-two)

<a name="sll-dll" />

## Singly Linked List vs. Doubly Linked List

A singly linked list contains a value and the memory address to the next node in a `[value, next element memory address]` format, while a doubly linked list has the properties of a singly linked list with a previous memory address in a `[value, next element memory address, previous element memory address]` format.

## Pros and Cons of Linked Lists

**Pros:**

- Insertion and Deletion (on average) is constant time O(n)
- Takes advantage of using free memory space each time

**Cons:**

- Searching and accessing elements is O(n) in the worst case - because we don't have an particular order, so we might end up searching the entire linked list
- Not suitable for all problems

## How to represent a Linked List?

![image](https://s3-us-west-2.amazonaws.com/ib-assessment-tests/problem_images/singly-ll.png)

Source: ([InterviewBit](https://s3-us-west-2.amazonaws.com/ib-assessment-tests/problem_images/singly-ll.png))

## Speed of Linked List [Reference: 1](#references-1)

### Singly-Linked List (Average Speed)

| Access | Search | Insertion | Deletion |
| ------ | ------ | --------- | -------- |
| O(n)   | O(n)   | O(1)      | O(1)     |

### Doubly-Linked List (Average Speed)

| Access | Search | Insertion | Deletion |
| ------ | ------ | --------- | -------- |
| O(n)   | O(n)   | O(1)      | O(1)     |

## Linked List Implementation

In C++, this is very easy. To do this, we use `struct`:

### Singly-Linked List Implementation

```cpp
/* Implementation of Singly Linked List */
struct SinglyLinkedList
{
  int val; // value
  SinglyLinkedList *next; // memory address to next node
};
```

### Doubly-Linked List Implementation

```cpp
/* Implementation of Doubly Linked List */
struct DoublyLinkedList
{
  int val; // value
  DoublyLinkedList *next; // memory address to next node
  DoublyLinkedList *prev; // memory address to previous node
};
```

<a name="references" />

## References

<a name="references-0" />

- [0: InterviewBit](https://www.interviewbit.com/courses/programming/topics/linked-lists/#:~:text=A%20linked%20list%20is%20a,has%20a%20reference%20to%20null.)

<a name="references-1" />

- [1: Big O Cheatsheet](https://www.bigocheatsheet.com/)

<a name="references-two" />

- [2: Grokking Algorithms from Safari Books](https://www.oreilly.com/)
