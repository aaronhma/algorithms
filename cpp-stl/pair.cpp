#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // create pair of two integers:
  pair<int, int> p1 = make_pair(2, 3); // pair is a data structure that contains two elements of different/same data type

  // update value in the first element of the pair to 9
  p1.first = 9;

  cout << "First element: " << p1.first << "\n"; // first element in pair is accessed using .first
  cout << "Second element: " << p1.second << "\n"; // second element in pair is accessed using .second

  // create pair of a pair of two integers with a vector full of pairs containing strings and integers
  pair<pair<int, int>, vector<pair<string, int>>> arr = {{1, 2}, {{"No 1", 2}, {"No 2", 3}, {"No 3", 4}}};

  // print first & second element in pair<int, int>
  cout << arr.first.first << " | " << arr.first.second << "\n";

  // print out everything in the second element of the pair
  for (auto i : arr.second) {
    // {string, int}
    cout << i.first << " | " << i.second << "\n";
  }

  return 0;
}
