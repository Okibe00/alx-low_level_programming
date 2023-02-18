#include <stdio.h>

/**
* main - entry point
* description: prints single digit numbers starting from 0
* Return: 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
