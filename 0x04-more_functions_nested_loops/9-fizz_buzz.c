#include <stdio.h>
/**
 * main - entry point
 * description: prints fizzbuzz to stdout
 * Return: Always 0.
 */


int main(void)
{
		int n = 1;

	while (n <= 100)
	{
		if (n == 100)
		{
			printf("Buzz");
			break;
		}
		if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (((n % 3) == 0) && ((n % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%i ", n);
		}
		n++;
	}
	printf("\n");
	return (0);

}
