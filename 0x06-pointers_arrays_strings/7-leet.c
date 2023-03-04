/**
* leet - encodes string to 1337
* @str: string to encode
* description: encodes a string to 1337
*/


char *leet(char *str)
{
	int i = 0;

	while (str[i] !='\0')
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '0' + 4;
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '0' + 3;
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = '0' + 7;
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '0' + 1;
		}
		else
		{
			str[i] = str[i];
		}
		i++;
	}
	return (str);
}
