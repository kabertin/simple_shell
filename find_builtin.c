#include "shell.h"

/**
 * find_builtin - to fetch the builtin cmd
 * @info: info arg
 * Return: -1 no cmd, 0 cmd is there 1 cmd fail, -2 cmd close the fx
 */

int find_builtin(info_t *info)
{
	int builtin_val = -1;
	int i;
	builtin_table bu_table[] = {
		{"history", _myhistory},
		{"exit", _myexit},
		{"env", _myenv},
		{"setenv", _mysetenv},
		{"help", _myhelp},
		{"cd", _mycd},
		{"unsetenv", _myunsetenv},
		{"alias", _myalias},
		{NULL, NULL}
	};

	for (i = 0; bu_table[i].bu_cmd; i++)
		if (_strcmp(info->av[0], bu_table[i].bu_cmd) == 0)
		{
			info->line_c++;
			builtin_val = bu_table[i].func(info);
			break;
		}
	return (builtin_val);
}
