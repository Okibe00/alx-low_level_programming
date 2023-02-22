#include "main.h"
/**
* print_alphabet_x10 - prints lowercase letters 10x
* Return: 0(success)
*/

void print_alphabet_x10(void)
{
	int n = 97;
	int i = 0;

	while (i < 10)
	{
		while (n < 123)
		{
			_putchar(n);
			n++;
		}
		n = 97;
		_putchar('\n');
		i++;
	}
}
