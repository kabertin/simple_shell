#include "shell.h"

/**
 * change_dir - change dir
 * @info: arg
 * Return: 0 all the time
 */

int change_dir(info_t *info)
{
	char *s;
	char *dir;
	char buffer[1024];
	int dir_rest;

	s = getcwd(buffer, 1024);
	if (!s)
		_puts("Command failure\n");
	if (!info->av[1])
	{
		dir = _getenv(info, "HOME=");
		if (!dir)
			dir_rest = /* Wrong */
				chdir((dir = _getenv(info, "PWD=")) ? dir : "/");
		else
			dir_rest = chdir(dir);
	}
	else if (_stringcmp(info->av[1], "-") == 0)
	{
		if (!_getenv(info, "OLDPWD="))
		{
			_puts(s);
			_putchar('\n');
			return (1);
		}
		_puts(_getenv(info, "OLDPWD=")), _putchar('\n');
		dir_rest = /* Wrong */
			chdir((dir = _getenv(info, "OLDPWD=")) ? dir : "/");
	}
	else
		dir_rest = chdir(info->av[1]);
	if (dir_rest == -1)
	{
		print_error(info, "can't cd to ");
		_errorputs(info->av[1]), _errorputchar('\n');
	}
	else
	{
		_setenv(info, "OLDPWD", _getenv(info, "PWD="));
		_setenv(info, "PWD", getcwd(buffer, 1024));
	}
	return (0);
}
