#include <bits/stdc++.h>

using namespace std;

#define n 16 // n must be a constant and known at compile-time

void printBitset(bitset<n> bits, int no) {
  // count() - # of bits set to "1"
  // any() - "true" if at least 1 bit set to "1", otherwise "false" (like arr.empty()/list.empty())
  // none() - "true" if all bits are set to "0"
  cout << "Bitset #" << no << ": " << bits << "\n# bits true: " << bits.count() << "\nIs there at least one 1 in the bitset? " << boolalpha << bits.any() << "\nIs all the bits equal to '0'? " << bits.none() << "\n====================\n";
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  // We're using 16 bits (2 bytes) for each bitset.
  bitset<n> b1; // Create empty bitset
  bitset<n> b2(12); // Create bitset based on int -> binary
  bitset<n> b3("1011"); // Create bitset based on string -> binary

  // indexes start from right to left (LMS digit -> greatest signifacance digit)
  // set the bit at position 26 and 17 and 0 to 1
  b1[15] = b1[8] = b1[0] = 1;

  printBitset(b1, 1);
  printBitset(b2, 2);
  printBitset(b3, 3);

  b1.set(8, 0); // set bit at position #8 to 0
  b1.reset(); // set all bits in bitset #1 to 0

  printBitset(b1, 1);

  b1.set(); // set all bits in bitset #1 to 1
  printBitset(b1, 1);

  b1.flip(); // flips all bits (0 -> 1 and 1 -> 0)
  b1.set(2, 1); // set bit at position #2 to 1
  b1.flip(2); // flip bit at position #2 (1 -> 0)

  printBitset(b1, 1);

  bitset<n> XOR = b1 ^ b2;

  cout << "Bitwise XOR:\n    b1: " << b1 << "\n" << "XOR b2: " << b2 << "\n======================================\n        " << XOR << "\n\n";
  printBitset(XOR, 4);

  bitset<n> AND = b1 & b2;

  cout << "Bitwise AND:\n    b1: " << b1 << "\n" << "AND b2: " << b2 << "\n======================================\n        " << AND << "\n\n";
  printBitset(AND, 5);

  bitset<n> OR = b1 | b2;

  cout << "Bitwise OR:\n   b1: " << b1 << "\n" << "OR b2: " << b2 << "\n======================================\n       " << OR << "\n\n";
  printBitset(OR, 6);

  cout << "\n\n";

  cout << "Moved bitset #3 (shift elements by 1 to the right): " << b3 << " | " << (b3 >> 1) << "\n";
  cout << "Moved bitset #3 (shift elements by 2 to the left): " << b3 << " | " << (b3 << 2) << "\n";

  return 0;
}
