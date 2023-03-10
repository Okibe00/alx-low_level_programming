/**
* _pow_recursion - print exp
* @x: num
* @y: num
* description: print exponents
* Return: exponent of n
*/


int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
