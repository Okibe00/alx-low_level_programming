#include <stdio.h>

/**
* main - entry point
* description: print alphabets using putchar
* Return: 0 (success)
*/
int main(void)
{
	char l[] = "abcdefghijklmnopqrstuvwxyz";
	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n = 0;
	int t = 0;

	while (n < 26)
	{
		putchar(l[n]);
		n++;
	}
	while (t < 26)
	{
		putchar(f[t]);
		t++;
	}
	putchar('\n');
	return (0);
}

