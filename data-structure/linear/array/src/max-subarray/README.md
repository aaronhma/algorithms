# Maximum Sum Subarray

## The Problem

Given an array $arr$, find the subarray that gives the maximum sum.

## Concept: Kadane's Algorithm/Maximum Sum Subarray

https://aaronhma.medium.com/algorithm-spotlight-kadanes-algorithm-8ea7ceae9a1a

## Approach 1: Kadane’s Algorithm (using Greedy method)

```cpp
int local = nums[0], global = nums[0];
        
for (int i = 1; i < nums.size(); i++) {
    local = max(local + nums[i], nums[i]);
    global = max(global, local);
}
        
cout << global << "\n";
```
