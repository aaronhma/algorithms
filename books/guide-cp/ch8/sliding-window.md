# Sliding Window Technique

## About

The sliding window techique refers to a subarray of an array $arr$. At each subarray, we want to calculate some information about the elements inside the window.

All sliding window problems can be broken down into two types:

- **Fixed window length $k$**: The length of the window is fixed at the length of $k$ and it asks you to find something in the window (eg. median/max sum/etc.)
- **Two pointers + some criteria**: The window size is not fixed and has a specified criteria (eg. Find the number of subarrays whose sum is equal to $k$)
