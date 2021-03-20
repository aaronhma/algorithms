#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Create a vector with default elements {1, 2, 3}
  // Cool trick: We don't need to "=" sign to create a vector
  vector<int> arr {1, 2, 3};

  // Add 4, 5, 6, 7, 8 to the end of the array
  for (int i = 4; i <= 8; i++) {
    arr.push_back(i);
  }

  // Another way to iterate through an array using .at():
  for (int i = 0; i < arr.size(); i++)
    cout << arr.at(i) << " ";

  cout << "\n";

  cout << "Size: " << arr.size() << "\n"; // size of array
  cout << "Capacity: " << arr.capacity() << "\n"; // size of storage spaced allocated for the vector, in terms of # of elements
  cout << "Max size: " << arr.max_size() << "\n"; // max # of elements that the vector can hold

  arr.resize(10); // resizes the array to 10 elements

  for (int i = 0; i < arr.size(); i++)
    cout << arr[i] << " ";

  cout << "\n";

  cout << "Size: " << arr.size() << "\n"; // size of array
  cout << "Capacity: " << arr.capacity() << "\n"; // size of storage spaced allocated for the vector, in terms of # of elements
  cout << "Max size: " << arr.max_size() << "\n"; // max # of elements that the vector can hold

  arr.resize(3); // resizes the array to 3 elements

  // iterating through the array using iterators
  for (auto it = arr.begin(); it != arr.end(); it++)
    cout << *it << " ";

  cout << "\n";

  arr.clear(); // Clears the array

  // arr.empty() - true if array is empty
  //             - false if array is not empty
  if (arr.empty()) cout << "Array is empty!\n";
  else cout << "Array is not empty!\n";

  arr.resize(12, 3); // resizes the array to 12 elements with value 3

  for (int i : arr)
    cout << i << " ";

  cout << "\n";

  // deletes 3 elements from the end of the array in O(1)
  for (int i = 1; i <= 3; i++)
    arr.pop_back();

  for (int i : arr)
    cout << i << " ";

  cout << "\n";

  arr.insert(arr.begin() + 6, 4); // add an element 4 to index 6 - O(n)

  for (auto it = arr.begin(); it != arr.end(); it++)
    cout << *it << " ";

  cout << "\n";

  // reverse iterate through the array
  for (auto it = arr.end() - 1; it != arr.begin() - 1; it--)
    cout << *it << " ";

  cout << "\n";

  for (auto it = arr.rbegin(); it != arr.rend(); it++)
    cout << *it << " ";

  cout << "\n";

  return 0;
}
