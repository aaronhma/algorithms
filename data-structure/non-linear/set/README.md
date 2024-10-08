# Set [C++](./set.cpp)

## Background

A set (see picture below) is an abstract data type that can store unique values. **NOTE: There is also a multiset that can store the same value multiple times.**

![Image](https://www.codeproject.com/KB/recipes/dotnetset/Sets02.png)

A `set` is a map with no values (we're only interested in the keys). Another way of saying this (in C++ code):

```cpp
// we don't care what the second value is - just make it a boolean value that's always true for simplicity
map<int, bool> map;
//   ^ change this to the data type of something you want!
map[key] = true;
map.insert({key, true});
```

The main operations of a set are:

-   `insert` - Inserts an element into a set and re-sorts the set
-   `count` - Returns $1$ if element exists in set, otherwise it returns $0$ (For `multiset`, this is not the case - it returns the number of times the element exists in the multiset)
-   `union` - Adds the elements from $2$ sets into $1$, without any duplicates ([set_union](https://www.cplusplus.com/reference/algorithm/set_union/))
-   `intersection` - an element that belongs in set $A$ and set $B$ ([set_intersection](https://www.cplusplus.com/reference/algorithm/set_intersection/))
-   `difference` - elements in either set but not in the intersection ([set_difference](https://www.cplusplus.com/reference/algorithm/set_difference/))
-   `subset` - tests if set $A$ is a subset of set $B$ ([Method $4$/$5$ of this article](https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/))

<details>

<summary>C++ Set Usage</summary>

C++'s Standard Template Library contains 2 implementations of a `set`:

-   `set`: Based on a bBST and operations work in $\theta(log \ n)$
-   `unordered_set`: Based on a hash table and operations work in $\theta(1)$ time on average

Both structures are efficient, though `unordered_set` is faster than `set` as there is no ordering of the elements unlike a `set`. Another important thing to note is that both `set` and `unordered_set` cannot store duplicate items. For sets that can store duplicate items, see `multiset`.

**WARNING: A `unordered_set` can only store items that are hashable! For items that are not hashable (eg. `pair`/user-defined types), you must create your own hash function!**

An example of `set` being used is shown below:

```cpp
set<int> s;

// add element to the set
s.insert(3);
s.insert(2);
s.insert(5);

// no duplicates in set
// 1: in set
// 0: not in set
cout << s.count(3) << "\n"; // 1
cout << s.count(4) << "\n"; // 0
s.erase(3);
s.insert(4);
cout << s.count(3) << "\n"; // 0
cout << s.count(4) << "\n"; // 1

cout << s.size() << "\n";

// only way to access elements in a set
for (auto x : s) {
  cout << x << "\n";
}

// find x in set
auto it = s.find(x);

if (it == s.end()) {
  // x is not found
} else {
  // found x
}

auto first = s.begin(); // first element in set
auto last = s.end(); last--; // last element in set

// print out the integer values instead of an iterator
cout << *first << " " << *last << "\n";

// find first element <= x
cout << *s.lower_bound(x) << "\n";

// find first element > x
cout << *s.upper_bound(x) << "\n";
```

</details>

<details>

<summary>Multisets</summary>

Multisets allow multiple copies of the same element in a `set`. To resemble `set` and `unordered_set`, there are `multiset` and `unordered_multiset`.

```cpp
// create a multiset
multiset<int> s;

s.insert(5);
s.insert(5);
s.insert(5);

// count(x) => returns # of times x appears in the set
cout << s.count(5) << "\n"; // 3
```

### ⚠️ WARNING! Don't do these mistakes! ⚠️

One of the most common mistakes used with C++'s `multiset` is shown below:

```cpp
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);

cout << s.count(5) << "\n"; // 3

s.erase(5);

cout << s.count(5) << "\n"; // 0
```

The error is because we remove _all_ the values instead of _one_ value. To fix that, here's what we can do instead (that removes the first occurence of $5$ in the `multiset`):

```cpp
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);

cout << s.count(5) << "\n"; // 3

s.erase(s.find(5));

cout << s.count(5) << "\n"; // 2
```

</details>
