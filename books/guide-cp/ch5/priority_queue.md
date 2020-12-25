# Priority Queue

## About

A priority queue is a multiset in sorted order that allows insertion and removal in $\theta(log \ n)$ time and retrieval in $\theta(1)$ time.

## C++ Reference

```cpp
priority_queue<int> q;
q.push(3);
q.push(5);
q.push(7);
q.push(2);

cout << q.top() << "\n"; // 7
q.pop();
cout << q.top() << "\n"; // 5
q.pop();
q.push(6);
cout << q.top() << "\n"; // 6
q.pop();
```

Similarly, if we wanted to create a priority queue that supports finding/removing the smallest element, we can do it as follows:

```cpp
priority_queue<int, vector<int>, greater<int>> q;
```
