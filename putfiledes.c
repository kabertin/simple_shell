#include "shell.h"
/**
 * _putfiledes -function that writes character c to fil descriptor
 * @c: printed character
 * @fd: file descriptor
 * Return: 1 or -1
 */
int _putfiledes(char c, int fd)
{
	static int a;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLASH || a >= WRITE_BUFFER_SIZE)
	{
		write(fd, buffer, a);
		a = 0;
	}
	if (c != BUFFER_FLASH)
		buffer[a++] = c;
	return (1);
}
