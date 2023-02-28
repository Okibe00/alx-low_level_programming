#include "main.h"
/**
* _strlen - prints a string in reverse
* @s: string to print to stdout
* description: prints length of a string
* Return:  n
*/


int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

/**
* print_rev - prints string
* @s: string to print
*/
void print_rev(char *s)
{
	int i  = _strlen(s) - 1;

	while (i > 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
