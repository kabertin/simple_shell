#include "shell.h"

/**
 * _getenv - get the variable environ
 * @info: arg
 * @call: the name of the env
 * Return: env
 */

char *_getenv(info_t *info, const char *call)
{
	list_t *m = info->env;
	char *x;

	while (m)
	{
		x = begin_with(m->str, call);
		if (x && *x)
			return (x);
		m = m->next;
	}
	return (NULL);
}
