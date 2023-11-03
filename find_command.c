#include "shell.h"

/**
 * find_command - get in path the command
 * @info: argument
 * Return: nothing
 */

void find_command(info_t *info)
{
	int x;
	int y;
	char *path = NULL;

	info->path = info->av[0];
	if (info->line_cf == 1)
	{
		info->line_c++;
		info->line_cf = 0;
	}
	for (x = 0, y = 0; info->arg[x]; x++)
		if (!is_delimiter(info->arg[x], " \t\n"))
			y++;
	if (!y)
		return;

	path = get_path(info, _getenv(info, "PATH="), info->av[0]);
	if (path)
	{
		info->path = path;
		fork_command(info);
	}
	else
	{
		if ((interact(info) || _getenv(info, "PATH=") 
			|| info->arg[0][0] == '/') && is_command(info, info->av[0]))
			fork_command(info);
		else if (*(info->arg) != '\n')
		{
			info->stat = 127;
			print_error(info, "not found\n");
		}
	}
}
