# Binary Search Tree

## Background

A binary search tree is a [binary tree](../binary_tree/README.md) where nodes are always ordered by a method as shown:

<a name="principles" />

- left nodes are smallest than the current node
- right nodes are larger than the current node

![Image](https://www.interviewcake.com/images/svgs/bst__binary_search_tree.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/binary-search-tree))

**NOTE: Checking if a [binary tree](../binary_tree/README.md) is a Binary Search Tree is a common question.**

## Pros & Cons of Binary Search Tree

- Pros:

  - Good performance:
    - All operations: O(log n) time
    - Better worst case performance than [hash map](../../map/README.md)
  - BSTs are sorted, so finding closest elements to a value is O(log n) time

- Cons:
  - No constant time operations
  - O(n) worst case time if unbalanced to make it balanced

## Balanced vs. Un-balanced

A balanced binary search tree follows the [binary search tree principles](#principles).

![Image](https://www.interviewcake.com/images/svgs/bst__balanced_non_balanced.svg?bust=206)

([Source](https://www.interviewcake.com/concept/cpp/binary-search-tree))

## References

- [Interview Cake: Binary Search Tree](https://www.interviewcake.com/concept/cpp/binary-search-tree)
