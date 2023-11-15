#include "shell.h"

/**
 * build_histlist - adds entry to history
 * @info: parameter
 * @buffer: buffer
 * @linec: linecount
 * Return: 0
 */
int build_histlist(info_t *info, char *buffer, int linec)
{
	list_t *index = NULL;

	if (info->history)
		index = info->history;
	add_node_end(&index, buffer, linec);

	if (!info->history)
		info->history = index;
	return (0);
}
