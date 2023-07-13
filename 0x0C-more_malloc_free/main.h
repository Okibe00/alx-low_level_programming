#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
void _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
unsigned int _strlen_recursion(char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
#endif
