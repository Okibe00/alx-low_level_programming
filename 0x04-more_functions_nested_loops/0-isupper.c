/**
 * _isupper - check the input is its an uppercase.
 * @c: int to check
 * description: checks and prints 1 or 0
 * Return: Always 0.
 */

int _isupper(int c)
{
	int n = 65;
	int res;

	while (n < 91)
	{
		if (n == c)
		{
			res = 1;
			break;
		}
		else
		{
			res = 0;
			n++;
		}
	}
	return (res);
}
