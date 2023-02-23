/**
 * _isdigit - check the code
 * @c: int to check
 * description: check input c for digit
 * Return: Always 0.
 */

int _isdigit(int c)
{
	int n = 48;
	int res;

	while (n < 58)
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
