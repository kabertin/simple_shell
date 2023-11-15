#include "shell.h"

/**
 * environ_creat - Creat Array of Enviroment Variable
 * @envir: Array of Enviroment Variable
 * Return: Void
 */
void environ_creat(char **envir)
{
	int i;

	for (i = 0; envir[i]; i++)
		envir[i] = _strdup(envir[i]);
	envir[i] = NULL;
}
