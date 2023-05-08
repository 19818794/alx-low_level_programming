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
#include <string.h>
#include <sys/stat.h>
#include <elf.h>

#define BUFFER_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void _display_error_p(char *message, char *var, int n);
void _display_error_i(char *message, int var, int n);
void _close_error(int var, char *buffer);
void _display_elf_header(char *filename);
void _print_elf_osabi(Elf64_Ehdr *elf_header);
void _print_elf_type(Elf64_Ehdr *elf_header, int endian_val);
void _print_elf_entry(Elf64_Ehdr *elf_header, int mode, int endian_val);

#endif
