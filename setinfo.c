#include "shell.h"

/**
 * _set_info - sets info struct
 * @info: struct address
 * @av: argument vector
 * Return: void
 */
void _set_info(info_t *info, char **av)
{
	int a = 0;

	info->fname = av[0];
	if (info->arg)
	{
		info->av = str_word(info->arg, " \t");
		if (!info->av)
		{
			info->av = malloc(sizeof(char *) * 2);
			if (info->av)
			{
				info->av[0] = _strdup(info->av);
				info->av[1] = NULL;
			}
		}
	for (a = 0; info->av && info->av[a]; a++)
	;
replace_alias(info);
replace_variables(info);
	}
}
