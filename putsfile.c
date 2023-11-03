#include "shell.h"

/**
 * _putsfile - function printing a string
 * @c: sstring printed
 * @fd: filedescriptor
 * Return: number of characters
 */
int _putsfile(char *c, int fd)
{
	int a = 0;

	if (!c)
		return (0);
	while (*c)
	{
		a = a + _putsfile(*c++, fd);
	}
	return (a);
}
