# Tuples

<details>

<summary>Why Tuples?</summary>

A tuple is an object capable to hold a collection of elements. Each element can be of different data types.

</details>

<details>

<summary>Accessing/Updating Elements in a Tuple</summary>

## Accessing Elements in a Tuple

-   Method #1 (**C++ 11+**):

```cpp
// create tuple with initial values {1, "hello", 3}
tuple<int, string, int> tp {1, "hello", 3};

get<0>(tp) = 2; // update data at index #0

cout << get<0>(tp) << "\n"; // print what's in index #0 in the tuple
cout << get<1>(tp) << "\n"; // print what's in index #1 in the tuple
cout << get<2>(tp) << "\n"; // print what's in index #2 in the tuple
```

-   Method #2 (**C++ 14+**):

```cpp
// WARNING: get<DATA_TYPE_HERE>(tuple_name) works only if DATA_TYPE_HERE data type appears ONLY ONCE in the tuple.
// Otherwise, a compile error is thrown.
cout << get<string>(tp) << "\n"; // print the value with data type "string" in the tuple
// update the value with data type "string" in the tuple to "C++ is awesome"
// WARNING: Below line works only if the string data type appears ONLY ONCE in the tuple.
// Otherwise, a compile error is thrown.
get<string>(tp) = "C++ is awesome";
```

</details>

<details>

<summary>Checking if Two Tuples are the Same</summary>

If we have two tuples $tuple1$ and $tuple2$, we can check if they are the same using the $=$ operator.

```cpp
if (tuple1 == tuple2) cout << "The two tuples are the same!\n";
else cout << "The two tuples are not the same!\n";
```

</details>

<details>

<summary>Resources</summary>

-   [**cplusplus.com Tuple Example**](http://www.cplusplus.com/reference/tuple/tuple/)
-   [**cppreference.com Tuple Example**](https://en.cppreference.com/w/cpp/utility/tuple/get)

</details>
