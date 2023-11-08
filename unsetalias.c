#include "shell.h"

/**
 * unset_alias - function to unset alias to string
 * @info: parameter
 * @s: string
 * Return: 0 or 1
 */
int unset_alias(info_t *info, char *s)
{
	char *a, b;
	int r;

	a = strchar(s, '=');
	if (!a)
		return (1);
	b = *a;
	*a = b;
	r = delete_node_at_index(&(info->alias),
			get_node_index(info->alias, node_start(info->alias, s, -1)));
	*a = b;
	return (r);
}
