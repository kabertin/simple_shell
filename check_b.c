#include "shell.h"

/**
 * built_in_check - check builtin
 * @command:command to check
 * Return: 0 Succes -1 Fail
 */

int built_in_check(char **command)
{
	builtin func[] = {
		{"cd", NULL},
		{"help", NULL},
		{"echo", NULL},
		{"history", NULL},
		{NULL, NULL}};
	int i = 0;

	if (*command == NULL)
	{
		return (-1);
	}

	while ((func + i)->command)
	{
		if (_strcmp(command[0], (func + i)->command) == 0)
			return (0);
		i++;
	}
	return (-1);
}
