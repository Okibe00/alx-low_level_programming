/**
* _strlen  - prints the num of elem of a str to stdout
* @s: The str to print
* description: The function below prints the number of elements in a str
* Return: n (success)
*/


int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
