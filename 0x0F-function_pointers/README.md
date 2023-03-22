# C - Function pointers

The aim is to learn about function pointers, what they are, how to use them, what they hold, and where they point to in virtual memory.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C:

| Filename              | Description
| --------------------- | ---------------------------------------------------------------------------------------------------------- 
| `0-print_name.c`      | prints a name.
| `1-array_iterator.c`  | executes a function given as a parameter on each element of an array.
| `2-int_index.c`       | searches for an integer.
| `function_pointers.h` | contains prototypes of all functions for `0-print_name.c`, `1-array_iterator.c`, `2-int_index.c`.
| `3-main.c`            | performs simple operations.
| `3-op_functions.c`    | contains 5 functions for the 5 operations.
| `3-get_op_func.c`     | contains the function that selects the correct function to perform the operation asked by the user.
| `3-calc.h`            | contains all the function prototypes and data structures used by the program.
