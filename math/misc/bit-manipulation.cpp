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
  Bit n(5); // 101
  cout << n.get(0) << "\n";

  return 0;
}
