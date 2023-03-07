/**
* _memset - fills mem with constant byte
* @s: mem location
* @b: constant byte
* @n: num of bytes
* description: fills meme loc  with constant bytes
* Return: pointer to meme loc
*/




char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	s[i] = '\0';
	return (s);
}
