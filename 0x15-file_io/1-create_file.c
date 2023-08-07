#include "main.h"
/**
  * create_file - creates a file
  * @filename: name of file
  * @text_content: content to write in file
  * description: creates a file and writes into it
  * Return: 1(success) -1(failure)
*/

int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t bytes_wrtn;

	if (filename == NULL)
		return (-1);
	len = _strlen_recursion(text_content);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytes_wrtn = write(fd, text_content, len);
	if (bytes_wrtn == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

/**
 * _strlen_recursion - gets the length of a string
 * @s: string
 * description: gets the length of a string using recursion
 * Return: string length
*/


int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (s == NULL)
	{
		return (len);
	}
	if (*s != '\0')
	{
		len++;
		return (len + _strlen_recursion(s + 1));
	}
	else
	{
		return (len);
	}
}
