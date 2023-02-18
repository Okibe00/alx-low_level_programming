#include <stdio.h>

/**
* main - entry point
* description: prints all hexadecimal num
* Return: 0 (success)
*/

int main(void)
{
	int n = 0;
	int k = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	while (k < 6)
	{
		putchar(97 + k);
		k++;
	}
	putchar('\n');
	return (0);
}
