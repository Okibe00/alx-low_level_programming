/**
 * string_toupper - changes str to uppercase
 * @str: str to convert to uppper
 * description: converts str to upper
 * Return: Always str
 */


char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
