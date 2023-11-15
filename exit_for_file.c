#include "shell.h"

/**
 * exit_for_file - exit shell cas
 * @l: line of file
 * @command: command
 * @filedesc: filedescriptor
 * Return: void
 */
void exit_for_file(char **command, char *l, FILE *filedesc)
{
	int stat, a = 0;

	if (command[1] == NULL)
	{
		free(l);
		free(command);
		fclose(filedesc);
		exit(errno);
	}
	while (command[1][a])
	{
		if (_isalph(command[a][a++]) < 0)
		{
			pri_error("illegal number");
		}
	}
	stat = _atoi(command[1]);
	free(l);
	free(command);
	fclose(filedesc);
	exit(stat);
}
