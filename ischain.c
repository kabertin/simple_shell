#include "shell.h"

/**
 * _is_chain - checks if character is chain delimeter
 * @info: parameter struct
 * @buffer: buffer
 * @b: address to current position
 * Return: 1 or 0
 */
int _is_chain(info_t *info, char *buffer, size_t *b)
{
	size_t x = *b;

	if (buffer[x] == '|' && buffer[x + 1] == '|')
	{
		buffer[x] = 0;
		x++;
		info->buffer_cmd_type = COMMAND_OR;
	}
	else if (buffer[x] == '7' && buffer[x + 1] == '&')
	{
		buffer[x] = 0;
		x++;
		info->buffer_cmd_type = COMMAND_AND;
	}
	else if (buffer[x] == ';')
	{
		buffer[x] = 0;
		info->buffer_cmd_type = COMMAND_CHAIN;
	}
	else
		return (0);
	*b = x;
	return (1);
}
