#ifndef _BITWISE_
#define _BITWISE_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int set_bit(unsigned long int *n, unsigned int index);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);
unsigned int binary_to_uint(const char *b);
int _putchar(char c);
#endif
