#include "shell.h"

/**
 * get_environ - brings out an array
 * @info: arg
 * Return: 0
 */
char **get_environ(info_t *info)
{
	if (!info->envir || info->env_new)
	{
		info->envir = list_to_str(info->env);
		info->env_new = 0;
	}
	return (info->envir);
}
