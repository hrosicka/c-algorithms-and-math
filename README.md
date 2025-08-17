# C Algorithms and Math

A collection of simple C programs demonstrating basic algorithms and mathematical computations.

## Contents

- **Factorial** ([Factorial.c](Factorial.c)): Calculates the factorial of a user-provided integer.
- **Fibonacci Sequence (Iterative)** ([FibonacciSequence.c](FibonacciSequence.c)): Prints the Fibonacci sequence up to a specified number of terms using an iterative approach.
- **Fibonacci Sequence (Recursive)** ([FibonacciSequenceRecursive.c](FibonacciSequenceRecursive.c)): Prints the Fibonacci sequence using recursion and measures execution time.
- **Transpose Matrix** ([TransposeMatrix.c](TransposeMatrix.c)): Reads a matrix from user input and prints its transpose.
- **Calculating Pi Using Polygons** ([CalculatingPiUsingPolygons.c](CalculatingPiUsingPolygons.c)): Approximates the value of Pi using the perimeter of a regular polygon inscribed in a unit circle.

## How to Build

You can compile any of the `.c` files using GCC. For example:

```sh
gcc Factorial.c -o factorial
gcc FibonacciSequence.c -o fibonacci_sequence
gcc FibonacciSequenceRecursive.c -o fibonacci_sequence_recursive
gcc TransposeMatrix.c -o transpose_matrix
gcc CalculatingPiUsingPolygons.c -o calculating_pi_using_polygons -lm
```

## Usage

Run the compiled executable and follow the prompts in the terminal.

Example:

```sh
./factorial
```

## License

This project is licensed under the MIT License. See [LICENSE](LICENSE) for details.
