#include "shell.h"

/**
 * _strdup - function that duplicates a string
 * @s: string to be duplicated
 * Return: pointer to duplicated string
 */

char *_strdup(const char *s)
{
	int len = 0;
	char *r;

	if (s == NULL)
		return (NULL);
	while (*s++)
		len++;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	for (len++; len--;)
		r[len] = *--s;
	return (r);
}
