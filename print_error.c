#include "shell.h"

/**
 * print_error - prints error
 * @info: argument info
 * @spec: error type
 * Return: 0 if no num, converted num, -1 error
 */

void print_error(info_t *info, char *spec)
{
	_errorputs(info->fname);
	_errorputs(": ");
	print_delimiter(info->line_c, STDERR_FILENO);
	_errorputs(": ");
	_errorputs(info->av[0]);
	_errorputs(": ");
	_errorputs(spec);
}
