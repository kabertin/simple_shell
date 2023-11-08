#include "shell.h"

/**
 * get_input - get a line
 * @info: arg
 * Return: the size of buffer
 */

ssize_t get_input(info_t *info)
{
	char **rp = &(info->arg);
	char *p;
	ssize_t x = 0;
	static size_t i;
	static size_t length; 
	static size_t j;
	static char *buffer;

	_putchar(BUFFER_FLASH);
	x = input_buffer(info, &buffer, &length);
	if (r == -1)
		return (-1);
	if (length)
	{
		j = i;
		p = buffer + i;
		check_chain(info, buffer, &j, i, length);
		while (j < length)
		{
			if (is_chain(info, buffer, &j))
				break;
			j++;
		}
		i = j + 1;
		if (i >= length)
		{
			i = length = 0;
			info->buffer_cmd_type = COMMAND_NORMAL;
		}
		*rp = p;
		return (_strlen(p));
	}
	*rp = buffer;
	return(x);
}
