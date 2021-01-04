# Binary Search

Its input is a sorted list of elements. If an element you’re looking for is in that list, it returns the position where it’s located. Otherwise, returns **null**.

In its simplest form, Binary Search operates on a contiguous sequence with a specified left and right index. This is called the Search Space. Binary Search maintains the left, right, and middle indicies of the search space and compares the search target or applies the search condition to the middle value of the collection; if the condition is unsatisfied or values unequal, the half in which the target cannot lie is eliminated and the search continues on the remaining half until it is successful. If the search ends with an empty half, the condition cannot be fulfilled and target is not found. (*Sometimes you will have to apply a specific condition or rule to determine which side (left or right) to search next.*)

Each step of our while loop cuts the range in half, until our range has just one element left.

```
n * 1/2 * 1/2 * 1/2 ... = 1
=>
n * (1/2)**x = 1
=>
n * (1**x / 2**x) = 1
=>
n * (1 / 2**x) = 1
=>
n / 2**x = 1
=>
n = 2**x   # get the x out of that exponent
=>
log(2, n) = log(2, 2**x)   # Take the log2 of both sides
=>
log(2, n) = x    # So there it is. The total time cost of binary search is O(log(N)).
```

**Time complexity**: `O(log(n))`
**Space complexity**: O(1) since it's a constant space solution.

**Binary search only works when your list is in sorted order.**

**Strategy**: Eliminate half the numbers every time with binary search.

**Strategy**: When binary search is used to perform operations on a sorted set, the number of iterations can always be reduced on the basis of the value that is being searched.

In general, for any list of *n*, binary search will take `log2(n)` steps to run in the worst case, whereas simple search will take *n* steps. Also called Binary logarithm, `log2(n)`, is the power to which the number 2 must be raised to obtain the value *n*. That is, for any real number *x*. `x = log2(n)  <=>  pow(2, x) = n`

**Logarithms vs Exponentials**: Logs are the flip of exponentials.

`log10(100)`: How many 10s do we multiply together to get 100?
 The answer is 2. (10 × 10). So `log10(100) # 2`.

For binary search, you have to check log *n* elements in the worst case.

The downside of binary search though is that it only works if the data is sorted. If we only need to perform a single search, then it's faster to just do a linear search, as it takes longer to sort than to linear search. If we're going to be performing a lot of searches, it is often worth sorting the data first so that we can use binary search for the repeated searches.

## Identify Binary Search?

Binary Search is an algorithm that divides the search space in 2 after every comparison. Binary Search should be considered every time you need to search for an index or element in a collection. If the collection is unordered, we can always sort it first before applying Binary Search.

## 3 Parts of a Successful Binary Search

Binary Search is generally composed of 3 main sections:

1. **Pre-processing**: Sort if collection is unsorted.
2. **Binary Search**: Using a loop or recursion to divide search space in half after each comparison.
3. **Post-processing**: Determine viable candidates in the remaining space.

- If the target value is equal to the middle element - we're done.
- If the target value is smaller - continue to search on the left.
- If the target value is larger - continue to search on the right.

## Terminology

- **Target**: the value that you are searching for

- **Index**: the current location that you are searching

- **Left, Right**: the indicies from which we use to maintain our search Space

- **Mid**: the index that we use to apply a condition to determine if we should search left or right

## Big O Notation (Time and Space Complexity) (Runtime)

1. Runtime: *O(log n)*

*O(log n)* is faster than *O(n)*, but it gets a lot faster as the list of items you’re searching grows.

**in Big O notation *log* always means `log2`.**

Because Binary Search operates by applying a condition to the value in the middle of our search space and thus cutting the search space in half, in the worse case, we will have to make *O(log n)* comparisons, where *n* is the number of elements in our collection.

**Why log n?**

- Binary search is performed by dividing the existing array in half.
- So every time you a call the subroutine ( or complete one iteration ) the size reduced to half of the existing part.
- First *N* become *N/2*, then it become *N/4* and go on till it find the element or size become *1*.
- The maximum numbers of iterations is *log N* (base 2).

2. Space: *O(1)* -- Constant Spac

Although, Binary Search does require keeping track of 3 indicies, the iterative solution does not typically require any other additional space and can be applied directly on the collection itself, therefore warrants *O(1)* or constant space.

## Templates

These 3 templates differ by their:

- left, mid, right index assignments
- loop or recursive termination condition
- necessity of post-processing
