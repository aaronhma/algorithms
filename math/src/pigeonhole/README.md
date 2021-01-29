# The Pigeonhole Principle

## The Problem

Given a number $n$, find a number that consists of only digits $0$ and $1$ which is divisible by $n$.

## Concept: The Pigeonhole Principle

The pigeonhole principle states that if we have $n$ pigeons and $r$ pigeon holes, where $n > r$, there are at least $1$ pigeon hole where there are more than $1$ pigeon.

This idea sounds simple, but, it is hard to determine what are the pigeons and pigeon holes.

## Example: Chessboard Puzzle

https://youtu.be/B2A2pGrDG8I?t=99

## Approach 1: Logical Reasoning

We can solve this problem in $\theta(n)$ time complexity if we can handle the two cases:

* Case 1: The answer is $111111...111111$.
* Case 2: The answer is $1...0$.

```cpp
void findNumber(int n)
{
  int curr_remainder = 0;     // the current number that we are generating % n
  vector<int> freq(n + 1, 0); // stores the first number with the current remainder

  for (int i = 1; i <= n; i++)
  {
    // add a 1 to the end of our current number we are generating
    // update remainder % n
    curr_remainder = (curr_remainder * 10 + 1) % n;

    // Case 1: The answer to the problem contains all 1s.
    if (curr_remainder == 0)
    {
      // print 1 i times
      for (int j = 1; j <= i; j++)
        cout << 1;

      // already generated a number, exit
      return;
    }

    // Case 2: The answer to the problem contains 1s and 0s. Also, our current remainder has appeared before.
    if (freq[curr_remainder] != 0)
    {
      // print all 1s
      for (int j = 1; j <= i - freq[curr_remainder]; j++)
        cout << 1;

      // print all 0s
      for (int j = 1; j <= freq[curr_remainder]; j++)
        cout << 0;

      // already generated a number, exit
      return;
    }

    // this is the first number with the current remainder
    freq[curr_remainder] = i;
  }
}
```
