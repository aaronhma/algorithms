# String Hashing

## About

Hashing is how `unordered_map` is implemented. We have an array $arr$ of size $n$ and for every $key$, we have a hash function $f(key)$ that puts $val$ into $arr[key]$. We strive to write a hash function to reduce collisions (where $f(key_1) = f(key _2)$ but $key_1 \neq key_2$).

## Sections

| ☆   | Name (Content)                                                | C++                                                         | Python | Editorials                                                      |
| --- | ------------------------------------------------------------- | ----------------------------------------------------------- | ------ | --------------------------------------------------------------- |
|     | [String Hashing](string-hashing/README.md) | [C++](string-hashing/string-hashing.cpp) |        | [cp-algo](https://cp-algorithms.web.app/string/string-hashing.html) |

## Collision Handling

In GNU C++, collisions are handled through chaining: make each cell of our hash table point to a linked list of records that have the same hash function value. Chaining is simple, but requires additional memory outside the table.

## Fast Hash Function in C++

Based off [this blog post](https://codeforces.com/blog/entry/62393).

```cpp
// Custom hash for unordered_map and unordered_set (works only for integers/long long)
struct custom_hash
{
  static uint64_t splitmix64(uint64_t x)
  {
    // http://xorshift.di.unimi.it/splitmix64.c
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const
  {
    static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
```

**Note that we can use [gp_hash_table - see this blog post](https://codeforces.com/blog/entry/60737) for an even faster hash table using Policy-Based Data Structures.**
