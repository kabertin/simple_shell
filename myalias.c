#include "shell.h"

/**
 * myalias - man alias
 * @info: contains potential arguments
 * Return: 0
 */
int myalias(info_t *info)
{
	int a = 0;
	char *b = NULL;
	list_t *index = NULL;

	if (info->ac == 1)
	{
		index = info->alias;
		while (index)
		{
			_print_alias(index);
			index = index->next;
		}
		return (0);
	}
	for (a = 1, info->av[a]; a++)
	{
		b = strchar(info->av[a], '=');
		if (b)
			set_alias(info, info->av[a]);
		else
			_print_alias(node_start(info->alias, info->av[a], '='));
	}
	return (0);
}

