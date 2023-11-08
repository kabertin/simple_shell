#include "shell.h"

/**
 * _free_info - function that frees info_t struct
 * @info: struct address
 * @a:parameter
 * Return: void
 */
void _free_info(info_t *info, int a)
{
	str_free(info->av);
	info->av = NULL;
	info->path = NULL;
	if (a)
	{
		if (!info->buffer_cmd)
			free(info->av);
		if (info->env)
			free_list(&(info->env));
		if (info->history)
			free_list(&(info->history));
		if (info->alias)
			free_list(&(info->alias));
		str_free(info->envir);
		info->environ = NULL;
		ptr_free((void **)info->buffer_cmd);
		if (info->readfiledesc > 2)
			close(info->readfiledesc);
		_putchar(BUFFER_FLASH);
	}
}

