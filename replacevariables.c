#include "shell.h"

/**
 * _replace_variables - function replacing variables in tokenised string
 * @info: parameter
 * Return: 1 or 0
 */
int _replace_variables(info_t *info)
{
	int a = 0;
	list_t *index;

	for (a = 0; info->av[a]; a++)
	{
		if (info->av[a][0] != '$' || !info->av[a][1])
			continue;
		if (!_stringcmp(info->av[a], "$?"))
		{
			_replace_string(&(info->av[a]),
					_strdup(convert_number(info->stat, 10, 0)));
			continue;
		}
		if (!_stringcmp(info->av[a], "$$"))
		{
			_replace_string(&(info->av[a]),
					_strdup(convert_number(getpid(), 10, 0)));
			continue;
		}
		index = node_start(info->env, &info->av[a][1], '=');
		if (index)
		{
			_replace_string(&(info->av[a]),
					_strdup(_strchar(index->string, '=') + 1));
			continue;
		}
		_replace_string(&info->av[a], _strdup(""));
	}
	return (0);
}

