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
 * @file euclidean_division_iterative.cpp
 *  This is an implementation file for the iterative division method of the Euclidean Algorithm.
 */
#include <iostream>

int main()
{
  long long a, b, remainder = 1;
  std::cin >> a >> b;

  while (remainder != 0)
  {
    remainder = a % b;

    if (remainder != 0)
    {
      a = b;
      b = remainder;
    }
    else
    {
      break;
    }
  }

  std::cout << "gcf of a and b: " << b << "\n";

  return 0;
}
