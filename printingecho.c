#include "shell.h"

/**
 * _printing_echo - executes normal echo
 * @command: command
 * Return: 0 or -1
 */
int _printing_echo(char **command)
{
	pid_t p;
	int stat;

	p = fork();
	if (p == 0)
	{
		if (execve("/bin/echo", command, envir) == -1)
		{
			return (-1);
		}
		exit(EXIT_FAILURE);
	}
	else if (p < 0)
	{
		return (-1);
	}
	else
	{
		do {
				waitpid(p, &stat, WUNTRACED);
		} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
	}
	return (1);

