#include "main.h"

/**
  * binary_to_uint - converts a binary number to decimal
  * @b: characters
  * description: converts a string of 1's and 0's to decimal
  * Return: number in base 10
*/


unsigned int binary_to_uint(const char *b)
{
	int len, exp, sum, base, num;

	exp = 0;
	sum = 0;
	base = 2;
	if (b == NULL)
		return (0);
	len = _strlen_recursion(b);
	while (len > 0)
	{

		num = char_to_int(b[len - 1]);
		if (num >= 0)
			sum += num * _pow_recursion(base, exp);
		else
			return (0);
		exp++;
		len--;
	}
	return (sum);
}


/**
  * char_to_int - concerts a string to int
  * @c: characters
  * description: converts a string to int
  * Return: converted string
*/
int char_to_int(char c)
{
	if ((c) < 48 || (c) > 57)
		return (-1);
	return (c - '0');
}

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

/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * description: gets the length of a string using recursion
 * Return: string length
*/


int  _strlen_recursion(const char *s)
{
	unsigned int len;

	len = 0;
	if (s == NULL)
	{
		return (len);
	}
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	else
	{
		return (len);
	}
}
