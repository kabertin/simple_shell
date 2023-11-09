#include "shell.h"

/**
 * populate_env_list - creation of a list
 * @info: arg
 * Return: Always 0
 */
int populate_env_list(info_t *info)
{
	list_t *n = NULL;
	size_t w;

	for (w = 0; envir[w]; w++)
		node_end_app(&n, envir[w], 0);
	info->env = node;
	return (0);
}
