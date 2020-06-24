# Efficiency

Efficiency refers to the time and space used by a algorithm. Depending on the problem, either the time or space complexity is more important, or sometimes both are important, depending on the environment and computer used.

## Big-O Notation

![Image](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Comparison_computational_complexity.svg/1024px-Comparison_computational_complexity.svg.png)

([Source](https://upload.wikimedia.org/wikipedia/commons/thumb/7/7e/Comparison_computational_complexity.svg/1024px-Comparison_computational_complexity.svg.png))

- **n!** - Tries every combination (the slowest)
- **2<sup>n</sup>** - Commonly used in prime factorization
- **n<sup>2</sup>** - Quadratic time
- **n log n**
- **n** - Linear time (needs to see every element at once)
- **&Sqrt;n** - Great resource - click [here](https://www.infoarena.ro/blog/square-root-trick)
- **log n** - Binary search - Halves the array half every iteration
- **1** - Constant, disregards input size, same amount of time/space

<div>
          <table id="legend" style="display:inline-block">
            <tbody>
              <tr>
                <td><code style="color:red">Horrible</code></td>
                <td><code style="color:orange">Bad</code></td>
                <td><code style="color:yellow">Fair</code></td>
                <td><code style="color: #C8EA00">Good</code></td>
                <td><code style="color: green">Excellent</code></td>
              </tr>
            </tbody>
          </table>
        </div>
<div>
          <svg id="chart" width="800" height="500" xmlns="http://www.w3.org/2000/svg">
            <path d="M50 450 L 50 0 L 800 0 L 800 450 Z" fill="#ff8989"></path>
            <path d="M50 450 L 800 0 L 800 450 Z" fill="#FFC543"></path>
            <path d="M50 450 L 800 450 L 800 330 Z" fill="yellow"></path>
            <path d="M50 450 L 800 450 L 800 410 Z" fill="#C8EA00"></path>
            <path d="M50 450 L 800 450 L 800 440 Z" fill="#53d000"></path>
            <path d="M50 0 L 50 450 L 800 450" fill="transparent" stroke="black" stroke-width="2"></path>
            <path d="M50 448 L 800 448" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="700" y="438" fill="black">O(log n), O(1)</text>
            <path d="M50 450 L 800 400" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="760" y="390" fill="black">O(n)</text>
            <path d="M50 450 Q 400 350, 800 150" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="630" y="190" fill="black">O(n log n)</text>
            <path d="M50 450 Q 180 380, 250 0" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="260" y="30" fill="black">O(n^2)</text>
            <path d="M50 450 C 100 430, 120 350, 120 0" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="125" y="20" fill="black">O(2^n)</text>
            <path d="M50 450 C 80 450, 80 350, 80 0" fill="transparent" stroke="black" stroke-width="2"></path>
            <text x="80" y="20" fill="black">O(n!)</text>
            <text x="0" y="0" transform="translate(30 230) rotate(-90)" style="dominant-baseline: middle; text-anchor: middle; font-size:20px; color: #555; font-size:20px; color: #555; font-style: italic;" fill="black">Operations</text>
            <text x="0" y="0" transform="translate(420 470)" style="dominant-baseline: middle; text-anchor: middle; font-size:20px; color: #555; font-style: italic;" fill="black">Elements</text>
          </svg>
        </div>

([Source](https://www.bigocheatsheet.com/))
