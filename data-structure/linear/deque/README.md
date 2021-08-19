# Deque (Double-Ended Queue)

A `deque` is a dynamic array that can be efficiently manipulated at both ends. Like a `vector`, a `deque` contains `push_back` and `pop_back`, but it also provides `push_front` and `pop_front` which isn't available with a vector. See the below code for an example:

```cpp
std::deque<int> d;
d.push_back(5); // [5]
d.push_back(2); // [5,2]
d.push_front(3); // [3,5,2]
d.pop_back(); // [3,5]
d.pop_front(); // [5]
```

The operations of a `deque` works in $\theta(1)$ on average. However, deques have large constant factors than vectors, so deques should only be used when both sides of the array needs to be manipulated.
