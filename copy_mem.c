#include "shell.h"

/**
 * copy_mem - memory Copy
 * @dest: Dest Pointer
 * @src: Src Pointer
 * @size: Size
 * Return: Void Pointer
 */

char *copy_mem(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
