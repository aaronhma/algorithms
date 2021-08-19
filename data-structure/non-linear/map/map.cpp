#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // === Example 1 ===

  // Create a map called "map2" that has integers as the key and integers as the value
  map<int, int> map1;

  // For every key i from 1...5, i = i * 2;
  for (int i = 1; i <= 5; i++)
    map1[i] = i * 2;

  cout << "Map #1:\n";

  // Iterate through the map
  for (auto i : map1)
    cout << "{" << i.first << ", " << i.second << "} ";

  cout << "\n";

  // Update the key 4 to 2
  map1[4] = 2;

  cout << "map1[4] = " << map1[4] << "\n";

  // Update the key 2 to 0
  map1[2] = 0;

  // Iterate through the map using iterators
  for (auto it = map1.begin(); it != map1.end(); it++)
    cout << "{" << it->first << ", " << it->second << "} ";

  cout << "\n";

  cout << "Size: " << map1.size() << "\n"; // Print the size of the map

  // Clear the map - remove all elements
  map1.clear();

  cout << "Size: " << map1.size() << "\n"; // Print the size of the map

  // Since the map contains no key w/ value 3, we create that key with the value 0, and print 0 (map1[3] = 0).
  cout << "map[3] = " << map1[3] << "\n";

  // NOTE: Map #1 is not empty, as map1[3] in line #38 creates a new pair with key 3 and value 0.

  // map1.empty() - true if the map is empty
  //              - false if the map is not empty
  if (map1.empty()) cout << "Map #1 is empty!\n";
  else cout << "Map #1 is not empty!\n";

  for (auto i : map1) {
    // map1.count(x) - 1 if x appears in the map
    //               - 0 otherwise
    cout << "# of times " << i.first << " appears in map #1: " << map1.count(i.first) << " times\n";
  }

  // === Example 2 ===

  // Create a map called "map2" that has strings as the key and integers as the value
  map<string, int> map2;

  // For every string with characters a...z, the value is the ASCII code * 2.
  for (char i = 'a'; i <= 'z'; i++) {
    // Convert i to string without making it an integer
    string s;
    s.push_back(i);

    // Create a new pair with the key as s and the value as the ASCII code of i * 2.
    map2[s] = i * 2;
  }

  for (char i = 'a'; i <= 'z' + 3; i++) {
    // Convert i to string without making it an integer
    string z;
    z.push_back(i);

    // If i exists in the map, print out the value
    // map2.find(x) == map2.end() if x doesn't exist
    // map2.find(x) != map2.end() if x exists (it is a pointer to the element x)
    if (map2.find(z) != map2.end())
      cout << "map2[" << z << "] = " << (*map2.find(z)).second << "\n";

    // As i doesn't exist, we'll create a new pair {i, 0}
    else
      cout << "map2[" << z << "] = doesn't exist\n";
  }

  // Create a new pair with "ABC" as the key and 2 as the value
  map2.insert({"ABC", 2});

  for (char i = 'a'; i <= 'z'; i++) {
    // Convert i to string without making it an integer
    string z;
    z.push_back(i);

    if (map2.find(z) != map2.end()) {
      cout << "Erasing map2[" << i << "]!\n";

      // Since z exists in the map, let's delete it!
      map2.erase(map2.find(z));
    }

    // Create the element z.
    cout << "map2[" << z << "] = " << map2[z] << "\n";
  }

  // Create a new pair {"ABCD", -1}
  map2["ABCD"] = -1;

  cout << map2.size() << "\n"; // Print the size of the map

  // Delete the pair with key "ABCD" from the map
  map2.erase(map2.find("ABCD"));

  cout << map2.size() << "\n"; // Print the size of the map

  return 0;
}
