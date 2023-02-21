/**
 * _islower - entry point.
 * description: prints character c into stdout
 * @c: the character to print
 * Return: Always 0.
*/
int _islower(int c)
{
	int n = 97;
	int res = 0;

	while (n < 123)
	{
		if (n == c)
		{
			res = 1;
			break;
		}
		n++;
	}
	return (res);
}
