#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  tuple<int, double, string, bool> tuple1 = {42, 3.14159265, "Aaron", true}, tuple2 = {2, 3.12, "2", false};

  cout << get<0>(tuple1) << "\n";
  cout << get<1>(tuple1) << "\n";
  cout << get<2>(tuple1) << "\n";
  cout << get<3>(tuple1) << "\n";
  cout << "========================\n";
  cout << get<int>(tuple2) << "\n";
  cout << get<1>(tuple2) << "\n";
  cout << get<2>(tuple2) << "\n";
  cout << get<3>(tuple2) << "\n";

  if (tuple1 == tuple2) cout << "The two tuples are the same!\n";
  else cout << "The two tuples are not the same!\n";

  return 0;
}
