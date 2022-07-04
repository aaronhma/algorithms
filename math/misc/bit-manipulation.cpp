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

  // clear everything
  void clear() {
    n = 0;
  }

  // clear the i-th bit
  void clear(int i)
  {
    n &= ~(1 << i);
  }

  // toggle (flip) the i-th bit
  void toggle(int i) {
    n ^= (1 << i);
  }

  // checks if the i-th bit is set
  bool isSet(int i) {
    return n & (1 << i);
  }

  // gets value of the LSB
  int lsbvalue() {
    return n & ~n;
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

  for (int i = 1; i <= 100; i++) {
    n.n = i;
    assert((i & ~i) == (i & (~i)));
  }

  return 0;
}

/**
 * TEMPLATE-READY:
struct Bit
{
  Bit() { Bit(0); }
  Bit(int _n) { n = _n; }
  int get(int i) { return (n >> i) & 1; }
  void set(int i, int bit = 1) { if (bit) { n |= (1 << i); } else { clear(i); } }
  void clear() { n = 0; }
  void clear(int i) { n &= ~(1 << i); }
  void toggle(int i) { n ^= (1 << i); }
  bool isSet(int i) { return n & (1 << i); }
  int lsbvalue() { return n & ~n; }
  int n;
};
*/
