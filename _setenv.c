#include "shell.h"

/**
 * _setenv - new var init
 * @info: arg
 * @m: the string env var property
 * @n: the string env var value
 *  Return: Always 0
 */
int _setenv(info_t *info, char *m, char *n)
{
	char *z;
	char *buffer = NULL;
	list_t *tr;

	if (!m || !n)
		return (0);

	buffer = malloc(_strlen(m) + _strlen(n) + 2);
	if (!buffer)
		return (1);
	_strcpy(buffer, m);
	_string_conc(buffer, "=");
	_string_conc(buffer, n);
	tr = info->env;
	while (tr)
	{
		z = begin_with(node->str, m);
		if (z && *z == '=')
		{
			free(tr->str);
			tr->str = buffer;
			info->env_new = 1;
			return (0);
		}
		tr = tr->next;
	}
	node_end_app(&(info->env), buffer, 0);
	free(buffer);
	info->env_new = 1;
	return (0);
}
