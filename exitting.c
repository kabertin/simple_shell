#include "shell.h"

/**
 * _exitting - exit statue
 * @command: command
 * @in: input
 * @av: argument vector
 * @count: count
 * Return: void
 */
void _exitting(char **command, char *in, char **av, int count)
{
	int st, a = 0;

	if (command[1] == NULL)
	{
		free(in);
		free(command);
		exit(EXIT_SUCCESS);
	}
	while (command[1][a])
	{
		if (_alpha(command[1][a++]) != 0)
		{
			_prerror(av, count, command);
			break;
		}
		else
		{
			st = _atoi(command[1]);
			free(in);
			free(command);
			exit(st);
		}
	}
}
