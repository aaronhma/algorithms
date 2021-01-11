# Square Root Techniques

A square root can be seen as a "poor man's logarithm": $\theta(\sqrt{n})$ is better than $\theta(n)$ but worse than $\theta(log \ n)$. In any case, many data structures and algorithms involving square roots are fast and usable in practice. This section shows some examples of how square roots can be used in algorithm design.

## Data Structures

Sometimes we can create an efficient data structure by dividing an array into blocks of size $\sqrt{n}$ and maintaining information about array values inside each block.
