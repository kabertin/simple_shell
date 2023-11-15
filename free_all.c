#include "shell.h"

/**
 * all_free - free all pointer
 * @command: Points to array
 * @line:Char Pointer
 * Return: Void
 */
void all_free(char **command, char *line)
{
	free(command);
	free(line);
	command = NULL;
	line = NULL;
}
