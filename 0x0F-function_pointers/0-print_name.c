#include "function_pointers.h"

/**
  * print_name - prints the name passed as arg
  * @name: name to print
  * @f: pointer to function
  * description: prints a name
  * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
