# Map [C++ code](./map.cpp)

## Contents

<details>

<summary>What is a Map?</summary>

A map is a set in the form of key-value pairs (eg. $\{("Test 1", 1), ("Test 2", 2)\}$) that is **always sorted**. While the keys in an ordinary array are integers, there are no such requirements in a map.

</details>

<details>

<summary>C++ Usage</summary>

C++'s STL provides two map structures:

-   `map`: Based on a bBST (for sorted order) and accessing elements take $\theta(log \ n)$
-   [`unordered_map`](unordered_map.md): Uses hashing for accessing elements in $\theta(1)$ time on average

The following code creates a map where the keys are strings and the values are integers:

```cpp
map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["monkey"] << "\n"; // 4
```

If the value of a key is requested but the key doesn't exist, the key is automatically added to the map with a value of $0$.

```cpp
map<string,int> m;
cout << m["random"] << "\n"; // 0
```

Also, the `count` function can be used to check if the key exists.

**NOTE: The `count` function doesn't "count" how many times a key appears in the map. It returns $1$ if the key is present in the map, and $0$ if the key is not.**

```cpp
map<string, int> m;

if (m.count("random")) {
  // key exists
} else {
  // key doesn't exist
}
```

To print a map in C++, refer to the following code:

```cpp
map<string, int> m;

for (auto i : m) {
  cout << i.first << " " << i.second << "\n";
}
```

</details>

<details>

<summary>Iterators in a Map</summary>

Unlike vectors, using iterators with a map is the same as a linked list. We cannot directly do `map.begin() + 2`/`map.end() - 2`/`map.begin() * 2`. We also cannot subtract/add iterators from an iterator. Instead, we have to do the following:

```cpp
map<int> map1;
// -- adding data to the map is omitted for brevity

auto it = map1.begin();
it++; // move 1 space foward

// move 4 spaces forward
for (int i = 1; i <= 4; i++)
  it++;

// == OR ==
advance(it, 2); // move ahead 2 spaces forward
```

</details>

<details>

<summary>Time Complexity of Operations</summary>

| Operation      | Time Complexity   |
| -------------- | ----------------- |
| `map[x]`       | $\theta(log \ n)$ |
| `map.count()`  | $\theta(log \ n)$ |
| `map.find()`   | $\theta(log \ n)$ |
| `map.erase()`  | $\theta(log \ n)$ |
| `map.insert()` | $\theta(log \ n)$ |
| `map.size()`   | $\theta(1)$       |
| `map.empty()`  | $\theta(1)$       |

</details>
