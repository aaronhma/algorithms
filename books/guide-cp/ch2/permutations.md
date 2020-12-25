# Permutations

## About
Mathematically speaking, a permutation is the arrangement of the array ${a_1, a_2, ..., a_n}$ to ${a_1\hat{}, a_2\hat{}, ..., a_n\hat{}}$.

## C++ Implementation

Assume we have an array $arr = \{a_1, a_2, a_3, ..., a_n\}$. We can have 3 different "variants" of C++'s built-in `next_permutation`:

* Variant #1:

```cpp
do {
  // Includes original array before permutated
} while (next_permutation(arr.begin(), arr.end()));
```

* Variant #2:

```cpp
while (next_permutation(arr.begin(), arr.end())) {
  // Does not include original array before permutated
}
```

* Variant #3:

```cpp
// lexicographically sort array in O(n log n) time
sort(arr.begin(), arr.end());

do {
  // Includes original array before permutated in sorted order
} while (next_permutation(arr.begin(), arr.end()));
```
