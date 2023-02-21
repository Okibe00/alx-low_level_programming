#include "main.h"
/**
* main - prints the text _putchar
* Return: 0 (success)
*/
int main(void)
{
	int n = 0;
	char c[] = "_putchar";

	while (n < 8)
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');
	return (0);
}
