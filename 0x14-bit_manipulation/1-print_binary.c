#include "main.h"
/**
  * print_binary - prints binary representation of a number
  * @n: number
  * description: prints the binary representation of a number
  * Return: Nothing
*/

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print(n);
}

/**
  * print - prints binary representation of a number
  * @n: number
  * description: prints the binary representation of a number
  * Return: Nothing
*/
void print(unsigned long int n)
{
	unsigned long int i;

	i = 1;
	if (n == 0)
		return;
	print(n >> 1);
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
}
