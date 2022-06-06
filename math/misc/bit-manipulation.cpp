#include <bits/stdc++.h>

using namespace std;

struct Bit
{
  Bit() { Bit(0); }
  Bit(int _n) { n = _n; }

  // get the i-th bit (from the MSB -> LSB)
  int get(int i)
  {
    return (n >> i) & 1;
  }

  // set the i-th bit
  void set(int i, int bit = 1)
  {
    if (bit) n |= (1 << i);
    else clear(i);
  }

  // clear the i-th bit
  void clear(int i)
  {
    n &= ~(1 << i);
  }

  int n;
};

int main()
{
  Bit n(13);
  cout << n.get(2) << "\n"; // 1
  cout << n.n << "\n";      // 13 (0b1101)
  n.set(1);
  cout << n.n << "\n"; // 15 (0b1111)
  n.clear(0);
  cout << n.n << "\n"; // 14 (0b1110)

  return 0;
}
