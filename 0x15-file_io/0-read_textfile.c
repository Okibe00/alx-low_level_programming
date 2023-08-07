#include "main.h"

/**
  * read_textfile - reads and prints text file
  * @filename: file to read from
  * @letters: number of characters to read
  * description: reads and prints characters to stdout
  * Return: number of bytes
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, bytes_wrtn;
	char *buff;
	int fd;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	bytes_read = read(fd, buff, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	bytes_wrtn = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_wrtn == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	if (bytes_read != bytes_wrtn)
	{
		close(fd);
		free(buff);
		return (0);
	}
		close(fd);
		free(buff);
		return (bytes_read);
}
