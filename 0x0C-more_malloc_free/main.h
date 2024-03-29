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
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memcpy(void *dest, void *src, size_t n);
#endif
