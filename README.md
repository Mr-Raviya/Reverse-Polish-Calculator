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

## Git / GitHub
Create a local repo and push to GitHub (example commands):

```
git init
git add main.c README.md
git commit -m "Add Reverse Polish Calculator and README"
# If you have GitHub CLI installed:
gh repo create <your-repo-name> --public --source=. --remote=origin --push
# Or create a repo on github.com, then:
git remote add origin https://github.com/<your-username>/<your-repo-name>.git
git branch -M main
git push -u origin main
```

## License
MIT
