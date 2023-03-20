# C - Preprocessor

The aim is to learn how to use macros and most common predefined macros, and how to include guarding your header files.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C:

| Filename                  | Description
| ------------------------- | ---------------------------------------------------------------------------------------------------- 
| `0-object_like_macro.h`   | defines a macro named `SIZE` as an abbreviation for the token 1024.
| `1-pi.h`                  | defines a macro named `PI` as an abbreviation for the token 3.14159265359.
| `2-main.c`                | prints the name of the file it was compiled from, followed by a new line.
| `3-function_like_macro.h` | defines a function-like macro `ABS(x)` that computes the absolute value of a number x.
| `4-sum.h`                 | defines a function-like macro `SUM(x, y)` that computes the sum of the numbers x and y.
