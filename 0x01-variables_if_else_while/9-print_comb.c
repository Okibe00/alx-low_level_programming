#include <stdio.h>

/**
* main - entry point
* descriptio: prints sigle digits separated with commas
* Return: 0 (success)
*/
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		if (n == 9)
		{
			break;
		}
		putchar(44);
		putchar(32);
		n++;
	}
	putchar('\n');
	return (0);
}
