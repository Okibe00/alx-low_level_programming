#include "main.h"

/**
 * _sqrt_recursion - returns natural root of a number
 * @n: number
 * description: calculates the natural sqare root of a number recursively
 * Return: num or -1
*/


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (guessrt(n, 1));
}


/**
 * guessrt - make a guess for square root
 * @num: number
 * @guess: guess
 * description: makes a guess of the square root
 * Return: guess
*/


int guessrt(int num, int guess)
{
	if (guess * guess == num)
	{
		return (guess);
	}
	if (guess * guess > num)
	{
		return (-1);
	}
	return (guessrt(num, guess + 1));
}


