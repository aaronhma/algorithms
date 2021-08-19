#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Create set #1 with initial values as {1, 2, 3}
  set<int> set1 {1, 2, 3};

  // Create set #2 with initial values as {"Blue", "Green", "Red", "Yellow"}
  set<string> set2 {"Blue", "Green", "Red", "Yellow"};

  // Add {4, 5} to set #1
  for (int i = 4; i <= 5; i++)
    set1.insert(i);

  // print the set using range-based loop
  for (int i : set1)
    cout << i << " ";

  cout << "\n";

  cout << "Size of set #1: " << set1.size() << "\n"; // Print the size of set #1
  cout << "Size of set #2: " << set2.size() << "\n"; // Print the size of set #2

  set1.clear(); // Clear all elements in set #1

  cout << boolalpha; // so we get true/false instead of 1/0
  cout << "Is set #1 empty? " << set1.empty() << "\n";
  cout << "Is set #2 empty? " << set2.empty() << "\n";

  cout << "Size of set #1: " << set1.size() << "\n"; // Print the size of set #1
  cout << "Size of set #2: " << set2.size() << "\n"; // Print the size of set #2

  // set2.count(x) - 1 if x exists
  //               - 0 if x doesn't exist
  cout << "set2.count(\"Green\") = " << set2.count("Green") << "\n";
  cout << "set2.count(\"Purple\") = " << set2.count("Purple") << "\n";

  // If we found "Green" in set #2, delete it.
  // set2.find(x) - returns iterator to x if x exists
  //              - returns set2.end() if x doesn't exist
  if (set2.find("Green") != set2.end()) {
    // Found "Green" in set #2.
    cout << "Found \"Green\" in set #2, erasing it.\n";

    // Delete "Green" from set #2
    set2.erase(set2.find("Green"));
  } else {
    // Couldn't find "Green" in set #2.
    cout << "Couldn't find \"Green\" in set #2!\n";
  }

  cout << "Size of set #2: " << set2.size() << "\n"; // Print the size of set #2

  // print the set using iterators
  for (auto it = set2.begin(); it != set2.end(); it++)
    cout << *it << " ";

  cout << "\n";

  return 0;
}
