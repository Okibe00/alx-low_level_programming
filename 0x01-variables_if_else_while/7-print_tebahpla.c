#include <stdio.h>

/**
* main - entry point
* description: prints single digit numbers starting from 0
* Return: 0 (success)
*/
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
