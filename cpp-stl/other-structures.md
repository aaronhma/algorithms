# Other Structures

<details>
  <summary>Deque</summary>

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

## Stack

C++ also provides two specialized data structured based on the `deque`. The first of which is a `stack`. It provides `push`, `pop`, and `top` which retrieves the last element.

```cpp
std::stack<int> s;
s.push(2); // [2]
s.push(5); // [2,5]
cout << s.top() << "\n"; // 5
s.pop(); // [2]
cout << s.top() << "\n"; // 2
```

</details>

<details>
  <summary>Queue</summary>

The other specialized data structure besides a stack is `queue`. In a queue, elements are inserted at the front of the structure. The functions `push`, `pop`, `front`, and `back` are provided in a `queue`.

```cpp
queue<int> q;
q.push(2); // [2]
q.push(5); // [2,5]
cout << q.front() << "\n"; // 2
q.pop(); // [5]
cout << q.back() << "\n"; // 5
```

</details>
