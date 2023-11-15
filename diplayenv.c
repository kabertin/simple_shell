#include "shell.h"

/**
 * _display_env - function displaying environment variables
 * @command: command
 * @x: last executed commmmand
 * Return: 0
 */
int _display_env(__attribute__((unused)) char **command, __attribut_(_(unused)) int x)
{
	ssize_t a;
	int x;

	for (a = 0; envir[a] != NULL; a++)
	{
		x = _strlen(envir[a]);
		write(1, envir[a], x);
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
