#include <bits/stdc++.h>

using namespace std;

bool search(vector<int> &arr, int x)
{
  for (long unsigned int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == x)
      return true;
  }

  return false;
}
