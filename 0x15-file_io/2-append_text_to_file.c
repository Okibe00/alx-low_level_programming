#include "main.h"
/**
  * append_text_to_file - appends text to end of file
  * @filename: name of file
  * @text_content: content to append
  * description: appends a text to the end of a file
  * Return: 1(success) 0(failure);
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_wrtn;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	len = _strlen_recursion(text_content);
	bytes_wrtn = write(fd, text_content, len);
	if (bytes_wrtn == -1)
	{
		close(fd);
		return (-1);
	}
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
