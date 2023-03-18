# C - malloc, free

The aim is to learn about automatic and dynamic allocation in C language, and how to use valgrind to check for a memory leak.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C:

| Filename           | Description
| ------------------ | ------------------------------------------------------------------------------------------------------------- 
| `0-create_array.c` | creates an array of chars, and initializes it with a specific char.
| `1-strdup.c`       | returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
| `2-str_concat.c`   | concatenates two strings.
| `3-alloc_grid.c`   | returns a pointer to a 2 dimensional array of integers.
| `4-free_grid.c`    | frees a 2 dimensional grid previously created by your `alloc_grid` function.
| `100-argstostr.c`  | concatenates all the arguments of your program.
| `101-strtow.c`     | splits a string into words.
| `main.h`           | header file includes the prototypes of all functions.
| `_putchar.c`       | writes a character to stdout (we will not push it every time. Kindly check project `0x02-functions_nested_loops`).
