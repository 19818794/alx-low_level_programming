#ifndef MAIN_H
#define MAIN_H

/*
 * Desc: header file containing all libraries, prototypes, and object-like
 * macros used by `0x15. C - File I/O` project.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
