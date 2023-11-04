#include "shell.h"

/**
 * _strcpy - function that copies strings
 * @dest: destination
 * @src: source
 * Return: pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[a])
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = 0;
	return (dest);
}
