#include "shell.h"

/**
 * _putchar - function that writes character c to stdout
 * @c: printed character
 * Return: 1 or 0
 */
int _putchar(char c)
{
	static int b;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLASH || b >= WRITE_BUFFER_SIZE)
	{
		write(1, buffer, b);
		b = 0;
	}
	if (c != BUFFER_FLASH)
		buffer[b++] = c;
	return (1);
}
