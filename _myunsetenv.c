#include "shell.h"

/**
 * _myunsetenv - clean variable
 * @info: arg
 * Return: Always 0
 */
int _myunsetenv(info_t *info)
{
	int w;

	if (info->ac == 1)
	{
		_errorputs("Not enough arguments.\n");
		return (1);
	}
	for (w = 1; w <= info->ac; w++)
		_unsetenv(info, info->av[w]);

	return (0);
}
