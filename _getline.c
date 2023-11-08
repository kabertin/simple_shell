#include "shell.h"

/**
 * _getline - take the next input
 * @info: arg
 * @ptr: address of pointer to buffer
 * @length: size of ptr buffer
 * Return: string
 */

int _getline(info_t *info, char **ptr, size_t *length)
{
	static char buffer[READ_BUFFER_SIZE];
	char *c;
	static size_t i;
	ssize_t x = 0;
	ssize_t y = 0;
	char *p = NULL, *op = NULL;
	size_t n;
	static size_t size;

	p = *ptr;
	if (p && length)
		y = *length;
	if (i == size)
		i = size = 0;

	x = read_buffer(info, buffer, &size);
	if (x == -1 || (x == 0 && size == 0))
		return (-1);

	c = _strchar(buffer + i, '\n');
	n = c ? 1 + (unsigned int)(c - buffer) : size;
	op = _realloc(p, y, y ? y + n : n + 1);
	if (!op)
		return (p ? free(p), -1 : -1);

	if (y)
		_strnconc(op, buffer + i, n - i);
	else
		_strcpy1(op, buffer + i, n - i + 1);

	y += n - i;
	i = n;
	p = op;

	if (length)
		*length = y;
	*ptr = p;
	return (y);
}
