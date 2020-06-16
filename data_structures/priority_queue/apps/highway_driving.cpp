/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file apps/highway_driving.cpp
 *  This file contains an example of a priority queue used in a real world.
 */

#include "../../include/header.h"
#include "highway_driving.h"
#include <queue>

int main()
{
  std::priority_queue<Car> cars;

  cars.emplace(5, "My First Car");
  cars.emplace(4, "Best Friend's Car");
  cars.emplace(3, "Random Person");

  while (!cars.empty())
  {
    print(cars.top().speed);
    cars.pop();
  }

  return 0;
}
