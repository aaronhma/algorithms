#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

const int base = 1e9;

void print(vi &arr) {
  cout << arr.back() << " ";
}

void input(vi &arr, string &s) {
  int n = (int)s.size();

  // Remove leading 0s
  while (!n && s.back()) { s.pop_back(); n--; }

  for (int i = n; i > 0; i -= 9) {
    if (i < 9) arr.push_back(atoi(s.substr(0, i).c_str()));
    else arr.push_back(atoi(s.substr(i - 9, 9).c_str()));
  }
}

void add(vi &a, vi &b) {

}

int main()
{


  return 0;
}
