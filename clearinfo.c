#include "shell.h"

/**
 * _clear_info - starts info_t struct
 * @info: struct address
 * Return: void
 */
void _clear_info(info_t *info)
{
	info->arg = NULL;
	info->av = NULL;
	info->path = NULL;
	info->ac = 0;
}

