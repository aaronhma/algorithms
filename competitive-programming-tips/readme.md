Competitive programming combines two topics: (1) the design of algorithms and (2) the implementation of algorithms.

The design of algorithms consists of problem solving and mathematical thinking. Skills for analyzing problems and solving them creatively are needed. An algorithm for solving a problem has to be both correct and efficient, and the core of the problem is often about inventing an efficient algorithm.

Typically, a solution to a problem is a combination of well-known techniques and new insights.

The implementation of algorithms requires good programming skills.

- A typical C++ code template for competitive programming looks like this:

```c++
// include the entire standard library. ex: iostream, vector and algorithm
#include <bits/stdc++.h>

using namespace std;

int main() {
  // solution comes here

}
```

- Compile c++ code

```bash
g++ -std=c++11 -O2 -Wall test.cpp -o test
```

## Input and output

```c++
int main()
{
  int a, b;
  string x;
  cin >> a >> b >> x;

  cout << "a: " << a << " b: " << b << " x: " + x << "\n";

  string s;
  getline(cin, s);

  cout << s << endl;

  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
}
```

## Working with numbers

The most used integer type in competitive programming is int, which is a 32-bit type with a value range of −2^31...2^31 - 1 or about −2 _ 10^9 ... 2 _ 10^9 . If the type _int_ is not enough, the 64-bit type _long long_ can be used. It has a value range of −2^63...2^63 -1 or about −9 _ 10^18 ... 9 _ 10^18

The suffix LL means that the type of the number is _long long_.
`long long x = 123456789123456789LL;`
