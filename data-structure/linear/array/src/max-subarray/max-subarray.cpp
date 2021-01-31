#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> nums = {1, -2, 3, 4};

  int local = nums[0], global = nums[0];

  for (int i = 1; i < nums.size(); i++)
  {
    local = max(local + nums[i], nums[i]);
    global = max(global, local);
  }

  cout << global << "\n"; // 7
}
