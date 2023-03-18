# C - Hello, World

The aim is to learn about C compilation process and how to use output functions.

# Technologies

tested on Ubuntu 20.04 LTS.

C files are complied using gcc 9.4.0.

C files are written according to the GNU C89 dialect, which includes some extensions beyond the standard C89.

# Files

All of the following files are programs written in C or shell except `betty`:

| Filename         | Description
|:----------------:| -------------------------------------------------------------------------------------------------------------
| `0-preprocessor` | this shell script runs a C file through the preprocessor and save the result into another file.
| `1-compiler`     | this shell script compiles a C file but does not link.
| `2-assembler`    | this shell script generates the assembly code of a C code and save it in an output file.
| `3-name`         | this shell script compiles a C file and creates an executable named cisfun.
| `4-puts.c`       | prints exactly a string followed by a new line using puts.
| `5-printf.c`     | prints exactly a string followed by a new line using printf.
| `6-size.c`       | prints the size of various types on the computer it is compiled and run on using `gcc 6-size.c -m32 -o size32 2> /tmp/32` and `gcc 6-size.c -m64 -o size64 2> /tmp/64`
| `100-intel`      | this shell script generates the assembly code (Intel syntax) of a C code and save it in an output file.
| `101-quote.c`    | prints exactly a string followed by a new line to the standard error using fputs.
| `betty`          | tests C coding style for Holberton School.
