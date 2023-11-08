#include "shell.h"

/**
 * input_buffer - buffer for commands
 * @info: arg
 * @buffer: buffer address
 * @length: address of length variable
 * Return: integer
 */

ssize_t input_buffer(info_t *info, char **buffer, size_t *length)
{
	ssize_t x = 0;
	size_t pv = 0;

	if (!*length)
	{
		free(*buffer);
		*buffer = NULL;
		signal(SIGINT, sigintHandler);
#if USE_GETLINE
		x = getline(buffer, &pv, stdin);
#else
		x = _getline(info, buffer, &pv);
#endif
		if (x > 0)
		{
			if ((*buffer)[x - 1] == '\n')
			{
				(*buffer)[x - 1] = '\0';
				x--;
			}
			info->line_cf = 1;
			delete_comment(*buffer);
			build_histlist(info, *buffer, info->history_c);
			{
				*length = x;
				info->buffer_cmd = buffer;
			}
		}
	}
	return (x);
}

