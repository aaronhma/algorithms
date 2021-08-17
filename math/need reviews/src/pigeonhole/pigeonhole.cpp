#include <bits/stdc++.h>

using namespace std;

#define MAX_N 10000 // Maximum remainder possible

// O(n)
void findNumber(int n)
{
  int curr_remainder = 0;     // the current number that we are generating % n
  vector<int> freq(MAX_N, 0); // stores the first number with the current remainder

  // In the worst case, the answer to the problem is of size n
  for (int i = 1; i <= n; i++)
  {
    // add a 1 to the end of our current number we are generating
    // update remainder % n
    curr_remainder = (curr_remainder * 10 + 1) % n;

    // Case 1: The answer to the problem contains all 1s.
    if (curr_remainder == 0)
    {
      // print 1 i times
      for (int j = 1; j <= i; j++)
        cout << 1;

      // already generated a number, exit
      return;
    }

    // Case 2: The answer to the problem contains 1s and 0s. Also, our current remainder has appeared before.
    if (freq[curr_remainder] != 0)
    {
      // print all 1s
      for (int j = 1; j <= i - freq[curr_remainder]; j++)
        cout << 1;

      // print all 0s
      for (int j = 1; j <= freq[curr_remainder]; j++)
        cout << 0;

      // already generated a number, exit
      return;
    }

    // this is the first number with the current remainder
    freq[curr_remainder] = i;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  findNumber(13); // 111111
  cout << "\n";

  return 0;
}
