#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
  * _close - closes a  file descriptor
  * @fd: file descriptor
  * description: closes the specified file descriptot in fd
  * Return: Nothing
*/
void _close(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen_recursion(char *s);
int append_text_to_file(const char *filename, char *text_content);
void file_cpy(char *src, char *dest);
int _read(int fd, char **buff);
/*void _close(int fd);*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_memcpy(void *dest, void *src, size_t n);
#endif
