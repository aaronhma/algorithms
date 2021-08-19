# Arrays [C++ Code](./vector.cpp)

## Examples

| ☆   | Math Technique                                            | C++                                         | Problems |
| --- | --------------------------------------------------------- | ------------------------------------------- | -------- |
|     | [Frequency Array](./freq-array/README.md)                 | [C++](./freq-array/freq-array.cpp)          |          |
|     | [Longest Consecutive Number Subarray](./lcsa/README.md)   | [C++](./lcsa/lcsa.cpp)                      |          |
|     | [Maximum Sum Subarray](./max-subarray/README.md)          | [C++](./max-subarray/max-subarray.cpp)      |          |
|     | [Prefix Sum Array](./range-query/README.md)               | [C++](./range-query/prefix-sum-array.cpp)   |          |
|     | [Range Update Trick](./range-query/range-update-trick.md) | [C++](./range-query/range-update-trick.cpp) |          |
|     | [Sum Queries](./range-query/README.md)                    | [C++](./range-query/sum-queries.cpp)        |          |
|     | [Sliding window](./sliding-window/README.md)              | [C++](./sliding-window/sliding-window.cpp)  |          |

## Background

-   [C++ std::array](http://www.cplusplus.com/reference/array/array/)
-   [C++ std::vector](http://www.cplusplus.com/reference/vector/vector/)

![Array Image](https://media.geeksforgeeks.org/wp-content/uploads/C-Arrays.jpg)
([Source](https://www.geeksforgeeks.org/c-sharp-arrays/))

An array is a list of items stored in sequential order. The idea behind arrays is where a collection of items of the same type are stored with a index from $0$ - $n - 1$, where $n$ is the size of the array.

## When to Use In-Place Array Operations

If we'll need the original array values later, then we shouldn't be overwriting them. In these cases, it's best to create a copy to work with, or to simply not use _in-place_ techniques.

In-place operations are valuable when appropriate because they reduce the space complexity of an algorithm. Instead of requiring `O(N)` space, we can reduce it down to `O(1)`.

## Array VS Linked list analysis running time

When you want to store multiple elements, use an array or a list.

With an array, all your elements are stored right next to each other. Arrays allow fast reads. All elements in the array should be the same type (all ints, all doubles, and so on).
With a list, elements are strewn all over, and one element stores the address of the next one. Linked lists allow fast inserts and deletes.

|           | Arrays | Linked List |
| --------- | ------ | ----------- |
| reading   | O(1)   | O(n)        |
| Insertion | O(n)   | O(1)        |
| Deletion  | O(n)   | O(1)        |

## Data access: random access and sequential access

-   Sequential access

It means reading the elements one by one, starting at the first element. Linked lists can only do sequential access. If you want to read the 10th element of a linked list, you have to read the first 9 elements and follow the links to the 10th element.

-   Random access

It means you can jump directly to the 10th element. Array is faster at read because it provides random access.

## Speed of Arrays

| Operation                                  | Big O Notation |
| ------------------------------------------ | -------------- |
| Accessing Elements                         | O(1)           |
| Insertion/Removing Elements from beginning | O(n)           |
| Insert/Removing from the end               | O(1)           |
| Insert/Removing from the middle            | O(n)           |

## C++ Array

An array in C++ is a static array that is defined upon initialization.

<details>
  <summary>Creating an Array</summary>

```cpp
int arr[50];
```

In the example above, we create an array of size $50$ (we can store $50$ elements numbered from indexes $0$ to $49$).

If we were to access the $6$-th element, we can access it with $arr[6]$.

**WARNING: The $i$-th index in $arr[i]$ must be an integer from $0$ to $n - 1$ where $n$ is the size of the vector.**

</details>

<details>
  <summary>Sorting an Array</summary>

We can sort an array in $\theta(n \ log \ n)$ using the `sort` function:

```cpp
// WARNING: This code does NOT work properly. Can you spot it?
int arr[] = {4, 1, 2, 5, 3};
sort(arr, arr + 4);
```

Unfortunately, after running this, our "sorted" array is $\{ 1, 2, 4, 5, 3\}$. Why is that? It turns out $arr + 4$ means sort the first $4$ elements in the array.

If we were to sort the entire array, we have to do $sort(arr, arr + n)$ where $n$ is the size of the array.

```cpp
int arr[] = {4, 1, 2, 5, 3};
sort(arr, arr + 5);
```

</details>

<details>
  <summary>Pros & Cons of Arrays</summary>

## Pros

-   stores data in sequential memory
-   uses indexing to get data (index from $0$ - $n - 1$)

## Cons

-   only contain data of same type
-   fixed capacity

</details>

## C++ Vector

A `vector` is a dynamic array that satisfies the **Random Access Property**:

-   We can access any element in $\theta(1)$ time. We have this property with a vector/array because our data is in a contiguous section of memory.

<details>

<summary>Creating a Static Vector</summary>

```cpp
vector<int> arr(50);
```

In the example above, we're creating a vector of size $50$ (we can store $50$ elements from indexes $0$ to $49$).

If we were to access the $6$-th element, we can access it with $arr[6]$.

**WARNING: The $i$-th index in $arr[i]$ must be an integer from $0$ to $n - 1$ where $n$ is the size of the vector.**

To add/update the data at $arr[i]$, we can use the following format:

```cpp
arr[6] = 3;
arr[4] = 9;

arr[6] = 2; // update the data at arr[6]
```

</details>

<details>

<summary>Creating a Dynamic Vector</summary>

Also, we can create an vector through the following format:

```cpp
vector<int> arr;
```

And add elements with the `push_back` function:

```cpp
arr.push_back(50);
arr.push_back(32);
```

**WARNING: Using the example above, we can't access/update the element at $arr[6]$. We can only access elements in the array boundaries ($0$ to $n -  1$).**

</details>

<details>

<summary>Vectors with Different Data Types</summary>

For general cases, defining a vector follows the following format:

```cpp
vector<data_type_here> your_name_here;
```

where `data_type_here` is the data type you want the vector to store and `your_name_here` is the name of the array.

We can also define the following vectors (and more) without any issues:

```cpp
vector<int> ints;
vector<string> str;
vector<float> floats;
vector<double> doubles;
vector<long long> ll;
vector<char> c;
```

We can even define a vector with a vector inside!

```cpp
// 2D vectors:
vector<vector<int>> ints_2d;
vector<vector<string>> str_2d;
vector<vector<float>> floats_2d;
vector<vector<double>> doubles_2d;
vector<vector<long long>> ll_2d;
vector<vector<char>> c_2d;

// Adding values
// Add a vector that contains 2 to the 2D vector 'ints_2d'
ints_2d.push_back({2});

// Accessing data in arr[row][column] format
cout << ints_2d[0][0] << "\n"; // 2

// Updating data in arr[row][column] format
ints_2d[0][0] = 3;
ints_2d[0][0]++;

// Accessing data in arr[row][column] format
cout << ints_2d[0][0] << "\n"; // 4
```

**WARNING: When defining vectors, make sure your array names are different!**

</details>

<details>

<summary>Adding Data to a Vecotr</summary>

We can define a vector with some starting data using the format shown below:

```cpp
vector<int> arr1 = {4, 5, 6};
// Our vector now contains {4, 5, 6}.

// -- OR --
// in C++ 11 and above:
vector<int> arr2 {4, 5, 6};
// Our vector now contains {4, 5, 6}.
```

We can also use the `push_back` function to add data to our vector:

```cpp
vector<int> arr;
arr.push_back(1);
// array contains {1}

for (int i = 2; i <= 4; i++)
  arr.push_back(i);

// array contains {1, 2, 3, 4}
```

</details>

<details>

<summary>Removing The Last Element from a Vecotr</summary>

Assume that we have an array $arr$ with elements $\{ 1, 2, 3, 4, 5, 6 \}$. We can delete the last element from the array through the `pop_back` function.

```cpp
arr.pop_back();
```

Now, our array contains $\{ 1, 2, 3, 4, 5 \}$ after deleting the last element.

</details>

<details>

<summary>Size of a Vector</summary>

If we were to have an array $arr = \{ 1, 2, 3, 4, 5, 6\}$, and we want to get the `size` of the array, we can use the `size` function:

```cpp
vector<int> arr { 1, 2, 3, 4, 5, 6};

cout << arr.size() << "\n"; // 6
```

</details>

<details>

<summary>Clearing a Vector</summary>

If we had a really messy vector, we can clear our vector using the `clear` function:

```cpp
vector<int> arr {1, 2, 3};
cout << arr.size() << "\n"; // 3

arr.clear(); // clear the array

cout << arr.size() << "\n"; // 0
```

</details>

<details>

<summary>Checking if a Vector is Empty</summary>

We can check if our vector is empty using the `empty` function (that returns a boolean value):

```cpp
vector<int> arr {1, 2, 3};

// Array is not empty
if (arr.empty())
  cout << "Array is empty\n";
else
  cout << "Array is not empty\n";

arr.clear(); // clear the array

// Array is empty
if (arr.empty())
  cout << "Array is empty\n";
else
  cout << "Array is not empty\n";
```

</details>

<details>

<summary>Adding Data to a Vector Given an Index</summary>

We can add data $v$ to a vector given an index $i$ using the format `arr.insert(arr.begin() + i, v)`. An example:

```cpp
arr.insert(arr.begin() + 6, 4); // add an element 4 to index 6 - O(n)
```

</details>

<details>

<summary>Erasing Data from a Vector at a Specified Point</summary>

```cpp
// delete 6th element
arr.erase(arr.begin() + 5);

// delete the first 3 elements
arr.erase(arr.begin(), arr.begin() + 3);

// We can also pass in an iterator to the element:
// More information on find() in "STL Algorithms on Vectors"
auto it = find(arr.begin(), arr.end(), 4);

if (it != arr.end()) {
  arr.erase(it);
}
```

The time complexity of `arr.erase(it)` is pretty high: $\theta(n + m)$ where $n$ is the # of elements erased and $m$ is the # of elements after the last deleted that will be moved.

</details>

<details>

<summary>Sorting a Vector</summary>

We can sort a vector in $\theta(n \ log \ n)$ using the `sort` function.

```cpp
// Sort the entire array in ascending order
sort(arr.begin(), arr.end());

// Sort the entire array in descending order
sort(arr.rbegin(), arr.rend());
```

</details>

<details>

<summary>Time Complexities of Important Vector Operations</summary>

Here are the most important functions used in CP and their time complexities:

\*_Table ordered from most important to least important._

| Operation   | Time Complexity                                                 |
| ----------- | --------------------------------------------------------------- |
| `push_back` | $\theta(1)$                                                     |
| `pop_back`  | $\theta(1)$                                                     |
| `size`      | $\theta(1)$                                                     |
| `clear`     | depending on your machine, it may be $\theta(1)$ or $\theta(n)$ |
| `empty`     | $\theta(1)$                                                     |
| `insert`    | $\theta(n)$                                                     |
| `erase`     | $\theta(n + m)$                                                 |
| `sort`      | $\theta(n \ log \ n)$                                           |

</details>

<details>

<summary><code>push_back</code> vs. <code>emplace_back</code></summary>

#### **[Source](https://qr.ae/pN0zCj)**

Here are the steps to execute `push_back`:

1. construct a new (empty) element
2. add it to the end of the container
3. copy the argument into the new element in #1

While the steps to execute `emplace_back`:

1. construct a new element using the argument values
2. add it to the end of the container

Using `emplace_back` spares you a copy operation.

An example of using `push_back` and `emplace_back`:

```cpp
// create a array of pairs that contains chars and integers
vector<pair<char, int>> arr;

// use push_back to create a new pair object
arr.push_back({'a', 1});

// NOTE: Using push_back, we can't do this:
// arr.push_back('b', 2);

// insert a pair in-place
arr.emplace_back('b', 2);
```

**ℹ️ Tip: For [primitive data types](https://www.geeksforgeeks.org/c-data-types/), it doesn't really matter if we use `push_back` or `emplace_back`. But for [objects](https://en.wikipedia.org/wiki/C%2B%2B_classes), `emplace_back` is preferred for efficiency reasons.**

</details>

<details>

<summary>Iterators</summary>

```
 +---+---+---+---+---+---+---+
 |   | 1 | 2 | 3 | 4 | 5 |   |
 +---+---+---+---+---+---+---+
   ↑   ↑               ↑   ↑
   |   |               |   |
rend() |         rbegin()  end()
       |                   rbegin().base()
     begin()
     rend().base()
```

Note that `begin()` points to an element in the data structure (first element), while `end()` points outside the data structure (**imaginary** last element outside the data structure + 1). Also, we can access the last element in the vector using reverse iterators in the form `arr.back()/arr.rbegin()`. Similarly, we can access the **imaginary** element before the first element using `arr.rend()`. The element where an iterator points to can be accessed using the $*$ symbol.

```cpp
cout << *arr.begin() << "\n";
```

Using this method, we can also get the element at index $5$ using pointer arithmetic:

```cpp
cout << *(arr.begin() + 5) << "\n"; // WARNING: The index is 0-based!!!
```

</details>

<details>

<summary><code>shuffle</code> vs. <code>random_shuffle</code></summary>

-   `random_shuffle` uses `rand()` to randomize the items, while `shuffle` uses generators from the [`<random>`](http://www.cplusplus.com/reference/random/) library
-   `shuffle` is an improvement over `random_shuffle` (where [`RAND_MAX`](http://www.cplusplus.com/reference/cstdlib/RAND_MAX/) is implementation dependent **If our array is of size $n$ and $n >$ `RAND_MAX`, consider using `shuffle` (or face undefined behaviors)**)
-   If you're using `shuffle`, set the seed as the current time in microseconds: `mt19937 rng((uint32_t)chrono::steady_clock::now().time_since_epoch().count()); `

</details>
