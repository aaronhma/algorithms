#include <bits/stdc++.h>

using namespace std;

// See https://github.com/aaronhma/algorithms/blob/master/math/geometry/basics/2d-point.cpp
template <typename type>
struct point2d
{
  // (x, y) coordinate
  type x, y;

  // Default initializers
  point2d() {}
  point2d(type X, type Y) : x(X), y(Y)
  {
  }

  // Overwrite +=, -=, *=, and /= operations
  point2d &operator+=(const point2d &other)
  {
    x += other.x;
    y += other.y;
    return *this;
  }

  point2d &operator-=(const point2d &other)
  {
    x -= other.x;
    y -= other.y;
    return *this;
  }

  point2d &operator*=(const point2d &other)
  {
    x *= other.x;
    y *= other.y;
    return *this;
  }

  point2d &operator/=(const point2d &other)
  {
    x /= other.x;
    y /= other.y;
    return *this;
  }

  // Override +, -, *, and / operations
  point2d operator+(const point2d &other)
  {
    return point2d(*this) += other;
  }

  point2d operator-(const point2d &other)
  {
    return point2d(*this) -= other;
  }

  point2d operator*(const point2d &other)
  {
    return point2d(*this) *= other;
  }

  point2d operator/(const point2d &other)
  {
    return point2d(*this) /= other;
  }

  // Formula: https://www.google.com/search?q=dot+product+algebra+definition
  // Video explanation: https://www.youtube.com/watch?v=0iNrGpwZwog
  type dot(const point2d<type> &other)
  {
    return x * other.x + y * other.y;
  }

  // Vector norm of a (squared length): |a|^2 = a * a - the dot product of a and a
  type norm()
  {
    return dot(point2d(*this));
  }

  // See https://math.stackexchange.com/questions/707945/how-to-find-the-absolute-value-of-a-vector
  double abs()
  {
    return sqrt(norm());
  }
};

template <typename type>
ostream &operator<<(ostream &os, const point2d<type> &a)
{
  os << '(' << a.x << ", " << a.y << ')';
  return os;
}

// See README.md for information on this
template <typename type>
type cross(const point2d<type> &a, const point2d<type> &b)
{
  return a.x * b.y - a.y * b.x;
}

int sign() {}
bool intersection1(point2d &a, point2d &b, point2d &c, point2d &d) {}
bool intersection(point2d &a, point2d &b, point2d &c, point2d &d)
{
  if ()
}

int main()
{
  point2d a{2, 3}, b{2, 6}, c{3, 5}, d{3, 0};

  cout << intersection(a, b, c, d) << "\n";

  return 0;
}
