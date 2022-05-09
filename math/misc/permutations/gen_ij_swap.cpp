// Generate a permutation with (i, j) swapped
#include <bits/stdc++.h>
 
using namespace std;
 
typedef vector<int> vi;
 
vi compose(int n, int i, int j) {
  vi ans(n);
  iota(ans.begin(), ans.end(), 1);
 
  swap(ans[i - 1], ans[j - 1]);
  
  return ans;
}
 
int main()
{
  vi ans = compose(5, 1, 2); // 1-based indexing
 
  for (int i : ans) cout << i << " "; // 2 1 3 4 5
  cout << "\n";
 
  return 0;
}
