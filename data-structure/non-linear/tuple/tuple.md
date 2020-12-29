# Tuple

## Background

A tuple is a data structure that can hold a number of different data types into a single collection of items. When you put elements into the tuple, order matters, as you get elements from the tuple by index. The core operations in a tuple is shown:

- `get()` - Accessing the tuple values and modiying them
- `make_tuple()` - Assigning a tuple with values in the order with the values declaring while initializing the tuple

## C++ Usage

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

- [Geeks For Geeks: Tuples in C++](https://www.geeksforgeeks.org/tuples-in-c/)
- [C++ Reference: Tuple](https://en.cppreference.com/w/cpp/utility/tuple)
