#include "shell.h"

/**
 * _unsetenv - unset env var
 * @var: string
 * @info: arg
 * Return: success 1 and 0 failure
 */
int _unsetenv(info_t *info, char *str)
{
	list_t *n = info->env;
	size_t i = 0;
	char *r;

	if (!n || !str)
		return (0);

	while (n)
	{
		r = begin_with(n->str, str);
		if (r && *r == '=')
		{
			info->env_new = node_ind_del(&(info->env), i);
			i = 0;
			n = info->env;
			continue;
		}
		n = n->next;
		i++;
	}
	return (info->env_new);
}
