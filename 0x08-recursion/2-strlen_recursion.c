/**
* _strlen_recursion - print num
* @s: str
* description: print len
* Return: len
*/

int _strlen_recursion(char *s)
{
	int  n = 0;

	if (*s != '\0')
	{
		n++;
		s++;
		return (n + _strlen_recursion(s));
	}
	return (n);
}
