#include "shell.h"

/**
 * _mysetenv - for initialization
 * @info: arg
 * Return: 0
 */

int _mysetenv(info_t *info)
{
	if (info->ac != 3)
	{
		_errorputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->av[1], info->av[2]))
		return (0);
	return (1);
}
