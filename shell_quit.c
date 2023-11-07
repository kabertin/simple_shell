#include "shell.h"

/**
 * shell_quit - exits from shell
 * @info: arg
 * Return: 0 success
 */

int shell_quit(info_t *info)
{
	int getout;

	if (info->av[1])
	{
		getout = _atoierror(info->av[1]);
		if (getout == -1)
		{
			info->stat = 2;
			print_error(info, "Illegal number: ");
			_errorputs(info->av[1]);
			_errorputchar('\n');
			return (1);
		}
		info->error_nbr = _atoierror(info->av[1]);
		return (-2);
	}
	info->error_nbr = -1;
	return (-2);
}
