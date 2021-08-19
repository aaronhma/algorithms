# Bitset

## About

C++'s `bitset` is an efficient way to store boolean values and can be created in the form `std::bitset<number_of_bits> name_of_bitset;`.

**WARNING: $n$ MUST BE KNOWN AT COMPILE TIME IN ORDER TO CREATE A BITSET!!!**

**NOTE: We access bits from the Least Significant Digit (LSD) to Most Significant Digit (MSD), eg a bitset with $3$ values is accessed with $2, 1, 0$.**

<details>
  <summary>Why Bitsets?</summary>

If we were to store $n$ boolean values, we could do it with a vector or an array:

```cpp
bool arr[n];
vector<bool> arr(n);
```

Unfortunately, storing $n$ booleans in a vector/array takes up $n$ bytes, as for each $arr[i]$ for an index $i$, it takes up $1$ byte per element in the memory. Let's take a look at bitsets, which consume $1$ bit per element in the memory:

```cpp
bitset<16> bits;
```

This is **way more space efficient**. A bitset uses $\lceil \frac{n}{8} \rceil$ bytes to store $n$ boolean values.

</details>

<details>
  <summary>Creating Bitsets</summary>

A major drawback of C++'s `bitset` is that $n$ **MUST BE KNOWN DURING COMPILE TIME**. Running the following piece of code fails, while the other works:

```cpp
// This fails:
int n;
cin >> n;

bitset<n> my_bitset;

// This works:
#define n 16
bitset<n> my_bitset;

// This also works:
bitset<16> my_bitset;
```

</details>

---

## Bit Operations

### [Moved Here](../../../math/misc/bit-manipulation.md)

---

<details>
  <summary>Reseting a Bit in a Bitset/Reseting a Bitset</summary>

We can reset a bit at the bitset at position $k$ (or the entire bitset) using the following format:

```cpp
// change what is at index 1 from the LSD (least significant digit) to 0
cout << bit.reset(1) << "\n";

// change the entire bitset to 0
cout << bit.reset() << "\n";
```

</details>

<details>
  <summary>Counting the # of Bits Set to <b>1</b></summary>

```cpp
std::bitset<10> s;
s[1] = 1;
s[3] = 1;
s[4] = 1;
s[7] = 1;
std::cout << s[4] << "\n"; // 1
std::cout << s[5] << "\n"; // 0

// The count function returns the # of 1 bits in the bitset
std::cout << s.count() << "\n"; // 4
```

</details>

<details>
  <summary>Applying Bit Operations on a Bitset</summary>

Bit operations can be directly applied on bitsets:

```cpp
bitset<10> a, b;
// ...
bitset<10> c = a&b;
bitset<10> d = a|b;
bitset<10> e = a^b;
```

</details>

<details>
  <summary>Converting a Bitset to a <code>str</code>/<code>ulong</code>/<code>ullong</code></summary>

Assume that we have a bitset `std::bitset<8> b(42)`:

-   <details>
      <summary>Converting to a string</summary>

    ```cpp
    std::cout << b.to_string() << "\n";  // 00101010
    std::cout << b.to_string('*') << "\n"; // **1*1*1*
    std::cout << b.to_string('O', 'X') << "\n"; // OOXOXOXO
    ```

    </details>

    <details>
      <summary>Converting to a unsigned long</summary>

    ```cpp
    cout << b.to_ulong() << "\n"; // 42
    ```

    </details>

    <details>
      <summary>Converting to a unsigned long long</summary>

    ```cpp
    cout << b.to_ullong() << "\n"; // 42
    ```

    </details>

</details>

<details>
  <summary>Flipping a Bit/Bitset</summary>

-   <details>
      <summary>Flipping a Bit</summary>

    Assume that we have a bitset:

    ```cpp
    bitset<2> b("01");
    ```

    We can change the bitset to $11$ using `bitset.flip(1)`:

    ```cpp
    b.flip(1); // Flip 0 -> 1 at index 1 (as we go from LSD -> MSD)
    ```

    </details>

  <details>
    <summary>Flipping a Bitset</summary>

Assume that we have a bitset:

```cpp
bitset<2> b("01");
```

We can change the bitset to $10$ using `bitset.flip()`:

```cpp
b.flip(); // Flip entire bitset
```

  </details>
</details>

<details>
<summary>Set a Bit at Position <code>k</code> to a New Value</summary>

We can change our bitset at position $k$ ($0 \leq k < n$) to $0$/$1$.

```cpp
bitset.set(2, 1); // Set bit at position 2 to 1
```

</details>

<details>
<summary>Get the size of the Bitset</summary>

We can get the size of our bitset through the `size()` method.

```cpp
#define N 16

bitset<N> B;
cout << B.size() << "\n"; // This is equal to N
```

</details>

<details>
<summary>Reset a Bit/Bitset</summary>

We can reset a bitset using the `reset` method.

```cpp
bitset.reset(); // reset entire bitset to 0
bitset.reset(1); // reset bit at position 1 to 0 - this is bitset.set(1, 0);
```

</details>

<details>
  <summary><code>bitset.count()</code></summary>

`bitset.count()`: # of bits set to $1$

</details>

<details>
  <summary><code>bitset.any()</code></summary>

`bitset.any()`: $true$ if at least $1$ bit set to $1$, otherwise $false$ (This operation is like $arr.empty()$)

</details>

<details>
  <summary><code>bitset.none()</code></summary>

`bitset.none()`: $true$ if all bits are set to $0$

</details>
