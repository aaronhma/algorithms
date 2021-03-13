#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  vector<int> arr = {1, 2, 3};

  for (int i = 4; i <= 86; i++) {
    arr.push_back(i);
  }

  cout << "Size: " << arr.size() << "\n"; // 8
  cout << "Capacity: " << arr.capacity() << "\n"; // 12
  cout << "Max size: " << arr.max_size() << "\n";

  arr.resize(98);

  cout << arr[97] << " " << arr[3] << "\n";

  cout << "Size: " << arr.size() << "\n"; // 12
  cout << "Capacity: " << arr.capacity() << "\n"; // 12

  return 0;
}
