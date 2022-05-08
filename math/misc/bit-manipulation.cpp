#include <bits/stdc++.h>

using namespace std;

struct Bit
{
public:
  Bit() { Bit(0); }

  Bit(int _n) { n = _n; }

  // get the i-th bit (from the MSB -> LSB)
  int get(int i)
  {
    int mask = 1 << i;

    return (n & mask) > 0;
  }

  // set the i-th bit
  void set(int i) {
    clear(i);
    int mask = 1 << i;
    n |= mask;
  }

  // clear the i-th bit
  void clear(int i) {
    int mask = ~(1 << i);
    n &= mask;
  }

  int n;
};

int main()
{
  Bit n(13); // 101
  cout << n.n << "\n"; // 13
  n.set(1);
  cout << n.n << "\n"; // 15

  return 0;
}
