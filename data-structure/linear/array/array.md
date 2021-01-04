# Arrays

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


- Pros

Array knows the address for every item in it.

Arrays are great if you want to read random elements, because you can look up any element in your array instantly. The elements in an array are numbered starts with `0`.

Compared with a linked list, the elements aren’t next to each other, so you can’t instantly calculate the position of the fifth element in memory—you have to go to the first element to get the address to the second element, then go to the second element to get the address of the third element, and so on until you get to the fifth element.

# Array

> Arrays are a simple data structure for storing lots of similar items. An Array is a collection of items.

Array items are stored in neighboring (contiguous) memory locations. Because they're stored together, checking through the entire collection of items is straightforward.

Array's are 0-indexed. The capacity/length is a number of items, not a highest index. The highest index is **.length - 1**.

three key operations for Arrays:

- Serach items
- Insert items
- Remove items

**two-pointer** technique. It is one of the main techniques used for in-place Array algorithms.

## When to Use In-Place Array Operations

If we'll need the original array values later, then we shouldn't be overwriting them. In these cases, it's best to create a copy to work with, or to simply not use *in-place* techniques.

In-place operations are valuable when appropriate because they reduce the space complexity of an algorithm. Instead of requiring `O(N)` space, we can reduce it down to `O(1)`.


## Array VS Linked list analysis running time

When you want to store multiple elements, use an array or a list.

With an array, all your elements are stored right next to each other. Arrays allow fast reads. All elements in the array should be the same type (all ints, all doubles, and so on).
With a list, elements are strewn all over, and one element stores the address of the next one. Linked lists allow fast inserts and deletes.

|   | Arrays | Linked List |
|---|---|---|
| reading | O(1) | O(n) |
| Insertion | O(n)| O(1) |
| Deletion | O(n)| O(1) |


## Data access: random access and sequential access

- Sequential access

It means reading the elements one by one, starting at the first element. Linked lists can only do sequential access. If you want to read the 10th element of a linked list, you have to read the first 9 elements and follow the links to the 10th element.

- Random access

It means you can jump directly to the 10th element. Array is faster at read because it provides random access.



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

- stores data in sequential memory
- uses indexing to get data (index from 0 - size n - 1)

## Cons

- only contain data of same type
- fixed capacity

## Defining a Array

```cpp
int arr[SIZE] = {/* elements go here*/};

/* --OR-- */

int arr[SIZE];
arr[0 ... SIZE] = /* element */;
```
