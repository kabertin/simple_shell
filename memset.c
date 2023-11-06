#include "shell.h"
/**
 * _memset - function that fills memory
 * @m: pointer to memory address
 * @bytes: bytes to fill with
 * @n: nbr of bytes filled
 * Return: pointer to memory
 */
char *_memset(char *m, char bytes, unsugned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		m[a] = bytes;
	return (m);
}
