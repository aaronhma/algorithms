# Hash Table [C++ code](./hash-map.cpp)

## Background

A hash table (aka dictionary, unordered map, map, etc.) is a data structure that allows you to quickly look up values given a key (see picture below).

![Image](https://www.interviewcake.com/images/svgs/hash_table__preview.svg?bust=206)

## Pros & Cons of Hash Table

-   Pros:

    -   Fast lookups at O(1) average
    -   As long as a data type can be hashed, it can be used as a key

-   Cons:
    -   Slow worst case - O(n) time
    -   No order
    -   No caching

## Complexity Analysis

<table class="table">
<thead>
<tr>
<th scope="col"></th>
<th scope="col">Average</th>
<th scope="col">Worst Case</th>
</tr>
</thead>
<tbody>
<tr>
<th scope="row">space</th>
<td><span complexity="n" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mi>n</mi><mo>)</mo></mrow><annotation encoding="application/x-tex">O(n)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord mathdefault">n</span><span class="mclose">)</span></span></span></span></span></span></span></td>
<td><span complexity="n" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mi>n</mi><mo>)</mo></mrow><annotation encoding="application/x-tex">O(n)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord mathdefault">n</span><span class="mclose">)</span></span></span></span></span></span></span></td>
</tr>
<tr>
<th scope="row">insert</th>
<td><span complexity="1" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mn>1</mn><mo>)</mo></mrow><annotation encoding="application/x-tex">O(1)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord">1</span><span class="mclose">)</span></span></span></span></span></span></span></td>
<td><span complexity="n" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mi>n</mi><mo>)</mo></mrow><annotation encoding="application/x-tex">O(n)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord mathdefault">n</span><span class="mclose">)</span></span></span></span></span></span></span></td>
</tr>
<tr>
<th scope="row">lookup</th>
<td><span complexity="1" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mn>1</mn><mo>)</mo></mrow><annotation encoding="application/x-tex">O(1)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord">1</span><span class="mclose">)</span></span></span></span></span></span></span></td>
<td><span complexity="n" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mi>n</mi><mo>)</mo></mrow><annotation encoding="application/x-tex">O(n)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord mathdefault">n</span><span class="mclose">)</span></span></span></span></span></span></span></td>
</tr>
<tr>
<th scope="row">delete</th>
<td><span complexity="1" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mn>1</mn><mo>)</mo></mrow><annotation encoding="application/x-tex">O(1)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord">1</span><span class="mclose">)</span></span></span></span></span></span></span></td>
<td><span complexity="n" class="ng-isolate-scope"><span class="complexity"><span class="ic-math ng-isolate-scope" ng-class="{'block': isBlock()}" ng-transclude="" math=""><span class="katex"><span class="katex-mathml"><math><semantics><mrow><mi>O</mi><mo>(</mo><mi>n</mi><mo>)</mo></mrow><annotation encoding="application/x-tex">O(n)</annotation></semantics></math></span><span class="katex-html" aria-hidden="true"><span class="base"><span class="strut" style="height: 1em; vertical-align: -0.25em;"></span><span class="mord mathdefault" style="margin-right: 0.02778em;">O</span><span class="mopen">(</span><span class="mord mathdefault">n</span><span class="mclose">)</span></span></span></span></span></span></span></td>
</tr>
</tbody>
</table>

([Source](https://www.interviewcake.com/concept/cpp/hash-map?))

## C++ Usage

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

std::unordered_map<std::string, int> people_with_age;

people_with_age["aaron"] = 11;
people_with_age["a person"] = 32;

std::cout << people_with_age["aaron"] << "\n";          // 11
std::cout << people_with_age["not in map"] << "\n";     // 0
std::cout << people_with_age.max_load_factor() << "\n"; // 1 - the smaller the better
```

## References

-   [Interview Cake: Hash Map](https://www.interviewcake.com/concept/cpp/hash-map?)
