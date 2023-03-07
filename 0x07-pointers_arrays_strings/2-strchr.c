#include <stddef.h>
/**
* _strchr - locates a char in a str
* @s: src string
* @c: char
* description: locates a char in a str and return a pointer to that locale
* Return: s
*/



char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	else
		return (NULL);
}
