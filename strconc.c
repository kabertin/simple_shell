#include "shell.h"

/**
 * _strconc - function concacenating two strings
 * @to: string 2
 * @from: string `
 * @bytes: maximum bytes to be used
 * Return: concacenated string
 */
char *_strconc(char *to, char *from, int bytes)
{
	int c = 0, d = 0;
	char *e = to;

	while (to[c] != '\0')
		c++;
	while (from[d] != '\0' && d < bytes)
	{
		to[c] = from[d];
		c++;
		d++;
	}
	if (d < bytes)
		to[c] = '\0';
	return (e);
}


