# Bitset

## About

C++'s `bitset` is an efficient way to store boolean values and can be created in the form `std::bitset<number_of_bits> name_of_bitset;`.

**WARNING: $n$ MUST BE KNOWN AT COMPILE TIME IN ORDER TO CREATE A BITSET!!!**

## Why Bitsets?

If we were to store $n$ boolean values, we could do it with a vector or an array:

```cpp
bool arr[n];
vector<bool> arr(n);
```

Unfortunately, storing $n$ booleans in a vector/array takes up $n$ bytes, as for each $arr[i]$ for an index $i$, it takes up $1$ byte per element in the memory. Let's take a look at bitsets, which consume $1$ bit per element in the memory:

```cpp
bitset<16> bits;
```

This is **way more space efficient**. A bitset uses $\lbrack \frac{n}{8} \rbrack$ bytes to store $n$ boolean values.

---

## WARNING: Common `bitset` Mistakes!

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

---

## Bit Operations

### [Moved Here](../math/bit-manipulation.md#from=bitset)

---

## Reseting a Bit in a Bitset

We can reset a bit at the bitset at position $k$ (or the entire bitset) using the following format:

```cpp
// change what is at index 1 from the LSD to 0
cout << bit.reset(1) << "\n";

// change the entire bitset to 0
cout << bit.reset() << "\n";
```
