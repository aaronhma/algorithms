#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Create an empty linked list
  // Cool trick: We don't need to "=" sign to create a linked list
  list<int> v {1, 2};

  // Add 3, 4, 5 to the end of the linked list
  for (int i = 3; i <= 5; i++)
    v.push_back(i);

  // Print what's in the linked list
  for (int i : v)
    cout << i << " ";

  cout << "\n";

  // Add 6, 7, 8, 9, 10 to the front of the linked list
  for (int i = 6; i <= 10; i++)
    v.push_front(i);

  // Iterating through the linked list using iterators
  for (auto it = v.begin(); it != v.end(); it++)
    cout << *it << " ";

  cout << "\n";

  cout << "Size: " << v.size() << "\n"; // Size of the array
  cout << "Front: " << v.front() << "\n"; // First element in the linked list
  cout << "Back: " << v.back() << "\n"; // Last element in the linked list

  // Delete first 2 elements from the back of the linked list in O(1)
  for (int i = 1; i <= 2; i++)
    v.pop_back();

  for (int i : v)
    cout << i << " ";

  cout << "\n";

  // Delete first 2 elements from the front of the linked list in O(1)
  for (int i = 1; i <= 2; i++)
    v.pop_front();

  for (int i : v)
    cout << i << " ";

  cout << "\n";

  // v.empty() - true if linked list is empty
  //           - false if linked list is not empty
  if (v.empty()) cout << "Linked list is empty!\n";
  else cout << "Linked list in not empty!\n";

  cout << "Size: " << v.size() << "\n"; // Size of the array
  cout << "Front: " << v.front() << "\n"; // First element in the linked list
  cout << "Back: " << v.back() << "\n"; // Last element in the linked list

  return 0;
}
