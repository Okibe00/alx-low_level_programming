#include "main.h"
/**
* _strspn - gets the len of a prefix substring
* @s: src string
* @accept: substring
* description: gets the len of a prefix substr
* Return: len
*/




unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int len  = 0;
	int j = 0;
	int len1 = _strlen(s);
	int len2 = _strlen(accept);

	while (i < len1)
	{
		int match = 0;

		while (j < len2)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
			j++;
		}
		j = 0;

		if (match == 0)
		{
			break;
		}
		else if (match == 1)
		{
			len++;
		}
		i++;
	}
	return (len);
}




/**
* _strlen - print str len
* @c: str
* description: print len
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
