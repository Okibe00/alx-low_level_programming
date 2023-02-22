#include "main.h"
/**
 * print_last_digit - print last digit of an int
 * @d: int whose last digit will be printed;
 * Return: Always 0.
 */
int print_last_digit(int d)
{
	int res;

	if (d < 0)
	{
		res =  ((d % 10) * -1);
		_putchar('0' + res);
	}
	else
	{
		res = (d % 10);
		_putchar('0' + res);
	}
	return (res);
}
