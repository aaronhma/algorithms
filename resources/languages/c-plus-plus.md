# C++

## C++ Learning

| ☆   | Name |  Video | Article | Description    |
| --- | -------------- | ------- | ------- | ------- |
|     | [programmr](http://www.programmr.com/exercises?lang=cpp)        | ✘ | ✔ |  |
|     | [CPP Secrets](https://cppsecrets.com/home-page/index.php?articlecategory=1)        | ✘ | ✔ |  |

## Git Repos

| ☆   | Name | Description    | Star |
| --- | -------------- | ------- |------- |
|     | [Awesome-CPP](https://github.com/fffaraz/awesome-cpp)         | A curated list of awesome C++ frameworks, libraries, resources| 30K |
|     | [TheAlgorithms/C-Plus-Plus](https://github.com/TheAlgorithms/C-Plus-Plus)         | Collection of various algorithms in mathematics, machine learning, computer science and physics implemented in C++ for educational purposes.| 10K |
|     | [Bhupesh-V/30-seconds-of-cpp](https://github.com/Bhupesh-V/30-seconds-of-cpp)         |30 Seconds of C++ (STL in C++). Read More about 30C++ here| 771 |



# C++ Tips and Tricks (Bits to learn)

## Number

- Checking if the number is **even** or **odd** without using the `%` operator. Using `&` operator is sometimes efficient with *large numbers*.

```c++
if (num & 1) cout << "Odd"; // if num = 5, binary format 101 & 1 is 001, so true
else cout << "Even";  // if num = 4, binary format 100 & 1 is 000, so false
```

- Fast **Multiplication** (shift all bits to the left) or **Division** (shift all bits to the right) by `2`.

```c++
n = n << 1  // multiply n with 2
n = n >> 1  // divide n by 2
```

- Swapping of 2 numbers using **XOR**. Super fast without additional variable.

```c++
// A quick way to swap variable a and b. ex: int a = 4, b = 8;
a ^= b;  // a: 12 (a+b)    b: 8  (b)
b ^= a;  // a: 12 (a+b)    b: 4  (a+b-b)
a ^= b;  // a: 8  (a+b-a)  b: 4  (a)
```

- Calculating number of digits in a number, instead of looping you can efficiently use `log`

```c++
digit = floor(log10(num)) + 1; // ex: int num = 12345678;   digit should be 8
```

- Calculating the most significant digit (the leftmost non-zero digit) of any number log

Leading zeros are never considered as significant digits, ex: *0.00234* have *3* significant digits (2, 3, and 4). The most significant one is *2* (first non-zero from left), because it has the greatest effect on the number

```c++
int num = 3.14159
double K = log10(num);
K = K - floor(K);
int X = pow(10, K); // X will be the most significant digit. X: 3
```

- Check if a number is a power of *2* in `O(n)`

```c++
bool isPowerOfTwo (int x) {
  // First x in the below expression is for the case when x is 0
  return x && !(x & (x - 1)); // return boolean.
}
```


## String

- Avoiding use of `strlen()`. Loop a string when the character array ends.

```c++
  // defines an array of characters with a size of 256 chars
  char s[256] = "abcdef";
  cout << "string len: " << strlen(s) << "\n"; // string len: 6
  for (auto i = 0; s[i]; i++)
    cout << s[i] << "\n";  // loop breaks when `s` ends: a, b, c, d, e, f
```

## Array

- Use of `emplace_back()` instead of `push_back()`. STL `emplace_back` is much faster and instead of allocating memory somewhere else and then appending it directly allocates memory in the container.

- Maximum size of the array in **C++**: declared inside the main function is of the order of **10^6** but if you declare array globally then you can declare its size upto **10^7**.

## Condition

- `and` is equal to `&&` in condition. `if (a < 20 and a > 12) {}`



## C++ Built-in

- Built-in **GCD** function in **C++** (no need to explicitly code it). Syntax `__gcd(x, y);`.

- Built-in algorithms

`any_of` operates on whole range of array elements and can save time to run a loop to check each elements one by one. It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false.

```c++
int arr[6] =  {1, 2, 3, 4, 5, -6}; // n is the size of array.
// ispositive function: [](int x) { return x > 0; }
// are all of the elements positive?
all_of(arr, arr + n, ispositive());

// is there at least one positive element?
any_of(arr, arr + n, ispositive());

// are none of the elements positive?
none_of(arr, arr + n, ispositive());
```

- Copy Algorithm: used to copy elements from one container to another.

```c++
int source[5] = {0, 12, 34, 50, 80};
int target[5];
// copy 5 elements from source to target
copy_n(source, 5, target); // target: {0, 12, 34, 50, 80}
```

- `iota()` Algorithm: creates a range of sequentially increasing values, as if by assigning an initial value to `*first`, then incrementing that value using prefix `++`.

```c++
int a[5] = {0};
iota(a, a + 5, 10); // a: {10, 11, 12, 13, 14}

char c[3] = {0};
iota(c, c+3, 'a'); // c: {'a', 'b', 'c'}
```

## Tip & Tricks: check if the input number is Power of Two

```c++
bool isPowerOfTwo(int x)
{
  // First x in the below expression is for the case when x is 0
  return x && !(x & (x - 1)); // return boolean.
}
```
