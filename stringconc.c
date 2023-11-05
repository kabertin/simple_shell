#include "shell.h"

/**
 * _stringconc - function that concacenates two strings
 * @to: destination
 * @from: sourcee
 * Return: pointer to destination
 */
char *_stringconc(char *to, char *from)
{
	char *r = to;

	while (*to)
		to++;
	while (*from)
		*to++ = *from++;
	*to = *from;
	return (r);
}
