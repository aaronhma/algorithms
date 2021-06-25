# Tower of Hanoi


The Tower of Hanoi, is a mathematical problem which consists of three rods and multiple disks. Initially, all the disks are placed on one rod, one over the other in ascending order of size similar to a cone-shaped tower.

The objective of this problem is to move the stack of disks from the initial rod to another rod, following these rules:

* A disk cannot be placed on top of a smaller disk
* No disk can be placed on top of the smaller disk.

The goal is to move all the disks from the leftmost rod to the rightmost rod. To move $n$ disks from one rod to another, $2^n - 1$ steps are required (This can be proven mathematically). So, to move $3$ disks from starting the rod to the ending rod, a total of $2^3 - 1 = 8 - 1 = 7$ steps are required.

```cpp
#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, string from_tower, string to_tower, string aux_tower)
{
    if (n == 1)
    {
    cout << "Move disk 1 from rod " << from_tower <<  " to rod " << to_tower<<endl;
    return;
    }
    // Move n - 1 disks to the auxiliary (B) rod
    TowerOfHanoi(n - 1, from_tower, aux_tower, to_tower);

    // Move the bottom disk to the end (C) rod
    cout << "Move disk " << n << " from rod " << from_tower << " to rod " << to_tower << endl;

    // Move the n - 1 disks from the auxiliary (B) rod to the end (C) rod
    TowerOfHanoi(n - 1, aux_tower, to_tower, from_tower);
}


int main()
{
    int n = 3; // Number of disks

    TowerOfHanoi(n, "Start", "End", "Mid");  //names of the towers

    return 0;
}
```
