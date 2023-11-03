#include "shell.h"

/**
 * _errorputchar - function that writes character c to standard error
 * @c: printed character
 * Return: 1 or -1
 */
int _errorputchar(char c)
{
	static int a;
	static char buffer[WRITE_BUFFER_SIZE];

	if (c == BUFFER_FLASH || a >= WRITE_BUFFER_SIZE)
	{
		write(2, buffer, a);
		a = 0;
	}
	if (c != BUFFER_FLASH)
		buffer[a++] = c;
	return (1);
}
