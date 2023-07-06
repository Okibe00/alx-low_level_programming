#include "main.h"

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 * description: checks if a string is palindrome or not
 * Return: 1 or 0
 */


int is_palindrome(char *s)
{
	int len, i;
	char *cpy;

	len = _strlen_recursion(s);
	cpy = (s + (len - 1));
	i = 1;
	if (s == NULL)
	{
		return (0);
	}
	return (find_p(s, cpy, i, len));
}


/**
 * find_p - checks for palindrome
 * @s: string to check
 * @cpy: cpy of str
 * @i: counter
 * @len: str length
 * description: checks if a string is palindrome or not
 * Return: 1 or 0
 */

int find_p(char *s, char *cpy, int i, int len)
{
	if (*s == *cpy && i == len / 2)
	{
		return (1);
	}
	if (*s != *cpy)
	{
		return (0);
	}
	if (len == 0)
	{
		return (1);
	}
	return (find_p(++s, --cpy, ++i, len));
}

/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * description: gets the length of a string using recursion
 * Return: string length
*/


int _strlen_recursion(char *s)
{
	int len;

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
