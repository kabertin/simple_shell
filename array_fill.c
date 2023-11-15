#include "shell.h"

/**
 * array_fill - Fill An Array
 * @c:Void Pointer
 * @element: Int
 * @length:Length Int
 * Return: Void Pointer
 */
void *array_fill(void *c, int element, unsigned int length)
{
	char *x = c;
	unsigned int i = 0;

	while (i < length)
	{
		*x = element;
		x++;
		i++;
	}
	return (c);
}
