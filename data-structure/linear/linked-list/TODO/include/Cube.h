#pragma once

class Cube
{
public:
  Cube(int x);

  double getLength();

  bool operator<(Cube cube);
  bool operator>(Cube cube);

  bool operator==(Cube cube);

private:
  double length;
};
