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

# Need to be reviewed

Really good video. https://www.youtube.com/watch?v=Y-_3rXgrRAY&list=WL&index=15

https://medium.com/@andreimargeloiu/how-to-prepare-for-competitive-programming-396d557e0c12

Good video
https://www.youtube.com/watch?v=y7169jEvb-Y&list=WL&index=5
https://www.youtube.com/watch?v=cpguolx2oms&list=WL&index=4

My personal learning
https://www.youtube.com/channel/UCBr_Fu6q9iHYQCh13jmpbrg

## Learning

https://twitter.com/beeman_nl/status/1297025596481052673

https://discuss.codechef.com/t/data-structures-and-algorithms/6599

Super good resources

https://github.com/lnishan/awesome-competitive-programming

C++ Core GuideLines
https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines

Core Data Structures and Algorithms
https://discuss.codechef.com/t/data-structures-and-algorithms/6599

CP CheatSheet
https://github.com/helloproclub/competitive-programming-cheat-sheet

https://medium.com/cheat-sheets/cheat-sheet-for-competitive-programming-with-c-f2e8156d5aa9

Some UVA contest solutions
https://github.com/aoapc-book/aoapc-bac2nd

Download GeeksForGeeks content

https://github.com/dufferzafar/geeksforgeeks.pdf

Online Judges
https://practice.geeksforgeeks.org/

Github repo

https://github.com/tmwilliamlin168/CompetitiveProgramming

## Learn DP

1. Youtube video
   https://www.youtube.com/playlist?list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go

https://www.youtube.com/channel/UClnwNEngsXoIp_tgJ2jZWfw

https://www.youtube.com/playlist?list=PLiQ766zSC5jM2OKVr8sooOuGgZkvnOCTI

https://www.youtube.com/playlist?list=PLUl4u3cNGP61Oq3tWYp6V_F-5jb5L2iHb

https://www.youtube.com/playlist?list=PL-Jc9J83PIiG8fE6rj9F5a6uyQ5WPdqKy

2. Github projects
   https://github.com/labuladong/fucking-algorithm

3. Excerices
   https://docs.google.com/document/d/16ad4qAlNKZGkYpaUutIYuA6l-YLyOm2AIYruNsfetJM/edit

Patterns & questions
https://leetcode.com/discuss/general-discussion/458695/dynamic-programming-patterns/439810

https://leetcode.com/discuss/general-discussion/662866/dp-for-beginners-problems-patterns-sample-solutions

https://leetcode.com/discuss/general-discussion/592146/dynamic-programming-summary

5. reading
   https://leetcode.com/discuss/general-discussion/494279/comprehensive-data-structure-and-algorithm-study-guide

https://jeffe.cs.illinois.edu/teaching/algorithms/book/03-dynprog.pdf

Graph theory solution

https://leetcode.com/discuss/general-discussion/969327/Graph-Algorithms-One-Place-or-Dijkstra-or-Bellman-Ford-or-Floyd-Warshall-or-Prims-or-Kruskals-or-DSU

## Info need to be documented

https://ioi2021.sg/schedule/

Tips
https://www.youtube.com/watch?v=0CKUjDcUYYA&t=68
        for (int i = 0; i < n; i++) {
           for (int j = i; j < n; j++) {
               int len = j - i + 1;
               string str = s.substr(i, len);

if (is_palindrome(str, n) && len > prev_len) {
                   prev_len = len;
                   prev_str = str;
               }
           }
       }

BEST WAY TO LOK FOR SUBSTR

if (COND1 && COND2) {}

if cond1 is false, the compiler will not continue

https://towardsdatascience.com/how-to-be-good-at-algorithms-bb1dd19ab54b

https://www.geeksforgeeks.org/engineering-mathematics-tutorials/

https://www.vplanetcoding.com/courses

https://www.youtube.com/watch?v=rj0q5bP7l7o

https://www.hackerearth.com/getstarted-competitive-programming/

https://www.coursera.org/learn/algorithms-greedy  should you enroll?

https://github.com/SVCE-ACM/A-December-of-Algorithms/blob/master/README.md

https://www.usamts.org/

https://blog.prepscholar.com/how-to-study-for-the-math-olympiad-amc-10/amc-12

Dynamic Programming
Greedy
Complete Search
Flood Fill
Shortest Path
Recursive Search Techniques
Minimum Spanning Tree
Knapsack
Computational Geometry
Network Flow
Eulerian Path
Two-Dimensional Convex Hull
BigNums
Heuristic Search
Approximate Search
Ad Hoc Problems

.

40% knowledge = ioi silver

80% knowledge = ioi gold

https://mathigon.org/

https://www.mathhelp.com/

CP cheatsheet: https://github.com/kth-competitive-programming/kactl/blob/master/kactl.pdf

C++ USACO book: http://darrenyao.com/usacobook/cpp.pdf

me: https://recommender.codedrills.io/profile?handles=cf%2Faaronhma

you: https://recommender.codedrills.io/profile?handles=cf%2Fmattma

tourist: https://recommender.codedrills.io/profile?handles=cf%2Ftourist

https://recommender.codedrills.io/

https://github.com/Bhupesh-V/30-seconds-of-cpp

https://www.youtube.com/watch?v=dZ_6MS14Mg4

https://www.educative.io/courses/competitive-programming-in-cpp-keys-to-success

https://www.educative.io/courses/cpp-standard-library-including-cpp-14-and-cpp-17

https://visualgo.net/en

https://github.com/indy256/codelibrary

https://github.com/spaghetti-source/algorithm

good reading: https://medium.com/basecs

Template to create a medium post

1. algorithm definition  2. what kind of problems is it trying to solve   3. possible problems  4. when you have exmaple: ex: Factors of 72: 1, 2, 3, 4, 6, 8, 9, 12, 18, 24, 36, 72,   do you have manually get all those digits?

2. when you have approaches, define an introduction with how many approaches and the reason why?

3. if you includes any code example, also include some example output

4. you should have a conclusion or outro, and where to go next?

5. should you also include some references?

6. Create a template in Medium for Algorithm spotlight series, once you have a solid template, future eposide will be easily compiled

Making Content Template
https://sendtoaryansh.gitbook.io/informatics-notes/making-a-contest-template

https://medium.com/@aatifrashid_20198/a-beginners-guide-into-competitive-programming-a63e49b38f69

https://events.withgoogle.com/dsc-solution-challenge/?fbclid=IwAR2RImhmJ45pEVMMA_UlZmr8XHcyT4KE_jJHajolaQqE5J1haWYE2oOPMd8

https://www.youtube.com/playlist?list=PLllx_3tLoo4dKCswFCctSgMj9y3GQyAlq&fbclid=IwAR2RImhmJ45pEVMMA_UlZmr8XHcyT4KE_jJHajolaQqE5J1haWYE2oOPMd8

Unofficial solutions in Python and C++ https://github.com/XilaiZhang/GoogleKickStart_Solutions?fbclid=IwAR3hDmCFav3RfUhw4Tk-brwV8jJXOwF9fR8xE59yYVlYE_CBc0SQ56EuYJ4

https://www.youtube.com/watch?v=cMHY4UouGCk&list=WL&index=17

https://www.youtube.com/playlist?list=PLllx_3tLoo4csmLveWHpjcRTXVMCcvvmc

https://codingcompetitions.withgoogle.com/

2017 ICPC: https://icpc-midcentral.us/archive/

https://www.youtube.com/watch?v=60yP1rIToP8&list=PL9902094F4966A0FE

https://www.youtube.com/watch?v=Wg-JlvBVPi0&list=PL22w63XsKjqwAgBzVFVqZNMcVKpOOAA7c

Discrete math
https://www.youtube.com/watch?v=tyDKR4FG3Yw&list=PLDDGPdw7e6Ag1EIznZ-m-qXu4XX3A0cIz

https://www.codecademy.com/learn/learn-c-plus-plus/modules/learn-cpp-references-and-pointers/cheatsheet

https://www.reddit.com/r/learnprogramming/comments/3gpvyx/algorithms_and_data_structures_cheat_sheets/

https://towardsdatascience.com/deep-learning-course-notebooks-worth-2-000-are-now-open-source-7d6bc759ef47

Leetcode CLI

npm -g install leetcode-tools/leetcode-cli

lc show 1 -g -l cpp

lc show -q eL

lc test FILENAME

ls submit FILENAME

https://skygragon.github.io/leetcode-cli/advanced#configuration

-x add question description in the generated source file.
-q filter questions by query
-t  filter questions by tags

CodeForce CLI

https://github.com/xalanq/cf-tool

## Learning

https://exercism.io/
Code practice and mentorship for everyone

https://codegym.cc/

https://www.urionlinejudge.com.br/
https://challenges.reply.com/tamtamy/home.action

https://github.com/EbookFoundation/free-programming-books/blob/master/problem-sets-competitive-programming.md#competitive-programming

https://github.com/bqi343/USACO/tree/master/Contests

Math
https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-042j-mathematics-for-computer-science-fall-2010/video-lectures/

All free programming books
https://ebookfoundation.github.io/free-programming-books/free-programming-books.html
https://github.com/EbookFoundation/free-programming-books

Watch C++ video
https://www.youtube.com/watch?v=zB9RI8_wExo&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=8
https://www.youtube.com/watch?v=g-1Cn3ccwXY&t=108s

## CP

https://medium.com/tag/competitive-programming

https://medium.com/@andreimargeloiu/how-to-prepare-for-competitive-programming-396d557e0c12

Kick Start Platform walk through and introduction
https://www.youtube.com/watch?v=cMHY4UouGCk&list=WL&index=17

Algorithms and DS, DP, Graph Theory, Binary search Stack, Queue

List of CP resources

https://www.techiedelight.com/

List of Todo’s

https://www.educative.io/courses/cpp-standard-library-including-cpp-14-and-cpp-17/7nYWrLv9jkQ
https://www.educative.io/courses/competitive-programming-in-cpp-keys-to-success/gkQq4xv4j3Y
https://github.com/sahilbansal17/Get_Better_at_CP_in_2_Months

good reading: https://medium.com/basecs

## C++

Tips: Classes vs Struct
https://www.youtube.com/watch?v=fLgTtaqqJp0

https://www.geeksforgeeks.org/how-to-prepare-for-acm-icpc/

https://blog.codingblocks.com/2020/a-beginners-guide-to-the-skills-you-learn-in-competitive-programming-course/

https://github.com/jnikhilreddy/Competitive-programming-resources
https://github.com/AhmadElsagheer/Competitive-programming-library
https://github.com/Ashishgup1/Competitive-Coding
https://medium.com/@redtxai/the-math-way-to-solve-programming-problems-57a09a4770f0
https://towardsdatascience.com/task-cheatsheet-for-almost-every-machine-learning-project-d0946861c6d0
https://www.educative.io/courses/cpp-standard-library-including-cpp-14-and-cpp-17/7nYWrLv9jkQ
https://www.quora.com/What-are-the-various-online-programming-contests
https://www.youtube.com/watch?v=V5hZoJ6uK-s

ACM-ICPC Past Problems – ICPC Archive, Practice at Codechef
TopCoder – Proceed by increasing problem levels gradually
Codeforces -List of Problem Sets
Codechef – Beginers can start with Codechef Beginners and proceed further
SPOJ – Move from easy to tough problems
USACO – Excellent training resource

uvaOnline Judge – Huge repositry of problems https://uva.onlinejudge.org/
https://uhunt.onlinejudge.org/
UVa OJ
A problem archive with over 3500 programming problems. It is popularly used in accompaniment with the Competitive Programming 3 textbook by Steven and Felix Halim

Hackerrank – Practice problems topic wise and participate in preparatory series
Hackerearth – Participate in preparatory series
Practice – Good for beginners. Has problems ranging from difficulty level School to Hard.
List of various Competitive Programming Contests available online all through the year

[Hacker Block] https://hack.codingblocks.com/
[csacademy](https://csacademy.com/lessons/)
AtCoder is a Japanese programming contest site

[Timus Online Judge](https://acm.timus.ru/) It is the largest Russian archive of programming problems with automatic judging system

[A2 OJ](https://a2oj.com/)

[Project Euler Archives](https://projecteuler.net/archives)
A series of challenging mathematical/computer programming problems, that become increasingly difficult as you proceed down the list. Great for brushing up your math skills.

Google CodeJam Archives https://codingcompetitions.withgoogle.com/codejam/archive
Archives of the problems from the previous years Google CodeJams.

ACM ICPC Problem Archives https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8
Archives of the problems from the previous years ACM-ICPC regionals and world finals.

C++ Formatter https://codebeautify.org/cpp-formatter-beautifier#

checkout course
https://online.codingblocks.com/courses/competitive-programming-course-online

Learn C++
https://www.tutorialspoint.com/cplusplus/index.htm

### Visual Tools

CSAcadmey's Graph Editor and Geometry Widget are examples of tools that can help you solve problems that are hard to visualize properly.

Graph editor (undirected, directed)
https://csacademy.com/app/graph_editor/

Geometry Widget
https://csacademy.com/app/geometry_widget/

- Algorithms visualization

VisuAlgo is a website perfect for people trying to get an intuitive feel for algorithms. It features animations for most common data structures and algorithms.

https://visualgo.net/en

Algorithm Visualizer is another website to visualize algorithms, data strucutres and the operations we can do on those data structures.

https://algorithm-visualizer.org/

## Debug

4 MB ~ array of size 10^6 . Or 2-d array of size 10^3\*10^3

Standard Memory limits are of Order of 256MB. You cannot allocate more than 4 MB space inside a function (it gives segmentation fault). Thus if you have to make an array of size >= 10^6 , make it global or use dynamic memory allocation.

## Errors

Types of errors you may encounter apart from wrong answer :

Run Time Error (Most Encountered)

Segmentation fault ( accessing an illegal memory address)

You declared array of smaller size than required or you are trying to access negative indices .
Declaration of an array of HUGE HUGE(more than 10^8 ints) size -\_- .

Dividing by Zero / Taking modulo with zero :O .
USE gdb ( will learn in coming lectures )
Compilation error

You need to learn how to code in C++.
USE GNU G++ compiler or IDEONE(be careful to make codes private).
Time Limit Exceeded

You program failed to generate all output within given time limit.
Input Files are not randomly generated , they are made such that wrong code does not pass.
Always think of worst cases before you start coding .Always try to avoid TLE.
Sometimes a little optimizations are required and sometimes you really need a totally new and efficient algorithm (this you will learn with time).
So whenever you are in doubt that your code will pass or not .Most of the time it won’t pass .
Again do proper order analysis of your solution .
Wrong Answer [most encountered]

Wrong answer means that the output given by your program did not match the correct output for that input (or did not fulfill the conditions in case multiple solutions were possible). This is the most frequently occurring bug that you will face and getting rid of it can be a pain.

First of all you must check that your program gives correct output for the sample test cases, exactly satisfying the output format.
Read your code completely once before testing. This way you will be able to remove any obvious bugs.
Check for incorrect variable initializations / uncleared memory, etc. These errors can also occur when you copy paste code.
In case you keep getting wrong answer even after you have tried to find the bug in your program you must rethink upon you algorithms and prove it if you haven’t done so.If you find bug in your algorithm start working on new algorithm.
