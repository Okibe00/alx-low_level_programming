#include "main.h"
/**
  * string_nconcat - concatenates n bytes of a  string
  * @s1: first string
  * @s2: secnd string
  * @n: bytes to concat
  * description: concatenates n bytes from a string
  * Return: pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i;

	i = 0;
	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);
	if (n >= len2)
	{
		ptr = malloc(len1 + len2 + 1);
	}
	else
	{
		ptr = malloc(len1 + n + 1);
	}
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (*s1 != '\0')
		{
			ptr[i] = *s1;
			i++;
			s1++;
		}
	}
	if (s2 != NULL)
	{
		while (n > 0 && *s2 != '\0')
		{
			ptr[i] = *s2;
			i++;
			s2++;
			n--;
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


unsigned int _strlen_recursion(char *s)
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
