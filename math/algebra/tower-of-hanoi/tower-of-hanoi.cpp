// See https://www.educative.io/edpresso/what-is-the-tower-of-hanoi-problem for explanation
#include <bits/stdc++.h>

using namespace std;

void TowerOfHanoi(int n, string from_tower, string to_tower, string aux_tower)
{
    if (n == 1)
    {
    cout << "Move disk 1 from rod " << from_tower <<  " to rod " << to_tower<<"\n";
    return;
    }
    TowerOfHanoi(n - 1, from_tower, aux_tower, to_tower);
    cout << "Move disk " << n << " from rod " << from_tower << " to rod " << to_tower << "\n";
    TowerOfHanoi(n - 1, aux_tower, to_tower, from_tower);
}


int main()
{
    int n = 3; // Number of disks
    TowerOfHanoi(n, "Start", "End", "Mid");  //names of the towers
    return 0;
}
