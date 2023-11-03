#include "shell.h"

/**
 * is_command - finds out if a file is an executable commmand
 * @info: information structur
 * @path: way to the file
 * Return: 1 or 0
 */
int is_command(info_t *info, char *path)
{
	struct status st;

	(void)info;
	if (!path || status(path, &st))
		return (0);
	if (st.st_mode & S_IFREG)
	{
		return (1);
	}
	return (0);
}
