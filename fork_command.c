#include "shell.h"

/**
 * fork_command - spawn a process of a given cmd
 * @info: argument
 * Return: nothing
 */

void fork_command(info_t *info)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return;
	}
	if (child_pid == 0)
	{
		if (execve(info->path, info->av, get_environ(info)) == -1)
		{
			free_info(info, 1);
			if (errno == EACCES)
				exit(126);
			exit(1);
		}
	}
	else
	{
		wait(&(info->stat));
		if (WIFEXITED(info->stat))
		{
			info->stat = WEXITSTATUS(info->stat);
			if (info->stat == 126)
				print_error(info, "Permission denied");
		}
	}
}
