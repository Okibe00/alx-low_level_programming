/**
* _strncpy - copies str
* @dest: destination
* @src: source
* @n: num of bytes to cpy
* description: copies a str,works exactly like strncpy
* Return: dest
*/


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	dest = ptr;
	return (dest);
}
