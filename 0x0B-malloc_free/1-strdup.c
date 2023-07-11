#include "main.h"



/**
  * _strdup - copies a string to new memory location
  * @str: string to allocate space for
  * description: allocates space and  copies the string new space
  * Return: pointer to new string
 */


char *_strdup(char *str)
{
	char *ptr;
	int len, i;

	i = 0;
	len = _strlen_recursion(str);
	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		ptr[i] = *str;
		i++;
		str++;
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
