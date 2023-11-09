#include "shell.h"

/**
 * get_history - function that gets history
 * @info: parameter
 * Return: allocated string
 */
char *get_history(info_t *info)
{
	char *b, d;

	d = _getenv(info, "HOME=");
	if (!d)
		return (NULL);
	b = malloc(sizeof(vhar) * (_strlen(d) + _strlen(HIST_FILE) + 2));
	if (!b)
		return (NULL);
	b[0] = 0;
	_strcpy(b, d);
	_string_conc(b, HIST_FILE);
	_string_conc(b, HIST_FILE);
	return (b);
}
