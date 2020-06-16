/**
 * This file is a part of the algorithm implementation collection.
 *
 * This file is under the MIT LICENSE.
 * In using it, you agree to abide by the LICENSE
 * at all times.
 *
 * @file apps/highway_driving.h
 *  This file contains an example of a priority queue used in a real world.
 */
#pragma once

struct Car
{
  int speed;
  std::string car_name;

  bool operator==(const Car &other) const
  {
    return other.speed == speed;
  }

  bool operator<(const Car &other) const
  {
    return other.speed < speed;
  }

  bool operator>(const Car &other) const
  {
    return other.speed > speed;
  }
};
