#include "shell.h"

/**
 * read_buffer - reads a buffer
 * @info: arg
 * @buffer: buffer
 * @i: size
 * Return: p
 */
ssize_t read_buffer(info_t *info, char *buffer, size_t *a)
{
	ssize_t z = 0;

	if (*a)
		return (0);
	z = read(info->readfiledesc, buffer, READ_BUFFER_SIZE);
	if (z >= 0)
		*a = z;
	return (z);
}
