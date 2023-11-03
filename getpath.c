#include "shell.h"

/**
 * get_path - finds command in the path of a string
 * @info: info structure
 * @paths: path of the string
 * @command: command to be found
 * Return: whole path of a command or NULL
 */
char *get_path(info_t *info, char *paths, char *command)
{
	int x = 0, y = 0;
	char *path;

	if (!paths)
		return (NULL);
	if ((_strlen(command) > 2) && begin_with(command, "./"))
	{
		if (is_command(info, command))
			return (command);
	}
	while (1)
	{
		if (!paths[x] || paths[x] == ':')
		{
			path = duplicate_chars(paths, y, x);
			if (!*path)
				_stringcat(path, command);
			else
			{

				_stringcat(path, "/");
				_stringcat(path, command);
			}
			if (is_command(info, path))
				return (path);
			if (!paths[x])
				break;
			y = x;
		}
		x++;
	}
	return (NULL);
}
