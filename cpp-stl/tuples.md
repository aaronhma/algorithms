# Tuples

## About

A tuple is an object capable to hold a collection of elements. Each element can be of different data types.

## Accessing Elements in a Tuple

- Method #1 (**C++ 11+**):

```cpp
// create tuple with initial values {1, "hello", 3}
tuple<int, string, int> tp {1, "hello", 3};

get<0>(tp) = 2; // update data at index #0

cout << get<0>(tp) << "\n"; // print what's in index #0 in the tuple
cout << get<1>(tp) << "\n"; // print what's in index #1 in the tuple
cout << get<2>(tp) << "\n"; // print what's in index #2 in the tuple
```

- Method #2 (**C++ 14+**):

```cpp
// WARNING: get<DATA_TYPE_HERE>(tuple_name) works only if DATA_TYPE_HERE data type appears ONLY ONCE in the tuple.
// Otherwise, a compile error is thrown.
cout << get<string>(tp) << "\n"; // print the value with data type "string" in the tuple
// update the value with data type "string" in the tuple to "C++ is awesome"
// WARNING: Below line works only if the string data type appears ONLY ONCE in the tuple.
// Otherwise, a compile error is thrown.
get<string>(tp) = "C++ is awesome";
```

## Resources

- [**cplusplus.com Tuple Example**](http://www.cplusplus.com/reference/tuple/tuple/)
- [**cppreference.com Tuple Example**](https://en.cppreference.com/w/cpp/utility/tuple/get)
