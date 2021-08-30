class Point {
public:
  int x, y;

  Point(int X, int Y) : x(X), y(Y) {}

  bool isValid(int &n, int &m) {
    return x >= 0 && x < n && y >= 0 && y < m;
  }

  bool operator==(const Point &other) {
    return x == other.x && y == other.y;
  }
};
