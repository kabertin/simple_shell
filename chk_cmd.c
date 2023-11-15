#include "shell.h"

/**
 * chk_cmd - Excute Simple Shell Command
 * @cmand:Parsed Command
 * @input: User Input
 * @ch: Shell Excution Time
 * @av: Program Name
 * Return: 1 Case Command Null -1 Wrong Command 0 Command Excuted
 */
int chk_cmd(char **cmand, char *input, int ch, char **av)
{
	int stat;
	pid_t pid;

	if (*cmand == NULL)
	{
		return (-1);
	}

	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}

	if (pid == 0)
	{
		if (_strcmp(*cmand, "./", 2) != 0 && _strcmp(*cmand, "/", 1) != 0)
		{
			path_command(cmand);
		}

		if (execve(*cmand, cmand, environ) == -1)
		{
			print_error1(cmand[0], ch, av);
			free(input);
			free(cmand);
			exit(EXIT_FAILURE);
		}
		return (EXIT_SUCCESS);
	}
	wait(&stat);
	return (0);
}
