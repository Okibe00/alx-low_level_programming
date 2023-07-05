#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string to print
 * description: prints a string recursively
 * return: null on error and non neg
 *
*/
void _puts_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
