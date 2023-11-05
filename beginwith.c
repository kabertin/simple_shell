#include "shell.h"

/**
 * begin_with - function that checks if the beginning is haystack
 * @h: string to search
 * @sub: substring
 * Return:  pointer to h or NULL
 */
char *begin_with(const char *h, const char *sub)
{
	while (*sub)
		if (*sub++ != *h)
			return (NULL);
	return ((char *)h);
}
