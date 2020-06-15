#include <iostream>
#include <vector>
#include "../include/Cube.cpp"

using namespace std;

#define PB push_back

int main()
{
  // Vectors
  vector<Cube> arr;

  cout << "Initial capacity of array: " << arr.capacity() << "\n";

  arr.PB(Cube(12));

  cout << "Capacity of array: " << arr.capacity() << "\n";
  arr.PB(Cube(13));

  cout << "Capacity of array: " << arr.capacity() << "\n";
  arr.PB(Cube(14));

  cout << "Capacity of array: " << arr.capacity() << "\n";

  // Distance between 2nd index in array to 0 index in array
  // answer: 8 bytes (2 data points * 4 bytes of integer size = 8 bytes)
  cout << (long)&(arr[2]) - (long)&(arr[0]) << "\n";

  Cube target = Cube(13);

  // Finding a specific element in array:
  for (long unsigned int i = 0; i < arr.size(); i++)
  {
    if (target == arr[i])
    {
      cout << "Target " << target.getLength() << " found at index #" << i << "\n";
    }
  }

  return 0;
}
