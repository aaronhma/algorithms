#include <bits/stdc++.h>

using namespace std;

void add(int &set, int v) {
  set |= (1 << v);
}

void print(int &set) {
  for (int i = 0; i < 32; i++) {
    if (set & (1 << i)) cout << i << " ";
  }

  cout << "\n";
}

int main()
{
  int set1 = 0, set2 = 0;
  add(set1, 1);
  add(set1, 3);
  add(set1, 4);
  add(set1, 32);

  add(set2, 1);
  add(set2, 4);
  add(set2, 5);

  print(set1);
  print(set2);

  cout << "\n";

  // Intersection
  int intersection = set1 & set2;
  print(intersection);

  // Union
  int Union = set1 | set2;
  print(Union);

  // Complement of set 1
  int complement1 = ~set1;
  print(complement1);

  // Complement of set 2
  int complement2 = ~set2;
  print(complement2);

  // Difference
  int diff = set1 & (~set2);
  print(diff);

  return 0;
}
