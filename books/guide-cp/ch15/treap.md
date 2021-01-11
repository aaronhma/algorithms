# Treaps ($tree + heap \Rightarrow treap$)

## About

A treap is a binary tree that can store the contents of an array in such a way that we can efficiently split an array into two arrays and merge two arrays into an array. Each node ina treap has two values: a weight and a value. Each node's weight is smaller or equal than the weights of its children, and the node is located in the array after all nodes in its left subtree and before all nodes in its right subtree.

![Image](resources/treaps/ex.png)

## Splitting and Merging

When a new node is added to the treap, it is assigned a random weight. This guarantees that the tree is balanced (its height is $\theta(log \ n)$) with high probability and its operations can be performed efficiently.

# **TODO: Couldn't understand. Read [this](https://cp-algorithms.com/data_structures/treap.html#:~:text=Treap%20is%20a%20data%20structure,a%20binary%20heap%20by%20Y.) for more info.**
