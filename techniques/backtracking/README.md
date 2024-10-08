# Backtracking Technique

## About

-   [ ] [Backtracking](https://www.techiedelight.com/Category/backtracking/)

**Backtracking Algorithm** is a general algorithm for finding all (or some) solutions to some computational problems, notably constraint satisfaction problems, that incrementally builds candidates to the solutions, and abandons each partial candidate $c$ ("backtracks") as soon as it determines that $c$ cannot possibly be completed to a valid solution.

Backtracking can be applied only for problems which admit the concept of a "partial candidate solution" and a relatively quick test of whether it can possibly be completed to a valid solution. It is useless, for example, for locating a given value in an unordered table. When it is applicable, however, backtracking is often much faster than brute force enumeration of all complete candidates, since it can eliminate a large number of candidates with a single test.

## Backtracking Template

A typical backtracking solution uses the following template:

```python
def func(input, partial, output):
  if (validSolution(partial)):
    processSolution(partial) # typically printing solution or incrementing a variable
    return

  candidates = generateCandidates(input, partial)

  for candidate in candidates:
    addCandidate(candidate, input, partial)
    func(input, partial, output)
    removeCandidate(candidate, input, partial)
```
