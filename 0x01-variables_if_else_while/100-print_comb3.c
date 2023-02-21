#include <stdio.h>

/**
* main - entry point
* description: print combination of two digit
* Return: 0 (success)
*/

int main(void)
{
		int n = 0;
		int k = 0;
		int a[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

		for (n = 0; n < 10; n++)
		{
			for (k = n + 1; k < 10; k++)
			{
				putchar(a[n]);
				putchar(a[k]);
				if (a[n] == '8' && a[k] == '9')
				{
					break;
				}
				putchar(44);
				putchar(32);
			}
		}
		putchar('\n');
	return (0);
}
