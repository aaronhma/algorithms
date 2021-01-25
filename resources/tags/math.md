# Math Tips and Tricks

## Addition

- Addition from _1_ to _n_. `S = 1 + 2 + ... + n`

Theroem: `S = n(n + 1) / 2`

- Addition from _1_ to _2n_. `S = 1 + 2 + ... + 2n`

Theroem: `S = n(2n + 1)`

## Power

- _2_ power of _K_

```c++
1 << 0  // 1  2^0
1 << 1  // 2  2^1
1 << 2  // 4  2^2
1 << 3  // 8  2^3
```

## Number tricks

- Number get each digit

```c++
int main()
{
  int n = 45678;
  while (n > 0)
  {
    int digit = n % 10;
    n /= 10;
    cout << digit << "\n";
  }
}
```

## Working with numbers

The most used integer type in competitive programming is int, which is a 32-bit type with a value range of −2^31...2^31 - 1 or about −2 _ 10^9 ... 2 _ 10^9 . If the type _int_ is not enough, the 64-bit type _long long_ can be used. It has a value range of −2^63...2^63 -1 or about −9 _ 10^18 ... 9 _ 10^18

The suffix LL means that the type of the number is _long long_.
`long long x = 123456789123456789LL;`

# Learning Math

https://mathblog.com/
https://www.hackerearth.com/problem/algorithm/crack-the-math/

https://betterexplained.com/

BRILLIANT.org

https://www.mathhelp.com/

https://member.mathhelp.com/courses/middle_and_high_school/174/chapter/9/lesson/1107

Good Website with info
https://mathworld.wolfram.com/topics/NumberTheory.html
https://www.mathemerize.com/index.html

https://www.wyzant.com/resources/lessons

Just visual Math Help
http://www.mathimation.co.uk/

https://artofproblemsolving.com/company
https://artofproblemsolving.com/videos

Only for math
https://math.stackexchange.com

https://www.wolframalpha.com/

- We can solve any types of math by entering questions.
- They give us step by step solution for every math.
- We can learn many things from one question.
- We can ask a math by uploading file!
  Alternatively we can find question and answer by topic.

Math suggested by William Lin
https://tutorial.math.lamar.edu/Classes/Alg/Alg.aspx

Under-graduate level:

- Mathematics for Computer Science
- Street-Fighting Mathematics
- Introduction to Mathematical Programming
  Graduate level:
- Discrete Stochastic Processes
- Discrete-Time Signal Processing

I'll also mention resources such as MIT OpenCourseWare (http://ocw.mit.edu

) and UC Berkeley Video and Podcasts for Courses & Events

YOUTUBE

Best channels to look for:
Professor Leonard
3blue1brown
Math 3500/10
Mathoma
David Meztler
Khan Academy
Playlists:
Harvey Mudd College—Real Analysis with Francis Su
A brief intro to Ordinal Numbers by David Meztler
Set theory by Mathoma
And many more!
