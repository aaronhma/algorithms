#include <iostream>
#include <vector>

using namespace std;

int combination_sum(vector<int> nums, int target)
{
  unsigned long long dp[target + 1];

  for (int i = 0; i <= target; i++)
  {
    dp[i] = 0;
  }

  dp[0] = 1;

  for (int i = 0; i <= target; i++)
  {
    for (int j = 0; j < nums.size(); j++)
    {
      if (i >= nums[j])
      {
        dp[i] += dp[i - nums[j]];
      }
    }
  }

  return dp[target];
}

int main()
{
  vector<int> arr = {1, 2, 3};
  int N = 4;

  cout << combination_sum(arr, N) << "\n";

  return 0;
}
