# Set

## Background

A set (see picture below) is an abstract data type that can store unique values. **NOTE: There is also a multiset that can store the same value multiple times.**

![Image](https://www.codeproject.com/KB/recipes/dotnetset/Sets02.png)

The main operations of a set are:

- `union` - Adds the elements from 2 sets into 1, without any duplicates
- `intersection` - an element that belongs in set A and set B
- `difference` - elements in either set but not in the intersection
- `subset` - tests if set A is a subset of set B

## C++ Usage

```cpp
// Include libraries
#include <iostream>
#include <set>
/* multiset is also in set */

std::set<int> set;

set.insert(1); // insert
set.insert(2); // insert
set.insert(3); // insert
set.insert(1); // nothing happens

std::cout << set.size() << "\n"; // 3

// check if element 3 is in set

int key = 3;

if (set.find(key) != set.end()) { // true
  std::cout << "3 in set!" << "\n";
} else {
  std::cout << "3 in not set!" << "\n";
}

// count method
// NOTE: count() won't count, it returns 1 (in set) or 0 (not in set)

if (set.count(key)) { // true
  std::cout << "[count] 3 in set!" << "\n";

  set.erase(key); // erase 3 from set
} else {
  std::cout << "[count] 3 in not set!" << "\n";
}

std::cout << set.size() << "\n"; // 2
```

## References

- [C++ Reference: Set](http://www.cplusplus.com/reference/set/set/)
