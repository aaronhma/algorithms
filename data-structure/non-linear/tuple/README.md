# Tuple [C++ code](./tuple.cpp)

## Background

A tuple is a data structure that can hold a number of different data types into a single collection of items. When you put elements into the tuple, order matters, as you get elements from the tuple by index. The core operations in a tuple is shown:

-   `get()` - Accessing the tuple values and modiying them
-   `make_tuple()` - Assigning a tuple with values in the order with the values declaring while initializing the tuple

## Content

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

### C++ Usage

See [stl.cpp](./stl.cpp) for the C++ Usage guide of tuples.

## Tuple Operations (Source: [cppreference.com](https://en.cppreference.com/w/cpp/utility/tuple))

<table class="t-dsc-begin">

<tbody><tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/make tuple"> <span class="t-lines"><span>make_tuple</span></span></a></div></div>
</td>
<td>   creates a <code>tuple</code> object of the type defined by the argument types <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/tie"> <span class="t-lines"><span>tie</span></span></a></div></div>
</td>
<td>   creates a <code>tuple</code> of lvalue references or unpacks a tuple into individual objects <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/forward as tuple"> <span class="t-lines"><span>forward_as_tuple</span></span></a></div></div>
</td>
<td>   creates a <code>tuple</code> of <a href="#" title="cpp/language/reference">forwarding references</a> <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/tuple cat"> <span class="t-lines"><span>tuple_cat</span></span></a></div></div>
</td>
<td>   creates a <code>tuple</code> by concatenating any number of tuples <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/get"> <span class="t-lines"><span>std::get<span class="t-dsc-small">(std::tuple)</span></span></span></a></div></div>
</td>
<td>   tuple accesses specified element <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/operator cmp"> <span class="t-lines"><span>operator==</span><span>operator!=</span><span>operator&lt;</span><span>operator&lt;=</span><span>operator&gt;</span><span>operator&gt;=</span><span>operator&lt;=&gt;</span></span></a></div><div><span class="t-lines"><span></span><span><span class="t-mark-rev t-until-cxx20">(removed in C++20)</span></span><span></div></div>
</td>
<td>   lexicographically compares the values in the tuple  <br> <span class="t-mark">(function template)</span>
</td></tr>

<tr class="t-dsc">
<td>  <div class="t-dsc-member-div"><div><a href="#" title="cpp/utility/tuple/swap2"> <span class="t-lines"><span>std::swap<span class="t-dsc-small">(std::tuple)</span></span></span></a></div><div><span class="t-lines"><span><span class="t-mark-rev t-since-cxx11">(C++11)</span></span></span></div></div>
</td>
<td>   specializes the <span class="t-lc"><a href="/w/cpp/algorithm/swap" title="cpp/algorithm/swap">std::swap</a></span> algorithm  <br> <span class="t-mark">(function template)</span>
</td></tr>
</tbody></table>

## References

-   [Geeks For Geeks: Tuples in C++](https://www.geeksforgeeks.org/tuples-in-c/)
-   [C++ Reference: Tuple](https://en.cppreference.com/w/cpp/utility/tuple)
