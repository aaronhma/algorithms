# Suffix Sum Array

## About

A suffix sum array is similar to a [prefix sum array](prefix-sum-array.cpp), except instead of:

$$prefixSum[i] = arr[0] + arr[1] + ... + arr[i - 1] + arr[i]$$

we have the following:

$$suffixSum[i] = arr[n - 1] + arr[n - 2] + .... + arr[i + 1] + arr[i]$$
