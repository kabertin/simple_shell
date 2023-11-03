#include "shell.h"

/**
 * duplicate_chars - function that makes a copy of characters
 * @paths: path of a string
 * @begin: starting point
 * @end: ending point
 * Return: pointer to the new buffer
 */
char *duplicate_chars(char *paths, int begin, int end)
{
	static char buffer[1024];
	int a = 0, b = 0;

	for (b = 0, a = begin; a < end; a++)
		if (paths[a] != ':')
			buffer[b++] = paths[a];
	buffer[b] = 0;
	return (buffer);
}
