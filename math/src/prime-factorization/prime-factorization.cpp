#include <bits/stdc++.h>

using namespace std;

#define MAX_N 101

// O(sqrt(n))
void primeFact(int n, vector<int> &base, vector<int> &exponent, int &distinctPrimeCount)
{
  // first number that will be checked if n is divisible by d
  // Note that composite numbers don't matter
  int d = 2, max = sqrt(n);

  // We only check d all the way to the square root of n
  while (n > 1 && d <= max)
  {
    int k = 0; // Number of times we've divided n by d

    // As long as we can still divide n by d, keep going.
    while (n % d == 0)
    {
      n /= d;
      k++;
    }

    // As long as we did do something...
    if (k != 0)
    {
      // one more distinct prime number that leads to our prime factorization
      distinctPrimeCount++;

      // set the base of the current distinct prime number
      base[distinctPrimeCount] = d;

      // set the exponent of the current distinct prime number
      exponent[distinctPrimeCount] = k;
    }

    // Go to the next number
    d++;
  }

  // After exiting the while loop, we have two cases:
  // * n == 1: we've already calculated the prime factorization for n
  // * n > 1: n is prime, add that to our prime factorization
  if (n > 1)
  {
    // one more distinct prime number that leads to our prime factorization
    distinctPrimeCount++;

    // set the base of the current distinct prime number
    base[distinctPrimeCount] = n;

    // set the exponent of the current distinct prime number
    exponent[distinctPrimeCount] = 1;
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n = 100; // 2^2 * 5^2

  // 1^100 to 100^100
  vector<int> base(MAX_N, 0), exponent(MAX_N, 0);
  int distinctPrimeCount = 0; // # of distinct primes multipled together to get n

  primeFact(n, base, exponent, distinctPrimeCount);

  for (int i = 1; i <= 100; i++)
  {
    if (exponent[i] != 0)
    {
      for (int j = 0; j < exponent[i]; j++)
        cout << base[i] << " * ";
    }
  }

  cout << "\n";

  return 0;
}
