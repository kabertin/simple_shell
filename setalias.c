#include "shell.h"

/**
 * set_alias - function setting alias to string
 * @info: paramete
 * @s: string
 * Return: 1 or 0
 */
int set_alias(info_t *info, char *s)
{
	char *x;

	x = stchar(s, '=');
	if (!x)
		return (1);
	if (!*++x)
		return (unset_alias(info, s));
	unset_alias(info, s);
	return (add_node_end(&(info->alias), s, 0) == NULL);
}
