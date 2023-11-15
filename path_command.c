#include "shell.h"

/**
 * path_command - Search In $PATH For Excutable Command
 * @cmand: Parsed Input
 * Return: 1  Failure  0  Success.
 */
int path_command(char **cmand)
{
	char *ph, *val, *cmand_ph;
	struct stat buffer;

	ph = get_env("PATH");
	val = string_to_k(ph, ":");
	while (val != NULL)
	{
		cmand_ph = builder(*cmand, val);
		if (stat(cmand_ph, &buffer) == 0)
		{
			*cmand = _strdup(cmand_ph);
			free(cmand_ph);
			free(ph);
			return (0);
		}
		free(cmand_ph);
		val = string_to_k(NULL, ":");
	}
	free(ph);
	return (1);
}
