#include "main.h"
/**
* print_alphabet - prints the alphabets
* Return: 0 (success)
*/

void print_alphabet(void)
{
	int n = 97;

	while (n < 123)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
