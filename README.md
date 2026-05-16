# Reverse Polish (Postfix) Calculator

Simple command-line Reverse Polish Notation (postfix) calculator written in C.

## Description
- Reads a postfix expression (tokens separated by spaces) from standard input and evaluates it using a stack.
- Supports integer arithmetic with the operators: `+`, `-`, `*`, `/`.

## Build
Compile with GCC:

```
gcc main.c -o rpn
```

## Run

```
./rpn
```

Then enter a postfix expression when prompted. Example input (with spaces):

```
5 23 * 2 +
```

This computes `(5 * 23) + 2 = 117`.

## Usage notes
- Tokens must be separated by spaces (e.g. `12 3 +`).
- Only integer arithmetic is supported; division uses integer division.
- Stack capacity is 100 elements (see `main.c`).

## Files
- `main.c`: C source implementing the calculator.
- `README.md`: This file.


## License
MIT Ravindu Karunarathne
