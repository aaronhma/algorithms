# Disjoint Set (Union-Find)

## About

Consider a social media network where people can be friends and there are the following operations:

1. Add a friend, $x$ becomes a friend of $y$ (vice versa)
2. Check if $x$ is a friend of $y$ (vice versa)

We can use a **disjoint set**. We have an array $parent$ where $parent[i]$ represents the parent of the $i$-th item.

From our social media network example, to add a friend we perform $union(x, y)$, and to check if $x$ is friends with $y$, we perform $find(x)$
