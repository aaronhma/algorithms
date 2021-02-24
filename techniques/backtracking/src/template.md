# Backtracking Template

Presented below is a template that can be used for **any backtracking problem**.

```cpp
[return type] myFunction(auto input, auto generating, [anything else goes here]) {
  if (isValidSolution(generating)) {
    processSolution(generating);
    return;
  }

  auto candidates = generateCandidates(input, generating);

  for (auto i : candidates) {
    addCandidate();
    myFunction(input, generating);
    removeCandidate();
  }
}
```
