#include "shell.h"

/**
 * echo_ex - function executing echo cases
 * @stat: status
 * @command: command
 * Return: 0 or execute echo
 */
int echo_ex(char **command, int stat)
{
	char *p;
	unsigned int pp = getppid();

	if (strcmp(command[1], "$?", 2) == 0)
	{
		print_num_int(stat);
		PRINTER("\n");
	}
	else if (strcmp(command[1], "$$", 2) == 0)
	{
		print_num(pp);
		PRINTER("\n");
	}
	else if (strcmp(command[1], "$PATH", 5) == 0)
	{
		p = get_env("PATH");
		PRINTER(path);
		PRINTER("\n");
		free(path);
	}
	else
		return (printing_echo(command));
	return (1);
}
