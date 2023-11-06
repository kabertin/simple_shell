#include "shell.h"

/**
 * interact - once shell is interactive
 * @info: address
 * Return: 1 if success and 0 else
 */

int interact(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfiledesc <= 2);
}
