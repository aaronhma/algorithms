# Linked List

## About

A linked list is a data structure that avoids copying the array over and over when the array's capacity has been reached. Each element is in the form of $\{ val, next \ \text{(possibly previous pointer if a doubly linked list)} \}$ where $val$ is the current value and $next$ is a pointer to the next element.

Unfortunately, using a linked list, we lose the Random Access Propety, which is accessing any element should take $\theta(1)$ time. In fact, accessing any element in a linked list is $\theta(n)$ time in the worst case, as we will (possibly) need to iterate through the entire linked list.

## Erasing Data from a Linked List

We can erase data from a linked list using the `erase` function that runs in $\theta(n)$ time:

```cpp
// delete second element
auto it = list.begin();
advance(itr, 1); // move iterator 1 position forward

list.erase(it);

// delete all elements in the array
list.erase(list.begin(), list.end());
```
