#include "main.h"
/**
  * str_concat - concatenates string
  * @s1: first string
  * @s2: secnd string
  * description: concatenates two string
  * Return: pointer to new string
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, i;

	i = 0;
	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	ptr = malloc(sizeof(char) * len1 + len2 + 1);
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1)
		{
			ptr[i] = *s1;
			i++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (*s2 && s2 != NULL)
		{
			ptr[i] = *s2;
			i++;
			s2++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
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
