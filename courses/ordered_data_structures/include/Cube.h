#ifndef CUBE_H_
#define CUBE_H_

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

#endif // CUBE_H_
