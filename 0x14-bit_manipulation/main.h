#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int k);
int get_bit(unsigned long int k, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
