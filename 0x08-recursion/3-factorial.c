#include "main.h"

/**
  * factorial - gets the factorial of a num
  * @n: number
  * description: gets the factorial of a number using recursion
  * Return: factorial
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{

		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

