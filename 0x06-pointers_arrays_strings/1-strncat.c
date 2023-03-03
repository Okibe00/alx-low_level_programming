/**
* _strncat - concats n bytes from src
* @dest: destination str
* @src: src str
* @n: num of bytes to cpy
* Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	if (*dest == '\0')
	{
		while (*src != '\0' && i < n)
		{
			*dest = *src;
			dest++;
			src++;
			i++;
		}
	}
	*dest = '\0';
	dest = ptr;
	return (dest);
}
