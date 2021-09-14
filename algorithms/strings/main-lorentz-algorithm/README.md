# Finding repetitions [C++](./main-lorentz.cpp)

https://cp-algorithms.com/string/main_lorentz.html

The challenge is to find all repetitions in a given string s. Or a simplified task: find any repetition or find the longest repetition.

## Main Lorentz algorithms uses the [divide-and-conquer]() technique.

Steps:

- Splits the initial string into halves
- computes the number of repetitions that lie completely in each halve by two recursive calls
- The algorithm *O(n log n)* finds all repetitions starting in the first half and ending in the second half (which we will call crossing repetitions *O(n)* )

### Search for crossing repetitions

1. find all such repetitions that start in the first half of the string (`u`)

u: 1st half of the string
v: 2nd half of the string
s: the original string. `s = u + v`. *u* or *v* lengths are approximately equal to the length of *s* divided by two.

2. Look at the middle character (The first character of the second half of the repetition).

ex: if the repetition is a substring *s[i..j]*, then the middle character is *(i+j+1) / 2*.

If majority of string located in `u`, called *left repetition*. If majority of string located in `v`, called *right repetition*.

3. Find all left repetitions. Finding all right repetitions can be done in the same way.

The length of the *left repetition* by *2l* (i.e. each half of the repetition has length *l*). Consider the first character of the repetition falling into the string v (it is at position |u| in the string s). It coincides with the character l positions before it, let's denote this position *cntr* (counter).

The vertical lines divides the string `cacada` into the two halves. Here we fixated the position *cntr = 1*, and at this position we find the repetition *caca*.

```
  c  a  c  |  a  d  a
     ^
    cntr   (note: cntr index is 1)
```

It is clear, that if we fixate the position cntr, we simultaneously fixate the length of the possible repetitions: l=|u|−cntr. Once we know how to find these repetitions, we will iterate over all possible values for cntr from 0 to |u|−1, and find all left crossover repetitions of length l=|u|, |u|−1, …,1.
