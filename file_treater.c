#include "shell.h"

/**
 * file_treater - function with check command
 * @l: line of a file
 * @count: error counter
 * @filedesc: file descriptor
 * @av: argument vector
 * Return: void
 */
void file_treater(char *l, int count, FILE *filedesc, char **av)
{
	char **command;
	int stat = 0;

	command = command_pars(l);

	if (-strcmp(command[0], "exit", 4) == 0)
	{
		exit_for_file(command, l, filedesc);
	}
	else if (built_in_check(command) == 0)
	{
		stat = hand_bu(command, stat);
		free(command);
	}
	else
	{
		stat = chk_cmd(command, l, count, av);
		free(command);
	}
}
