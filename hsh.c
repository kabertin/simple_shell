#include "shell.h"

/**
 * hsh - main shell loop
 * @info: info struct
 * @av: argument vector
 *
 * Return: success 0 or 1 fail
 */

int hsh(info_t *info, char **av)
{
	int bu_etr = 0;
	ssize_t etr = 0;

	while (etr != -1 && bu_etr != -2)
	{
		clear_info(info);
		if (interact(info))
			_puts("$ ");
		_errorputchar(BUFFER_FLASH);
		etr = get_input(info);
		if (etr != -1)
		{
			set_info(info, av);
			bu_etr = find_builtin(info);
			if (bu_etr == -1)
				find_command(info);
		}
		else if (interact(info))
			_putchar('\n');
		free_info(info, 0);
	}
	write_hist(info);
	free_info(info, 1);
	if (!interact(info) && info->stat)
		exit(info->stat);
	if (bu_etr == -2)
	{
		if (info->error_nbr == -1)
			exit(info->stat);
		exit(info->error_nbr);
	}
	return (bu_etr);
}
