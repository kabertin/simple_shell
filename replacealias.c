#include "shell.h"

/**
 * _replace_alias - function replacing aliases in tokenised string
 * @info: parameter struct
 * Return: 1 or 0
 */

int _replace_alias(info_t *info)
{
	int a;
	list_t *index;
	char *b;

	for (a = 0; a < 10; a++)
	{
		index = node_start(info->alias, info->av[0], '=');
		if (!index)
			return (0);
		free(info->av[0]);
		b = strchar(index->string, '=');
		if (!b)
			return (0);
		b = _strdup(b + 1);
		if (!b)
			return (0);
		info->av[0] = b;
	}
	return (1);
}
