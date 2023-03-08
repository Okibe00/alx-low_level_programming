#include "main.h"
#include <stddef.h>
/**
* _strpbrk - search a string for set of bytes
* @s: str
* @accept: substr
* description: search for sustr
* Return: ponter to s that matchs str
*/


char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int len1 = _strlen(s);
	int len2 = _strlen(accept);

	while (i < len1)
	{
		while (j < len2)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}





/**
* _strlen - print len of str
* @c: str to get len
* description: print len
* Return: len
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
