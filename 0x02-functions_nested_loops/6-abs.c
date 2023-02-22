/**
 * _abs - prints abs value
 * @c: absolute value to be printed
 * Return: Always 0.
 */

int _abs(int c)
{
	int res;

	if (c >= 0)
		res = c;
	else
		res = (c * -1);
	return (res);
}
