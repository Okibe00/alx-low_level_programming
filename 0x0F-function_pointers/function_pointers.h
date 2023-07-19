#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER
#include <stddef.h>
void print_name(char *name, void (*f)(char *));
#endif

