#include "shell.h"

/**
 * _check_chain - function checking if chaining should continu
 * @info: parameter
 * @buffer: buffer
 * @b: pointer to current postition
 * @a: starting point
 * @length: length of buffer
 */
void _check_chain(info *info, char *buffer, size_t *b, size_t a, size_t length)
{
	size_t x = *b;

	if (info->buffer_cmd_type == COMMAND_AND)
	{
		if (info->status)
		{
			buffer[a] = 0;
			x = lenght;
		}
	}
	if (info->buffer_cmd_type == COMMAND_OR)
	{
		if (!info->stat)
		{
			buffer[a] = 0;
			x = length;
		}
	}
	*b = x;
}
