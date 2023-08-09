#include "main.h"

/**
  * main - driver program
  * @argc: argument count
  * @argv: argument vector
  * description: copies the content of a file to another file.
  * Return: 0(success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_cpy(argv[1], argv[2]);
	return (0);
}
/**
  * file_cpy - copies file
  * @src: source file
  * @dest: destination file
  * description: copies the content of a file to another file.
  * Return: nothing
*/

void file_cpy(char *src, char *dest)
{
	int fd_src, fd_dest, bytes_r, bytes_w;
	char *buff;

	fd_dest = open(dest, O_WRONLY | O_TRUNC);
	if (fd_dest == -1)
		fd_dest = open(dest, O_WRONLY | O_CREAT,
				00400 | 00200 | 00040 | 00020 | 00004);
	fd_src = open(src, O_RDONLY);
	if (fd_src == -1)
	{
		_close(fd_dest);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	if (fd_dest == -1)
	{
		_close(fd_src);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		exit(99);
	}
	bytes_r = _read(fd_src, &buff);
	if (bytes_r == -1)
	{
		_close(fd_src);
		_close(fd_dest);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}
	bytes_w = write(fd_dest, buff, bytes_r);
	if (bytes_w != bytes_r)
	{
		_close(fd_src);
		_close(fd_dest);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", src);
		exit(99);
	}
	_close(fd_src);
	_close(fd_dest);
	free(buff);
}
/**
  * _read - read a file
  * @fd: file drescriptor
  * @buff: buffer for bytes read
  * description: reads from file descriptor 1024 bytes at a time to buff
  * Return: number of bytes read
*/
int _read(int fd, char **buff)
{
	int bytes_r, buff_size, old_size, count;
	char *buff_cpy;

	buff_size = 1024;
	count = 0;
	buff_cpy = malloc(sizeof(char) * buff_size);
	if (buff_cpy == NULL)
		return (-1);

	bytes_r = read(fd, buff_cpy, 1024);
	while (bytes_r > 0)
	{
		count += bytes_r;
		old_size = buff_size;
		buff_size += 1024;
		buff_cpy = _realloc(buff_cpy, old_size, buff_size);
		bytes_r = read(fd, (buff_cpy + count), 1024);
	}

	if (count == 0)
	{
		return (-1);
	}
	else
	{
		*buff = buff_cpy;
		(*buff)[count] = '\0';
		return (count);
	}
}

/**
  * _realloc - reallocates a memory block
  * @ptr: ptr to memory block
  * @old_size: size in byte of block of mem
  * @new_size: size in byte of new mem
  * description: reallocaates a memory block
  * Return: pointer to new memory location
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *mem;

	if ((old_size > new_size) && (ptr != NULL && new_size > 0))
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		_memcpy(mem, ptr, new_size);
	}
	else if ((old_size < new_size) && (ptr != NULL && new_size > 0))
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		_memcpy(mem, ptr, old_size);
	}
	else if (old_size == new_size)
	{
		return (ptr);
	}
	else if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		return (NULL);
	}
	free(ptr);
	return (mem);
}

/**
  * _memcpy - copies mem block
  * @dest: ptr to memory block
  * @src: source mem location
  * @n: number of bytes to copy
  * description: reallocaates a memory block
  * Return: pointer to new memory location
*/

void *_memcpy(void *dest, void *src, size_t n)
{
	unsigned char *dest_cpy, *src_cpy;
	size_t i;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest_cpy = dest;
	src_cpy = src;
	for (i = 0; i < n; i++)
	{
		dest_cpy[i] = src_cpy[i];
	}
	return (dest);
}
