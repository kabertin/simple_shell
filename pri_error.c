#include "shell.h"

/**
 * pri_error - Print error
 * @av: Program Name
 * @ch:Error Count
 * @command:Command
 * Return: Void
 */
void pri_error(char **av, int ch, char **command)
{
	char *errror = _itoa(ch);

	PRINTER(av[0]);
	PRINTER(": ");
	PRINTER(error);
	PRINTER(": ");
	PRINTER(command[0]);
	PRINTER(": Illegal number: ");
	PRINTER(command[1]);
	PRINTER("\n");
	free(er);
}
