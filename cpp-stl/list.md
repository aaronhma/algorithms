# Linked List

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
