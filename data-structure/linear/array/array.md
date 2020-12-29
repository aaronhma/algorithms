# Arrays

<!-- premium button source: leetcode -->
<div style="background: rgb(255, 183, 77); border-radius: 12px; font-weight: 500; color: white; margin-left: 4px; padding: 2px 10px; display: block; -webkit-box-align: center; font-family: Open Sans, Arial;" data-font=":font-smoothing" data-loaded="true" data-article="arrays" data-premium="true">Premium</div>

## Background

- [C++ std::array](http://www.cplusplus.com/reference/array/array/)
- [C++ std::vector](http://www.cplusplus.com/reference/vector/vector/)

![Array Image](https://media.geeksforgeeks.org/wp-content/uploads/C-Arrays.jpg)
([Source](https://www.geeksforgeeks.org/c-sharp-arrays/))

An array is a list of items stored in sequential order. The idea behind arrays is where a collection of items of the same type are stored with a index from 0 - n, where n is the size of the array.

## Pros & Cons of Arrays

- Pros:
  - Collections of items of same data type
  - You can get elements by index
  - Sorting, searching, etc. is included
  - Many other data structures can be implemented with arrays
- Cons:
  - Only hold same data type
  - May need to copy data to allow getting elements by index
  - If the size of array grows huge, the speed gets slower

## Speed of Arrays

| Operation                                  | Big O Notation |
| ------------------------------------------ | -------------- |
| Accessing Elements                         | O(1)           |
| Insertion/Removing Elements from beginning | O(n)           |
| Insert/Removing from the end               | O(1)           |
| Insert/Removing from the middle            | O(n)           |

## C++ Usage

C++ provides 2 implementations of arrays, the fixed-sized array and a dynamic array which grows in size depending on the size needed.

- Fixed-sized array:

```cpp
#include <iostream>

int ARRAY_SIZE = 3;
int arr[ARRAY_SIZE];
```

- Dynamic array:

```cpp
#include <vector>

std::vector<int> arr;
```

## Example of an Array

An real-world use case of an array is where you need to arrange books in a pile into alphabetical order. This is where arrays come into handy.

- Brute force solution:
  For every book in the pile, push the value onto a new array, then sort the values in the array by first character, then second, etc.

```cpp
// This is VERY SLOW on huge amounts of data!

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> books = {"some random book", "another book"};

std::vector<std::string> sorted;

for (std::string book : books) {
  sorted.push_back(book);

  // sort array
}
```

- C++ Standard Library:

```cpp
// Faster

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

std::vector<std::string> books = {"some random book", "another book"};

std::sort(arr.begin(), arr.end() [](const std::string &a, const std::string &b) {
  // convert first letter of each string
  // to an integer
  int a_int = a[0] - 48;
  int b_int = b[0] - 48;

  // comparison:
  return a_int < b_int;
});
```

## References

- [GeekForGeeks: Intro to Arrays](https://www.geeksforgeeks.org/introduction-to-arrays/)
- [Quora: Pro & Cons of Arrays](https://www.quora.com/What-are-the-pros-and-cons-of-arrays-in-C-programming-language#:~:text=The%20pros%20are%3A%20you%20need,pass%20the%20right%20size%2Flength.)


# Arrays

* stores data in sequential memory
* uses indexing to get data (index from 0 - size n - 1)

## Cons
* only contain data of same type
* fixed capacity

## Defining a Array
```cpp
int arr[SIZE] = {/* elements go here*/};

/* --OR-- */

int arr[SIZE];
arr[0 ... SIZE] = /* element */;
```
