#include <stdio.h>
/**
 * print_to_98 - check the code
 * @n: int to count to 98
 * Return: Always 0.
 */
void  print_to_98(int n)
{
	int c = n;

	if (c < 98)
	{
		while (c <= 98)
		{
			if (c == 98)
			{
				printf("%d", c);
				break;
			}
			printf("%d, ", c);
			c++;
		}
	}
	else if (c > 98)
	{
		while (c >= 98)
		{
			if (c == 98)
			{
				printf("%d", c);
				break;
			}
			printf("%d, ", c);
			c--;
		}
	}
	else
	{
		printf("%d", c);
	}
	printf("\n");
}
