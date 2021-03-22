#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // Create two tuples with size of 4 that holds data types {int, double, string,bool}
  tuple<int, double, string, bool> tuple1 = {42, 3.14159265, "Aaron", true}, tuple2 = {2, 3.12, "2", false};
  // update value at index #0 to 96
  get<0>(tuple1) = 96;

  // update value that is a boolean to false (Will not work if there are no bool in tuple/more than 1 bool in tuple)
  get<bool>(tuple1) = false;

  // index-based access (C++11+):
  cout << get<0>(tuple1) << "\n"; // print data at index #0 in tuple #1
  cout << get<1>(tuple1) << "\n"; // print data at index #1 in tuple #1
  cout << get<2>(tuple1) << "\n"; // print data at index #2 in tuple #1
  cout << get<3>(tuple1) << "\n"; // print data at index #3 in tuple #1
  cout << "========================\n";
  // type-based access (C++14+):
  cout << get<int>(tuple2) << "\n"; // print the integer value in tuple #2 (Will not work if there are no integers in tuple/more than 1 integer in tuple!)
  cout << get<1>(tuple2) << "\n"; // print data at index #1 in tuple #2
  cout << get<2>(tuple2) << "\n"; // print data at index #2 in tuple #2
  cout << get<3>(tuple2) << "\n"; // print data at index #3 in tuple #2

  // Check if tuples are the same
  if (tuple1 == tuple2) cout << "The two tuples are the same!\n";
  else cout << "The two tuples are not the same!\n";

  return 0;
}
