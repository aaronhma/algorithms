#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  map<int, int> map1;

  for (int i = 1; i <= 5; i++)
    map1[i] = i * 2;

  cout << "Map #1:\n";

  for (auto i : map1)
    cout << "{" << i.first << ", " << i.second << "} ";

  cout << "\n";

  map1[4] = 2;

  cout << "map1[4] = " << map1[4] << "\n";

  map1[2] = 0;

  for (auto it = map1.begin(); it != map1.end(); it++)
    cout << "{" << it->first << ", " << it->second << "} ";

  cout << "\n";

  cout << "Size: " << map1.size() << "\n";

  map1.clear();

  cout << "Size: " << map1.size() << "\n";
  cout << "map[3] = " << map1[3] << "\n";

  // NOTE: Map #1 is not empty, as map1[3] in line #38 creates a new pair with key 3 and value 0.
  if (map1.empty()) cout << "Map #1 is empty!\n";
  else cout << "Map #1 is not empty!\n";

  for (auto i : map1) {
    // map1.count(x) - 1 if x appears in the map
    //               - 0 otherwise
    cout << "# of times " << i.first << " appears in map #1: " << map1.count(i.first) << "\n";
  }

  map<string, int> map2;

  for (char i = 'a'; i <= 'z'; i++)
    map2[to_string(i)] = i * 2;

  for (char i = 'a' - 1; i <= 'z' + 1; i++) {
    string z = to_string(i);

    if (map2.find(z) != map2.end())
      cout << "map2[" << i << "] = " << (*map2.find(z)).second << "\n";
    else
      cout << "map2[" << i << "] = doesn't exist\n";
  }

  map2.insert({"ABC", 2});

  for (char i = 'a'; i <= 'Z'; i++) {
    string z = to_string(i);

    if (map2.find(z) != map2.end()) {
      cout << "Erasing map2[" << i << "]!\n";
      map2.erase(map2.find(z));
    }

    cout << "map2[" << i << "] = " << map2[z] << "\n";
  }

  cout << map2.size() << "\n";

  map2.erase(map2.find("ABCD"));

  cout << map2.size() << "\n";

  return 0;
}
