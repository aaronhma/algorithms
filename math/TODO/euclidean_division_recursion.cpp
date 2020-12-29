/**
 * Copyright (c) 2020 - Present Aaron Ma.
 *
 * This file is part of the Algorithms project. This project
 * is free software, licensed under the MIT License.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * You should have received a copy of the license. If not,
 * see <https://github.com/aaronhma/algorithms/blob/master/LICENSE>
 *
 * @file euclidean_division_recursion.cpp
 *  This is an implementation file for the recursive division approach of the Euclidean Algorithm.
 */
#include <iostream>

int gcf(long long a, long long b)
{
  // base case
  if (b == 0)
  {
    return a;
  }

  return gcf(b, a % b);
}

int main()
{
  // We use long long to handle larger numbers
  long long a, b;
  std::cin >> a >> b; // read in the data

  std::cout << "gcf(" << a << ", " << b
            << ") = " << gcf(a, b)
            << "\n";

  return 0;
}
