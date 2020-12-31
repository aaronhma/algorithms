# Map

## About

A map is a set in the form of key-value pairs (eg. $\{("Test 1", 1), ("Test 2", 2)\}$). While the keys in an ordinary array contains consecutive integers, there are no such requirements in a map.

## C++ Implementation

C++'s STL provides two map structures:

- `map`: Based on a bBST (for sorted order) and accessing elements take $\theta(log \ n)$
- `unordered_map`: Uses hashing for accessing elements in $\theta(1)$ time on average

The following code creates a map where the keys are strings and the values are integers:

```cpp
map<string,int> m;
m["monkey"] = 4;
m["banana"] = 3;
m["harpsichord"] = 9;
cout << m["banana"] << "\n"; // 3
```

If the value of a key is requested but the key doesn't exist, the key is automatically added to the map with a value of $0$.

```cpp
map<string,int> m;
cout << m["random"] << "\n"; // 0
```

Also, the `count` function can be used to check if the key exists.

**NOTE: The `count` function doesn't "count" how many times a key appears in the map. It returns 1 if the key is present in the map, and 0 if the key is not.**

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
