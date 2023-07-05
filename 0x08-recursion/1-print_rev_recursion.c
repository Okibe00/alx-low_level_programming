#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 * description: prints a stringin reverse using recursion
 * return: null on error and non neg
 *
*/
void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
	if (*s != '\0')
	{
		_putchar(*s);
	}
}
