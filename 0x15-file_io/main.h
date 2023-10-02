#ifndef _IO_
#define _IO_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#endif
