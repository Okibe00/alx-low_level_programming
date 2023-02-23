#include "main.h"

/**
 * print_diagonal - check the code
 * @n: num of times to print
 * description: print \ n num of times
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
