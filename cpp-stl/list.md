# Linked List

## About

A linked list is a data structure that avoids copying the array over and over when the array's capacity has been reached. Each element is in the form of $\{ val, next \ \text{(possibly previous pointer if a doubly linked list)} \}$ where $val$ is the current value and $next$ is a pointer to the next element.

Unfortunately, using a linked list, we lose the Random Access Propety, which is accessing any element should take $\theta(1)$ time. In fact, accessing any element in a linked list is $\theta(n)$ time in the worst case, as we will (possibly) need to iterate through the entire linked list.

In C++'s STL implementation of a linked list, `std::list` is a doubly linked list container (`std::forward_list` for singly linked list) that supports constant time insertion and removal of elements from anywhere in the container.

---

## Element Access

<details>
  <summary>Getting the First Element from a Linked List</summary>

We can get the first element of a linked list through the `front()` function in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

cout << "Front of the list: " << letters.front() << "\n";
```

Calling front on an empty container is undefined.

</details>

<details>
  <summary>Getting the Last Element from a Linked List</summary>

We can get the last element of a linked list through the `last()` function in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

cout << "End of the list: " << letters.back() << "\n";
```

Calling back on an empty container causes [undefined behavior](https://en.cppreference.com/w/cpp/language/ub).

</details>

---

## Modifiers

<details>
  <summary>Adding Elements to the Front of a Linked List</summary>

We can add elements to the front of a linked list in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

letters.push_front('C');
```

If an exception is thrown (which can be due to `Allocator::allocate()` or element copy/move constructor/assignment), this function has no effect.

</details>

<details>
  <summary>Adding Elements to the Back of a Linked List</summary>

We can add elements to the back of a linked list in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

letters.push_back('c');
```

If an exception is thrown, this function has no effect (strong exception guarantee).

</details>

<details>
  <summary>Deleting Elements from the Front of a Linked List</summary>

We can delete elements from the front of a linked list in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

letters.pop_front();
```

If their are no elements in the linked list, the behavior is undefined.

</details>

<details>
  <summary>Deleting Elements from the Back of a Linked List</summary>

We can delete elements from the back of a linked list in $\theta(1)$:

```cpp
list<char> letters {'a', 'b'};

letters.pop_back();
```

Calling `pop_back()` on an empty container is undefined.

</details>

<details>
  <summary>Erasing Data from a Linked List</summary>

We can erase data from a linked list using the `erase` function that runs in $\theta(n)$ time:

```cpp
// delete second element
auto it = list.begin();
advance(itr, 1); // move iterator 1 position forward

list.erase(it);

// delete all elements in the array
list.erase(list.begin(), list.end());
```

</details>
