#include "main.h"
#include <stddef.h>
/**
* _strstr - print substr
* @haystack: str to search
* @needle: str
* description: function locats a substr
* Return: pointer or null
*/


char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int len1  = _strlen(haystack);
	int len2 = _strlen(needle);
	int flag = 0;

	while (i < len1)
	{
		if (haystack[i] == needle[j])
		{
			flag = 1;

			while (j < len2)
			{
				if (haystack[i + j] != needle[j])
				{
					flag = 0;
					break;
				}
				j++;
			}
			j = 0;
		}
		if (flag == 1)
		{
			return (haystack + i);
		}
		i++;
	}
	return (NULL);
}





/**
* _strlen - print substr
* @c: str
* description: function locats a substr
* Return: pointer or null
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
