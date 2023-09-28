#ifndef __MAIN__H__
#define __MAIN__H__
#include <unistd.h>
#include <string.h>

unsigned int binary_to_uint(const char *b);
int power(int n, int expo);
void print_binary(unsigned long int n);
void _putchar(char c);
int get_bit(unsigned long n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
