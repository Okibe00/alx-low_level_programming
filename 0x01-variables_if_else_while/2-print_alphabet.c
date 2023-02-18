#include <stdio.h>

/**
* main - entry point
* description: print alphabets using putchar
* Return: 0 (success)
*/
int main(void)
{
	char l[] = "abcdefghijklmnopqrstuvwxyz";
	int n = 0;

	while (n < 26)
	{
		putchar(l[n]);
		n++;
	}
	putchar('\n');
	return (0);
}

