#include "shell.h"

/**
 * realloc - function reallocating a block of memory
 * @p: pointer to previously allocated memory
 * @old: previous byte size
 * @nw: new byte size
 * Return: pointer to old
 */
void *realloc(void *p, unsigned int old, unsigned int nw)
{
	char *a;

	if (!p)
		return (malloc(nw));
	if (!nw)
		return (free(p), NULL);
	if (nw == old)
		return (p);
	a = malloc(nw);
	if (!a)
		return (NULL);
	old = old < nw ? old : nw;
	while (old--)
		a[old] = ((char *)p)[old];
	free(p);
	return (p);
}
