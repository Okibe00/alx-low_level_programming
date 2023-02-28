#include "main.h"
/**
* _strlen - prints a string in reverse
* @s: string to print to stdout
* description: prints length of a string
* Return:  n
*/


int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

/**
* rev_string - prints string
* @s: string to print
* description: prints str in reverse
*/
void rev_string(char *s)
{
	int i  = _strlen(s) - 1;
	int k = 0;
	int m = i / 2;
	char temp;


	while (i > m)
	{
		temp = s[k];
		s[k] = s[i];
		s[i] = temp;
		k++;
		i--;
	}
}
