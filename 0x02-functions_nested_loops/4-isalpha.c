#include "main.h"

/**
 * _isalpha - prints 1 or 0.
 * @c: The character to check
 * description: checks if c is an alphabet
 * Return: 0 (success).
 */

int _isalpha(int c)
{
	int n = 65;
	int res = 0;

	while (n < 123)
	{
		if (n == c)
		{
			res = 1;
			break;
		}
		if (n == 90)
		{
			n = 96;
		}
		n++;
	}
	return (res);
}
