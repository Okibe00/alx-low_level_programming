#include "main.h"
/**
  * is_prime_number - check is a number is prime
  * @n: number
  * description: checks if a number is prime
  * Return: 1 or 0
*/


int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
	{
		return (0);
	}
	return (check_p(n, i));
}


/**
  * check_p - searches for factors
  * @n: number
  * @i: counter
  * description: checks if a number is prime
  * Return: 1 or 0
*/

int check_p(int n, int i)
{
	if (n % i == 0 && i < n / 2)
	{
		return (0);
	}
	if (i >= n / 2)
	{
		return (1);
	}
	return (check_p(n, i + 1));
}


