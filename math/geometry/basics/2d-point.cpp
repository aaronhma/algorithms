#include <bits/stdc++.h>

using namespace std;

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

int main()
{
  point2d<int> c1(2, 4), c2(5, 5);
  cout << "c1: " << c1 << "\nc2: " << c2 << "\n\n";

  cout << c1 * c2 << "\n";
  cout << c1 + c2 << "\n";
  cout << c1 - c2 << "\n";
  cout << c2 / c1 << "\n";

  return 0;
}
