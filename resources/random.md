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
