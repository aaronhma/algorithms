# Sets

## Sets

C++'s Standard Template Library contains 2 implementations of a `set`:

- `set`: Based on a bBST and operations work in $\theta(log n)$
- `unordered_set`: Based on a hash table and operations work in $\theta(1)$ time on average

Both structures are efficient, though `unordered_set` is faster than `set` as there is no ordering of the elements unlike a `set`. Another important thing to note is that a `set` cannot store duplicate items.

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

## Multisets

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

The error is because we remove _all_ the values instead of _one_ value. To fix that, here's what we can do instead:

```cpp
multiset<int> s;
s.insert(5);
s.insert(5);
s.insert(5);

cout << s.count(5) << "\n"; // 3

s.erase(s.find(5));

cout << s.count(5) << "\n"; // 2
```