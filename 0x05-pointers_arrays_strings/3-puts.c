#include "main.h"
/**
* _puts - prints str to stdout
* @str: string to print to stdout
* description: prints the string inputted to stdout
*/



void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
