#include "main.h"

/**
 * _pow_recursion - returns the x raised to y
 * @x: base
 * @y: exponent
 * description: returns the result of raising x to y
 * Return: pow
*/


int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
