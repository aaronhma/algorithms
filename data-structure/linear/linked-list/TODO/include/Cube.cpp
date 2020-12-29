#include <iostream>
#include "Cube.h"

Cube::Cube(int x)
{
  this->length = x;
}

double Cube::getLength()
{
  return this->length;
}

bool Cube::operator==(Cube cube)
{
  return this->length == cube.length;
}

bool Cube::operator<(Cube cube)
{
  return this->length < cube.length;
}

bool Cube::operator>(Cube cube)
{
  return this->length > cube.length;
}
