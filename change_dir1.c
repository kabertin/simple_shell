#include "shell.h"

/**
 * change_dir1 - changes dir
 * @info: arg
 * Return: 0
 */

int change_dir1(info_t *info)
{
	char **array;

	array = info->av;
	_puts("help call works. Function not yet implemented \n");
	if (0)
		_puts(*array);
	return (0);
}
