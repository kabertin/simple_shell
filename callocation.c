#include "shell.h"

/**
 * callocation - array Memory allocation
 * @size: Size
 * Return: Void Pointer
 */
void *callocation(unsigned int size)
{
	char *x;
	unsigned int i;

	if (size == 0)
	return (NULL);
	x = malloc(size);
	if (x == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		x[i] = '\0';
	}
	return (x);
}
