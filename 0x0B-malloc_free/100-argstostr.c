#include "main.h"

/**
  * argstostr - concates command line args
  * @ac: argument count
  * @av: arguemnt vector
  * description: concatenates the command line arguments passed
  * Return: pointer to new mem location containg args
*/

char *argstostr(int ac, char **av)
{
	char *ptr, *temp;
	int i, len;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 1;
	ptr = _strdup(av[0]);
	while (i < ac)
	{
		temp = ptr;
		ptr = str_concat(temp, av[i]);
		free(temp);
		i++;
	}
	len = _strlen_recursion(ptr);
	ptr[len] = '\0';
	return (ptr);
}


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
	ptr = malloc(sizeof(char) * len1 + len2 + 2);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
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
		while (*s2)
		{
			ptr[i] = *s2;
			i++;
			s2++;
		}
	}
	ptr[i] = '\n';
	ptr[i + 1] = '\0';
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
	ptr = malloc(sizeof(char) * len + 2);
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
	ptr[i] = '\n';
	ptr[i + 1] = '\0';
	return (ptr);
}

