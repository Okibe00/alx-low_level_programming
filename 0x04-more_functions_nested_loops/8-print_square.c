#include "main.h"
/**
 * print_square - prints squares to stdout
 * description: prints squares
 * @size: width and height of square
 * Return: Always 0.
 */

void print_square(int size)
{
	int n = size;
	int k = size;

	while (n > 0)
	{
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		k = size;
		n--;
	}
	_putchar('\n');
}
