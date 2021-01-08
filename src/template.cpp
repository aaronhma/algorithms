#include <bits/stdc++.h>

using namespace std;

#define FIO                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif

  FIO;

  int t;
  cin >> t;

  while (t--)
  {
    cerr << t << "\n";
    int x;
    cin >> x;
    cout << x << "\n";
    cerr << "hello matt: " << x << endl;
  }

  return 0;
}
