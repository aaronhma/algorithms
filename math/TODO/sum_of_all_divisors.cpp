/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times. You should have received it as a copy
 * with this project. If not, go to
 * https://github.com/aaronhma/algorithms/blob/master/LICENSE
 *
 * @file sum_of_all_divisors.cpp
 *  This file implementations the Sum of All Divisors.
 */
#ifdef __GNUC__
#include <bits/stdc++.h>
#elif __clang__
#include <iostream>
#include <ios>
#endif

#define USE_CIN

// uncomment next line to read from file:
// #define USE_FILE

using namespace std;

typedef long long ll;

ll sum(ll n)
{
  /**
   * Complexity analysis:
   *      - Time complexity: O(n) - Brute force, we check all elements
   *      - Space complexity: O(1) - Regardless of input, we always declare sum.
   * Idea:
   * Start from 1 until n (aka brute force), then if i is a divisor of n, add the divisor to the variable sum.
   *
   * @note Long Long (ll) is used to prevent overflow.
  */
  ll sum = 0;

  for (ll i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
    }
  }

  return sum;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll tests, temp;
  cin >> tests;

#ifdef USE_FILE
  ifstream fin("sum_of_all_divisors.in");
  ofstream fout("sum_of_all_divisors.out");

  if (!fin)
  {
    cerr << "Issue reading input file!"
         << "\n";
    exit(EXIT_FAILURE);
  }

  /**
   * TODO: You will need to type anything then an enter
   * to exit out of the terminal and see the result in the file.
  */

  fin >> tests;

  while (tests--)
  {
    fin >> temp;

    fout << sum(temp) << "\n";
  }
#endif

#ifdef USE_CIN
  while (tests--)
  {
    cin >> temp;

    cout << "Sum of the divisors of " << to_string(temp) << ": " << sum(temp) << "\n";
  }
#endif

  assert(sum(27000) == 93600);
  assert(sum(4) == 7);
  assert(sum(5) == 6);

  cout << "All tests passed!"
       << "\n";

  return 0;
}
