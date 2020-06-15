#include <iostream>
#include "../include/Cube.cpp"

using namespace std;

int main()
{
  // Arrays
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  cout << "Element at index 3: " << arr[2] << "\n";

  cout << "Type of int: " << sizeof(int) << " bytes!"
       << "\n";

  // Distance between 2nd index in array to 0 index in array
  // answer: 8 bytes (2 data points * 4 bytes of integer size = 8 bytes)
  cout << (long)&(arr[2]) - (long)&(arr[0]) << "\n";

  Cube c[3] = {Cube(12), Cube(12), Cube(12)};
  cout << (long)&(c[2]) - (long)&(c[0]) << "\n";

  return 0;
}
