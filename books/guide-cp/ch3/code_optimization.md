# Code Optimization

## Finding if $x$ is in array

### Naive Approach

```cpp
bool ok = false;
int x = 5; // Define target value here

for (int i : arr) {
  if (i == x) {
    ok = true;
    break; // Break once we've found x - more efficient
  }
}
```

### Sentinel Value

A neat trick we can apply is using a $sentinel \ value$.

```cpp
arr[n] = x;
int i;

for (int i = 0; arr[i] != x; i++);

if (i < n) {
  cout << "We've found x!" << "\n";
} else {
  cout << "Couldn't find x" << "\n";
}
```

## C++ Compiler Optimization

If we run the following code:

```cpp
int collatz(int n) {
  if (n % 2 == 0) return n / 2;
  else return 3 * n + 1;
}
```

with the `-S` flag:

`g++ -S test.cpp -o test.out`

We have a `test.out` file with the following Assembly (machine) code:

```assembly
  test dil, 1
  jne .L2
  mov eax, edi
  shr eax, 31
  add eax, edi
  sar eax
  ret
.L2:
  lea eax, [rdi+1+rdi*2]
  ret
```

Also, there is a [useful online tool (Compiler Explorer)](https://godbolt.org/) that can be used to examine outputs of various compilers. Clearly, we can see that even this small assembly output has many optimizations (performed by the C++ compiler). Take this C++ example code:

```cpp
void test(int n) {
  int s = 0;

  for (int i = 1; i <= n; i++) {
    s += i;
  }
}
```

The corresponding assembly output is just `ret` (return). Since $s$ is not used, the loop can be removed and the code runs in $\theta(1)$ time.

## Hardware-Specific Optimization

By default, `g++`'s compiler optimizations won't perform hardware-specific optimization. By using the `g++` flag `-march=native`, we turn on hardware-specific optimizations.

For example `__builtin_popcount(x)` can be replaced with `popcnt(x)` that efficiently performs the bit count operation (up to 3x faster!).

**NOTE: Only some processors have this optimization.**
