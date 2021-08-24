#include <bits/stdc++.h>

using namespace std;

template <typename type>
struct point3d
{
  // (x, y, z) coordinate
  type x, y, z;

  // Default initializers
  point3d() {}
  point3d(type X, type Y, type Z) : x(X), y(Y), z(Z)
  {
  }

  // Overwrite +=, -=, *=, and /= operations
  point3d &operator+=(const point3d &other)
  {
    x += other.x;
    y += other.y;
    z += other.z;
    return *this;
  }

  point3d &operator-=(const point3d &other)
  {
    x -= other.x;
    y -= other.y;
    z -= other.z;
    return *this;
  }

  point3d &operator*=(const point3d &other)
  {
    x *= other.x;
    y *= other.y;
    z *= other.z;
    return *this;
  }

  point3d &operator/=(const point3d &other)
  {
    x /= other.x;
    y /= other.y;
    z /= other.z;
    return *this;
  }

  // Override +, -, *, and / operations
  point3d operator+(const point3d &other)
  {
    return point3d(*this) += other;
  }

  point3d operator-(const point3d &other)
  {
    return point3d(*this) -= other;
  }

  point3d operator*(const point3d &other)
  {
    return point3d(*this) *= other;
  }

  point3d operator/(const point3d &other)
  {
    return point3d(*this) /= other;
  }

  // Formula: https://www.google.com/search?q=dot+product+algebra+definition
  // Video explanation: https://www.youtube.com/watch?v=0iNrGpwZwog
  type dot(const point3d<type> &other)
  {
    return x * other.x + y * other.y + z * other.z;
  }
};

template <typename type>
ostream &operator<<(ostream &os, const point3d<type> &a)
{
  os << "(" << a.x << ", " << a.y << ", " << a.z << ")";
  return os;
}

// See README.md for information on this
template <typename type>
point3d<type> cross(point3d<type> &a, point3d<type> &b)
{
  return point3d<type>(a.y * b.z - a.z * b.y,
                       a.z * b.x - a.x * b.z,
                       a.x * b.y - a.y * b.x);
}

int main()
{
  point3d<int> c1(2, 4, 7), c2(5, 5, 4);
  cout << "c1: " << c1 << "\nc2: " << c2 << "\n\n";

  cout << c1 * c2 << "\n";
  cout << c1 + c2 << "\n";
  cout << c1 - c2 << "\n";
  cout << c2 / c1 << "\n";

  return 0;
}
