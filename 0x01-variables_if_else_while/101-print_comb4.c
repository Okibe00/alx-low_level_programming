#include <stdio.h>

/**
* main - entry point
* description: print combination of two digit
* Return: 0 (success)
*/

int main(void)
{
	int n = 0;
	int j = 0;
	int k = 0;
	int b[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

	for (n = 0; n < 10; n++)
	{
		for (j = n + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(b[n]);
				putchar(b[j]);
				putchar(b[k]);
				if ((b[n] == '7' && b[j] == '8'))
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
