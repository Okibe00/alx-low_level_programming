#include "main.h"

/**
 * print_numbers - prints num 0-9
 * description: prints num 0-9
 * Return: Always 0.
 */

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
