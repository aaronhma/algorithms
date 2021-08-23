#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "abaxabaxabb"; // Odd Palindromes
  // string s = "cbaab"; // Even Palindromes
  int n = s.size();

  // oddPalindromes: find all the sub-palindromes with odd length
  // evenPalindromes: find all the sub-palindromes with even length
  vector<int> oddPalindromes(n),  evenPalindromes(n);
  // l & r boundary. r cannot be decreased
  int l = 0, r = -1;

  // i is the index of the center letter of the current palindrome.
  // If i exceeds r, k is initialized to 1, as a single letter is a palindrome in itself. For evenPalindromes[], k will be initialized to 0.
  // If i does not exceed r, k is either initialized to the oddPalindromes[j], where j is the mirror position of i in (l,r), or k is restricted to the size of the "outer" palindrome.
  for (int i = 0; i < n; i++) {
    // If i is outside the current sub-palindrome, i. e. i>r, we'll just launch the trivial algorithm.
    int k = (i > r) ? 1 : min(oddPalindromes[r - i + l], r - i + 1);
    cout << "k: " << k << "\n";

    // Char comparison: grown from the center `i`
    while (0 <= i - k && i + k < n && s[i - k] == s[i + k])
      k++;

    // `i` is the center of palindrome centered, then oddPalindromes[i] stores (i+1)/2. Store `k` as value, then decrease by 1
    oddPalindromes[i] = k--;
    cout << "i: " << i << " - k: " << k << " - oddPalindromes[i]: " << oddPalindromes[i] << "\n";
    // Update l & r boundary
    if (i + k > r) {
      l = i - k;
      r = i + k;
      cout << "l: " << l << " - r: " << r << "\n";
    }
  }

  l = 0, r = -1;

  // Since an even palidrome will have two centers, i is the latter of the two center indices.
  // if i exceeds r, k is initialized to 0, as a single letter is not an even palindrome.
  // If the size of palindrome centered at i is x, then d2[i] stores x/2
  for (int i = 0; i < n; i++) {
    int k = (i > r) ? 0 : min(evenPalindromes[r - i + 1 + l], r - i + 1);
    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k])
      k++;

    evenPalindromes[i] = k--;
    if (i + k > r) {
      l = i - k - 1;
      r = i + k;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << oddPalindromes[i] << " ";
  }
  cout << "\n";

  int centerIndex = 5;
  int centerK = 5;
  cout << "Max Length of the Palindromes: " << centerK * 2 - 1 << "\n";

  int start = centerIndex - (centerK - 1);
  int end = centerIndex + (centerK - 1);

  cout << "Odd start: " << start << "\n";
  cout << "Odd end: " << end << "\n";

	for(int i = start; i <= end; i++)
		printf("%c", s[i]);
	printf("\n");

  for (int i = 0; i < n; i++) {
    cout << evenPalindromes[i] << " ";
  }
  cout << "\n";

  // int centerIndex = 3;
  // int centerK = 2;
  // cout << "Max Length of the Palindromes: " << centerK * 2 << "\n";

  // int start = centerIndex - centerK;
  // int end = centerIndex + (centerK - 1);

  // cout << "Even start: " << start << "\n";
  // cout << "Even end: " << end << "\n";

	// for(int i = start; i <= end; i++)
	// 	printf("%c", s[i]);
	// printf("\n");

  return 0;
}
