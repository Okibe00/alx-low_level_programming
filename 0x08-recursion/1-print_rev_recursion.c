#include "main.h"
/**
* _print_rev_recursion - prints a string in reverse
* @s: string
* description: prints str in reverse
*/


void _print_rev_recursion(char *s)
{
	int len  = _strlen_recursion(s) - 1;

	++s;
	if (*s != s[len - 1])
	{
		_print_rev_recursion(s);
	}
	_putchar(*s);

}




/**
*_strlen_recursion - prints len of str
* @s: string
* description: prints len of str
* Return: len
*/


int _strlen_recursion(char *s)
{
	int n = 0;

	n++;

	if (*s != '\0')
	{
		s++;
		return (n + _strlen_recursion(s));
	}
	return (n);
}
