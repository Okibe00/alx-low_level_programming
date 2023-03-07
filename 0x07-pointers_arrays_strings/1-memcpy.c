/**
* _memcpy - copies mem area
* @dest: dest mem area
* @src: srcc mem area
* @n: num of bytes to copy
* description: copies mem area and return pointer to new area
* Return: pointer to dest
*/




char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
