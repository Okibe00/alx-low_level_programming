/**
* _strcmp - cpmpares two str
* @s1: first str
* @s2: second str
* description: compares two str
* Return: res
*/


int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			res = s1[i];
		}
		else if (s2[i] > s1[i])
		{
			res = -s2[i];

		}
		else
		{
			res = 0;
		}
		i++;
	}
	return (res);
}
