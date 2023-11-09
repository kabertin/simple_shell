#include "shell.h"

/**
 * _myenv - get the environment
 * @info: arg
 * Return: 0
 */

int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}
