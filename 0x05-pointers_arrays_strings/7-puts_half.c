#include "main.h"
/**
* puts_half - prints n number of items from a str
* @str: str to print xters from
* description: prints half of a string
*/


void puts_half(char *str)
{
	int num = _strlen(str);
	int l = num - 1;
	int m = l / 2;
	int t = num / 2;

	if ((num % 2) != 0)
	{
		while (m < num)
		{
			_putchar(str[m]);
			m++;
		}
	}
	else
	{
		while (t < num)
		{
			_putchar(*(str + t));
			t++;
		}
	}
	_putchar('\n');
}

/**
* _strlen - prints len of string
* @c: character to get len of
* description: print length of string
* Return: n
*/

int _strlen(char *c)
{
	int n = 0;

	while (*c != '\0')
	{
		n++;
		c++;
	}
	return (n);
}
