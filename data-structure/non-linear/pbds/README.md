# Policy-Based Data Structure (PBDS)

<details>
  <summary>Getting Started with Policy-Based Sets</summary>

The `g++` compiler provides some data structures not part of the C++ STL. These structures are called policy-based structures. To use these, we must add the following lines of code:

```cpp
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
```

</details>

<details>
  <summary>Creating a Policy-Based Indexed Set</summary>

After including the PBDS library, if we were to create a Policy-Based set with a index (like `vector`), we can do this:

```cpp
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set; // for indexed_set

indexed_set s;
s.insert(2);
s.insert(3);
s.insert(7);
s.insert(9);

auto x = s.find_by_order(2); // returns iterator to element
cout << *x << "\n"; // print element (7)
cout << s.order_of_key(7) << "\n"; // print index of 7 (2)

// If the element does not appear in the set, we get that position that element would be in the set:

cout << s.order_of_key(6) << "\n"; // 2
cout << s.order_of_key(8) << "\n"; // 3
```

**NOTE: Both functions work in $\theta(log \ n)$.**

</details>
