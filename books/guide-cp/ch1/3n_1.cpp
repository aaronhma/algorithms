// 3n + 1 Problem
// https://cses.fi/problemset/task/1068/
#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  string str;
  cin >> n;

  cout << n << " ";

  while (n != 1)
  {
    if (n % 2 == 0)
    {
      n /= 2;
    }
    else
    {
      n *= 3;
      n += 1;
    }

    str += to_string(n);
    str += " ";
  }

  cout << str << "\n";

  return 0;
}
