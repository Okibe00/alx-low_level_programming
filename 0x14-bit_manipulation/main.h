#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdio.h>
unsigned int binary_to_uint(const char *b);
int  _pow_recursion(int x, int y);
int  _strlen_recursion(const char *s);
int char_to_int(char c);
void print_binary(unsigned long int n);
int _putchar(char c);
void print(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int check_bit(unsigned long int n, int index);
int get_endianness(void);
#endif
