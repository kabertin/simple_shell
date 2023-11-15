#include "shell.h"

/**
 * _cdir - function to change directory
 * @command: command
 * @x: last executed command
 * Return: 0 or 1
 */
int _cdir(char **command, __attribute__((unused))int x)
{
	int v = -1;
	char c[PATH_MAX];

	if (command[1] == NULL)
		v = chdir(getenv("HOME"));
	else if (_stringcmp(command[1], "-") == 0)
	{
		v = chdir(getenv("OLDPWD"));
	}
	else
		v = chdir(command[1]);
	if (v == -1)
	{
		perror("hsh");
		return (-1);
	}
	else if (v != -1)
	{
		getcwd(c, sizeof(c));
		setenv("OLDPWD", getenv("PWD"), 1);
		setenv("PWD", c, 1);
	}
	return (0);
}
